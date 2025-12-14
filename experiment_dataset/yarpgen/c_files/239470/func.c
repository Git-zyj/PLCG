/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239470
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
                var_11 = ((/* implicit */_Bool) max((((/* implicit */long long int) max(((+(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) max((((/* implicit */short) var_6)), (var_2))))))), (arr_3 [i_0] [i_1])));
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (_Bool)1))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_13 ^= ((/* implicit */unsigned long long int) ((unsigned int) 3770321550U));
                    arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((max((max((((/* implicit */long long int) (short)-21359)), (arr_5 [i_0] [i_1] [i_2]))), (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (var_8)))))) != (((/* implicit */long long int) 3770321550U))));
                }
                for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    var_14 ^= ((/* implicit */signed char) var_5);
                    var_15 += ((/* implicit */_Bool) arr_3 [(signed char)6] [(signed char)6]);
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (long long int i_5 = 3; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((1216899169U) ^ (1216899169U))), (((/* implicit */unsigned int) var_8))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 11LL)) ? (3770321536U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (arr_12 [i_4] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)38)))))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_4] [i_5] = ((/* implicit */signed char) ((((max(((_Bool)1), (arr_13 [i_0] [i_0] [i_0]))) ? (((/* implicit */int) min((((/* implicit */short) var_3)), (var_2)))) : (((((/* implicit */int) var_5)) | (((/* implicit */int) var_2)))))) * (((/* implicit */int) ((signed char) (!(var_5)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_5);
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((524645752U), (534134278U))))));
    var_19 = ((/* implicit */int) min((-1LL), (((/* implicit */long long int) (_Bool)1))));
}
