/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29276
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
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))) - (var_14)))) * (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_13)) : (var_8))), (((/* implicit */unsigned long long int) ((3634204039324193222LL) & (-3634204039324193223LL))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */int) ((arr_0 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((unsigned long long int) 4605021900575460428LL)) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((14653752707815223181ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                                var_16 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) var_0)) ? (17206276455933324210ULL) : (((/* implicit */unsigned long long int) arr_1 [i_2 - 1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3634204039324193220LL)) ? (arr_4 [i_0] [i_1 + 2]) : (((/* implicit */unsigned long long int) -901982497))))) && ((_Bool)1))))));
                                var_17 = (!(((/* implicit */_Bool) max((max((3634204039324193222LL), (((/* implicit */long long int) (signed char)31)))), (((/* implicit */long long int) arr_9 [i_1 - 2]))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] [i_1 + 1] [i_1 + 2] = ((/* implicit */_Bool) max((((arr_4 [i_0] [i_1]) - (18065517774954166389ULL))), (min((3511351230232179928ULL), (min((17206276455933324197ULL), (((/* implicit */unsigned long long int) arr_9 [i_0]))))))));
                var_18 |= ((/* implicit */int) arr_9 [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_14);
}
