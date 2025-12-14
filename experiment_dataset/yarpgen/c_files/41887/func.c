/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41887
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
    var_17 *= ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */unsigned int) min((var_16), (arr_0 [i_0 + 2])))) : (((unsigned int) 3360432339U)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 1])) == (2147483647)));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_0 + 1] [i_0 + 1] [i_0 + 1]))) : (5137486775063643571LL))) > (((/* implicit */long long int) arr_7 [i_2 + 1]))))), ((-(((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
