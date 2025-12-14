/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195270
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((long long int) (+(((/* implicit */int) var_7)))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_13 = ((int) arr_5 [i_0] [i_1] [i_2]);
                        var_14 = arr_1 [i_0];
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        arr_14 [(signed char)14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_13 [i_4]) : (arr_13 [i_4])))) ? (((((((/* implicit */_Bool) (unsigned short)48565)) ? (arr_12 [11] [(unsigned short)7]) : (arr_12 [i_4] [(unsigned short)3]))) * (((arr_12 [i_4] [i_4]) / (1874155736))))) : (min((arr_13 [i_4]), (arr_13 [i_4])))));
        var_15 *= ((/* implicit */signed char) arr_12 [i_4] [i_4]);
    }
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) > (max((var_4), (((/* implicit */int) var_10))))))))))));
}
