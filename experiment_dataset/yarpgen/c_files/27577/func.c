/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27577
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) min((var_5), (((/* implicit */long long int) ((short) arr_7 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_1] [i_4] [i_4] [i_3] = ((/* implicit */short) max((((/* implicit */int) ((arr_1 [i_0]) && (((/* implicit */_Bool) arr_7 [i_2] [i_4]))))), (min((((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_2] [i_3])), (arr_11 [i_0] [i_1] [i_3] [3U])))), ((-(((/* implicit */int) arr_4 [i_1]))))))));
                                var_15 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) max((arr_10 [i_0] [i_0]), (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_2] [i_0] [i_0]))))), (max((13057336133404765280ULL), (((/* implicit */unsigned long long int) (short)-1)))))), (((/* implicit */unsigned long long int) min((arr_3 [i_4]), (arr_3 [i_0]))))));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned char) ((int) max((arr_8 [i_0] [i_2] [i_4]), (arr_8 [i_0] [i_0] [i_1]))));
                                var_16 ^= ((/* implicit */_Bool) min((((unsigned long long int) -268435456)), (((/* implicit */unsigned long long int) arr_7 [i_3] [i_1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = (!(((/* implicit */_Bool) var_12)));
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (short)9))));
}
