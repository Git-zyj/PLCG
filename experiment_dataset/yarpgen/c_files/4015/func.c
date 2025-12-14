/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4015
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
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    arr_10 [i_2] = ((/* implicit */_Bool) var_0);
                    arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) arr_7 [i_0] [i_2] [i_2] [i_1]);
                    var_18 = ((/* implicit */unsigned char) (-(arr_6 [i_0] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) var_17);
                                var_20 = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [i_0])) < (((/* implicit */int) var_16)))))))), (min((6986480061566180305ULL), (((/* implicit */unsigned long long int) arr_9 [i_1] [3])))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 1) 
                {
                    var_21 = arr_13 [i_1] [i_5 + 2] [i_0] [i_1] [(signed char)4] [i_0];
                    var_22 = ((/* implicit */short) var_5);
                }
                for (short i_6 = 3; i_6 < 12; i_6 += 4) 
                {
                    var_23 = ((/* implicit */short) min((((((/* implicit */int) arr_14 [i_6 - 1] [(unsigned short)2] [i_0])) * (((/* implicit */int) arr_14 [i_6 - 3] [(unsigned short)0] [i_0 - 1])))), (((/* implicit */int) var_14))));
                    var_24 = ((/* implicit */unsigned int) arr_12 [i_6]);
                }
                var_25 = ((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_0]))));
                var_26 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) max((arr_19 [i_0] [i_0 + 2] [9LL] [i_0]), (((/* implicit */unsigned int) var_15)))))) == ((~(((/* implicit */int) ((short) (signed char)-7)))))));
                arr_22 [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)40);
                arr_23 [3] = ((/* implicit */_Bool) arr_9 [i_0 + 2] [i_0]);
            }
        } 
    } 
    var_27 = ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (unsigned short)65535)) : (-297070386)))), (((6986480061566180305ULL) << (((906057589) - (906057551)))))))));
    var_28 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_5)) * (((unsigned int) 15771069024864014159ULL))))), (((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) var_10))));
}
