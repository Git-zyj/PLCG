/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245481
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) (+(18446744073709551615ULL)));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [(short)5] [i_0 + 2] [i_0 - 2] [i_0 - 1])), (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (arr_3 [i_0] [i_0 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 0LL)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_12 [i_2] [(_Bool)1] [i_2] [(unsigned short)7] [i_2] = ((/* implicit */int) arr_5 [i_1] [i_2]);
                                arr_13 [10ULL] [i_1] [i_2] [i_3] [i_2] [i_4] [i_4] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_4]))) ^ (((unsigned int) (unsigned char)71)));
                                arr_14 [i_0] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) var_0);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((9ULL) != (min((18446744073709551611ULL), (((/* implicit */unsigned long long int) 1787007848)))))))) == (9ULL)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_3);
    var_19 = ((/* implicit */unsigned char) var_3);
    var_20 = min((8ULL), ((-((~(18446744073709551615ULL))))));
}
