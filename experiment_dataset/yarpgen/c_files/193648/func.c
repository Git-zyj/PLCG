/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193648
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_20 *= ((/* implicit */signed char) var_15);
                                var_21 = ((/* implicit */unsigned int) (unsigned char)255);
                                var_22 = ((/* implicit */unsigned short) max((var_22), ((unsigned short)24)));
                            }
                        } 
                    } 
                    var_23 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_2] [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) arr_5 [i_2] [i_0] [i_0] [i_0])) : (min((((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_0] [i_0] [i_2]), (((/* implicit */unsigned int) (short)-18487))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_0] [i_2]))) : (3849092950964094801ULL)))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_24 &= ((/* implicit */signed char) min((((arr_5 [12LL] [i_2] [i_0] [i_6]) * (((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [i_0] [(signed char)10] [(signed char)6] [(signed char)6] [i_6]), (((/* implicit */short) arr_16 [(unsigned short)10] [i_1] [i_1] [i_1] [i_1])))))))), (((unsigned int) (+(((/* implicit */int) arr_7 [i_0] [i_5] [i_2])))))));
                                var_25 = ((/* implicit */int) var_11);
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1] [i_5 + 1] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)18)) && (((/* implicit */_Bool) arr_1 [i_6] [i_0]))))) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_6] [i_5]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 14; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) var_6);
                                var_28 = ((/* implicit */int) ((unsigned long long int) (-(arr_4 [i_7 - 1] [i_7 - 1]))));
                                var_29 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */short) (unsigned char)30)), ((short)-32762))))));
                                var_30 = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (unsigned char)233))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */_Bool) var_4);
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (-(((/* implicit */int) (((-(var_8))) == (var_8)))))))));
    /* LoopNest 3 */
    for (unsigned short i_9 = 3; i_9 < 17; i_9 += 3) 
    {
        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            for (unsigned short i_11 = 3; i_11 < 19; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 1; i_12 < 19; i_12 += 3) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_11])) ? (arr_29 [i_11]) : (arr_29 [i_11])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_9 + 2] [i_11 + 1]))))) : (((/* implicit */int) arr_26 [i_9 - 3] [i_11 + 1]))));
                                var_34 = (!(((/* implicit */_Bool) arr_22 [i_12 - 1])));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) arr_26 [10ULL] [i_10]))));
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */unsigned int) var_2);
}
