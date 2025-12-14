/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41858
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
    var_20 = ((/* implicit */long long int) var_17);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = 3570266657916227603LL;
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(-2980116341125600079LL))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_4 = 1; i_4 < 13; i_4 += 4) 
                            {
                                var_22 = ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_1 [i_0 + 2] [i_0 + 2]) : (((long long int) 1529059067362129729LL)));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_2 + 1]))));
                                var_23 = ((/* implicit */unsigned int) (-(-1529059067362129739LL)));
                                var_24 = ((/* implicit */long long int) arr_8 [i_0] [i_4] [i_4] [i_4]);
                            }
                            arr_14 [i_0] [i_1] [i_3] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))), ((~(var_15))));
                            var_25 = max((-13LL), ((-(arr_12 [i_0] [3LL]))));
                            /* LoopSeq 1 */
                            for (long long int i_5 = 3; i_5 < 11; i_5 += 1) 
                            {
                                arr_17 [i_0] [i_2 + 2] [i_0 - 2] [i_0] = var_17;
                                arr_18 [i_0] [i_0] [i_2] [i_0] [14LL] [i_3] [i_0] |= arr_9 [i_3];
                                arr_19 [i_0] [i_0] [i_1] [i_2 - 1] = (-(((arr_12 [i_0] [i_0 + 2]) - (((/* implicit */long long int) var_0)))));
                                var_26 = ((/* implicit */unsigned int) 1529059067362129729LL);
                            }
                            var_27 = -1529059067362129705LL;
                        }
                    } 
                } 
                arr_20 [i_0] = ((/* implicit */unsigned int) max(((-(var_19))), (((/* implicit */long long int) ((arr_8 [i_1] [i_1] [i_0 - 2] [i_0]) / (arr_8 [i_0] [3U] [i_0 + 2] [i_0 + 2]))))));
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) max((var_28), ((~(((((/* implicit */_Bool) var_1)) ? (var_10) : (((((/* implicit */_Bool) -4107474110507741957LL)) ? (var_2) : (var_9)))))))));
}
