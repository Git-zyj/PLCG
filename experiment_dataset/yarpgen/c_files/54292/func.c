/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54292
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_12 [i_1] [i_1] = ((/* implicit */_Bool) arr_1 [i_1 + 1] [i_3 - 1]);
                        arr_13 [i_0] [i_1] [(_Bool)1] [i_0] [i_0] [(short)10] = ((/* implicit */short) ((((/* implicit */int) (short)-19920)) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) || (((/* implicit */_Bool) var_1)))))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned short) var_11);
    }
    for (short i_4 = 1; i_4 < 10; i_4 += 2) 
    {
        var_14 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-19920)))))));
        var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_11 [i_4 + 2]), (arr_11 [i_4 + 2]))))));
    }
    var_16 = ((/* implicit */short) var_7);
    var_17 = ((/* implicit */signed char) (-(((((((/* implicit */int) (short)-19920)) != (((/* implicit */int) (short)-27097)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)19917))))));
    var_18 = ((/* implicit */unsigned int) 7829270899732571742LL);
}
