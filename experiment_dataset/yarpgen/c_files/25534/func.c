/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25534
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_1 + 1] [i_0] [i_0] = ((/* implicit */signed char) min((arr_3 [i_1]), (((/* implicit */unsigned long long int) (((((_Bool)0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_0] [i_1])))) / (((/* implicit */int) arr_0 [i_0])))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1])))))));
                    var_14 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((unsigned long long int) (signed char)-108))) ? (max((((/* implicit */unsigned long long int) (signed char)76)), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_2] [i_1 + 1]), (arr_0 [i_0])))))))));
                }
                /* LoopNest 3 */
                for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 1])) >= (((/* implicit */int) arr_0 [i_1 + 1])))))) : (arr_5 [i_1] [(_Bool)1])));
                                var_16 &= max((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_15 [i_3]), ((_Bool)0))))))), (max((3572163998586560799ULL), (max((14874580075122990814ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                                var_17 = ((/* implicit */_Bool) min((var_6), (((((/* implicit */_Bool) 14874580075122990822ULL)) ? (12957639682473306650ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                                arr_19 [i_3] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_1 + 1])) != (((/* implicit */int) ((arr_0 [i_3]) && (var_1))))))) | ((+(((((/* implicit */int) var_1)) - (((/* implicit */int) var_5))))))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_0] [i_0] = var_6;
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_12);
}
