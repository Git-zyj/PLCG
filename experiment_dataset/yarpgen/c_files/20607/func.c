/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20607
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) (-(max((arr_1 [i_1 + 1]), (((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1 - 1]))))));
                var_14 -= ((/* implicit */int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_1)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28058))) : (var_7))) : (((/* implicit */long long int) (+(((/* implicit */int) var_5)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 16; i_3 += 2) /* same iter space */
                    {
                        var_16 = (!(((/* implicit */_Bool) arr_3 [i_0] [i_3])));
                        var_17 -= ((/* implicit */signed char) (~((+(((/* implicit */int) (short)-28058))))));
                        arr_11 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */int) arr_6 [i_1] [i_3 - 2]);
                    }
                    for (unsigned int i_4 = 2; i_4 < 16; i_4 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) (~((~(arr_7 [i_0] [i_2] [(short)7])))));
                        var_19 = -9199418310766170671LL;
                    }
                }
                /* vectorizable */
                for (int i_5 = 3; i_5 < 16; i_5 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) 36027697507336192LL);
                    arr_16 [i_1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_6 [(_Bool)1] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1] [i_1 - 1]))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_5);
}
