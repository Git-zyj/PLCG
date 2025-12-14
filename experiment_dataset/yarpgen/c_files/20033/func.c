/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20033
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 7; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [i_0 - 1])) * (((/* implicit */int) arr_3 [i_0 - 1])))) & (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))))));
                    arr_7 [7] [i_2] [i_1] [i_0] = (+(-9223372036854775792LL));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_10 [(signed char)2] [i_2 + 3] [i_1] [i_0 - 1] = ((/* implicit */unsigned short) ((max(((~(arr_8 [i_0] [i_1] [i_2 - 1]))), (((/* implicit */unsigned int) arr_4 [(unsigned short)2] [i_2 + 3] [i_2 - 2])))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) ? ((-(((/* implicit */int) arr_2 [i_2] [i_2 - 1])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)216))) < (arr_0 [8LL])))))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((var_15) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4] [(short)6] [i_2 + 1])) ^ (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_2 + 3])) : (((/* implicit */int) arr_12 [9U] [i_3] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967284U))))))))));
                            var_22 |= ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)215))))), (max((8288804493305583351LL), (((/* implicit */long long int) var_6)))))));
                        }
                        var_23 = ((/* implicit */short) var_1);
                        arr_13 [i_0] [6LL] [i_2] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))));
                    }
                    var_24 *= arr_0 [i_0 - 1];
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_0))));
}
