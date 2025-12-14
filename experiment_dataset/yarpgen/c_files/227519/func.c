/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227519
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
    var_16 = ((/* implicit */int) (signed char)33);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_7 [i_1] [i_0 - 1] |= ((/* implicit */unsigned char) ((13204691006509947573ULL) == (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_4 [i_1])) ? (8474210183161640948LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))))))))));
                var_17 = max((((((/* implicit */_Bool) 1916214051U)) ? (1916214054U) : (1916214054U))), (var_11));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) (-(((var_5) ? (((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1]))))));
                                arr_17 [i_3] [i_3] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) ((((1916214054U) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) > (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])))))))) ? (min((arr_3 [i_0 + 1] [i_0 + 1] [i_2]), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])))) : (5109503943775885358ULL)));
                                arr_18 [i_0] [i_1] [i_0] [i_4] [i_0] = var_12;
                            }
                        } 
                    } 
                    var_18 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0] [i_1] [i_1]))))) ? (1889804345U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (unsigned short)11720)))))))));
                    /* LoopSeq 1 */
                    for (short i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) var_2);
                        var_20 = ((/* implicit */short) var_4);
                    }
                    var_21 = ((/* implicit */long long int) 2388498778U);
                }
            }
        } 
    } 
}
