/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4362
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_15 = (~(((/* implicit */int) (unsigned char)249)));
        var_16 = ((/* implicit */short) arr_0 [i_0]);
        arr_3 [i_0] = ((((/* implicit */int) arr_1 [i_0])) >> (((-9178982307464831566LL) + (9178982307464831566LL))));
    }
    for (short i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) max((-1583712927), ((~(((/* implicit */int) (unsigned char)249))))));
                        arr_16 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 2] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_13))));
                        var_18 = ((/* implicit */short) var_4);
                    }
                } 
            } 
        } 
        var_19 = arr_13 [i_1];
    }
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)2)) == (((/* implicit */int) (_Bool)0))));
}
