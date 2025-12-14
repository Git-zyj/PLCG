/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38998
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
    var_16 = ((/* implicit */unsigned int) var_14);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) << (((((/* implicit */int) arr_0 [i_1])) - (22))))))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_18 += ((_Bool) ((738868960) / (((/* implicit */int) arr_3 [i_0] [i_1]))));
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >= (((((/* implicit */int) arr_2 [i_1])) << (((((/* implicit */int) arr_4 [i_0] [i_3] [i_4])) - (13873)))))));
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_2] [i_1]))));
                    var_20 = ((/* implicit */unsigned int) ((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)65)))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_5] [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_1] [i_0]))));
                        arr_18 [i_0] [(short)2] [(short)2] [0ULL] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [(short)6] [i_1])) ^ (((/* implicit */int) arr_3 [i_2] [i_0]))));
                        var_22 -= var_11;
                        var_23 = ((/* implicit */_Bool) min((var_23), (((_Bool) (!(((/* implicit */_Bool) arr_0 [(_Bool)1])))))));
                        arr_19 [i_0] [i_1] [i_0] [i_1] [i_2] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)170)) || (((/* implicit */_Bool) 2595294724U))))) == (((/* implicit */int) (short)32767))));
                    }
                }
                for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    var_24 = ((/* implicit */long long int) arr_0 [i_6]);
                    var_25 = ((/* implicit */short) var_12);
                    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_6])) ? (((/* implicit */int) max((arr_9 [i_0] [19ULL]), (((/* implicit */unsigned char) var_10))))) : (((/* implicit */int) (signed char)-112)))))));
                    /* LoopNest 2 */
                    for (short i_7 = 4; i_7 < 23; i_7 += 3) 
                    {
                        for (short i_8 = 1; i_8 < 23; i_8 += 3) 
                        {
                            {
                                arr_26 [i_8] [i_7] [i_6] [i_6] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned short)48844), (min((var_0), (((/* implicit */unsigned short) arr_23 [(unsigned char)18] [i_6] [i_6] [i_1] [i_6] [i_0]))))))) << (((min((min((((/* implicit */long long int) arr_6 [i_1] [i_8] [i_6] [i_8])), (var_13))), (((/* implicit */long long int) arr_4 [i_8] [i_1] [i_8])))) + (5704989374733060621LL)))));
                                var_27 = ((/* implicit */short) ((((12269952509269300315ULL) < (((/* implicit */unsigned long long int) arr_12 [i_7 + 2] [i_1] [i_7 + 2] [i_0] [i_8 - 1])))) ? ((-((-(((/* implicit */int) (signed char)-79)))))) : (((/* implicit */int) arr_24 [23ULL] [i_8 - 1] [i_6] [i_6] [i_7]))));
                                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0] [i_8 - 1] [i_0] [i_1] [i_0] [i_0])) ? (arr_8 [i_0] [i_6] [i_8]) : (((((/* implicit */_Bool) arr_7 [i_7 + 2] [i_8] [i_6] [i_8 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7 - 4] [(unsigned short)16] [i_7 - 4] [i_8 - 1]))) : (arr_6 [i_7 - 4] [i_7 - 4] [i_7 - 4] [i_8 - 1]))))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_6]))))), (max((arr_12 [i_0] [i_1] [i_6] [i_1] [i_0]), (arr_12 [(signed char)19] [i_0] [i_1] [i_1] [i_6]))))))));
                }
                for (short i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    var_30 -= ((/* implicit */signed char) ((((var_11) ? (arr_12 [i_9] [i_1] [i_1] [i_0] [12]) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))) == ((~(arr_12 [i_0] [i_1] [i_1] [i_0] [i_1])))));
                    var_31 += ((((/* implicit */int) ((max((15067752869673126966ULL), (((/* implicit */unsigned long long int) var_5)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_1)) * (arr_8 [i_9] [i_1] [i_0]))))))) == (((/* implicit */int) max(((unsigned short)37909), (((/* implicit */unsigned short) arr_7 [i_1] [i_9] [i_1] [19LL]))))));
                    var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) (short)1653)))));
                }
                for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        arr_37 [i_0] [i_1] [1LL] [0] [i_10] = 3559126609U;
                        arr_38 [i_0] [(unsigned char)12] [i_0] = ((/* implicit */unsigned long long int) ((max((arr_21 [i_11] [i_11] [i_11] [i_11]), (arr_21 [i_1] [i_10] [i_10] [i_11]))) + ((-(arr_21 [19] [i_1] [i_10] [i_11])))));
                        var_33 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_24 [(unsigned short)13] [i_0] [22ULL] [i_10] [i_11]))));
                    }
                    var_34 = ((/* implicit */unsigned char) ((unsigned int) 3653169458255243441LL));
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_10])) ? (2207838997U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32756)))));
                }
                var_36 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_24 [i_1] [i_1] [i_0] [i_0] [i_0])))), (((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [22LL] [19U])) ^ (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                arr_39 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                arr_40 [i_1] = ((/* implicit */unsigned short) ((_Bool) min((var_6), (((/* implicit */short) ((_Bool) var_4))))));
            }
        } 
    } 
    var_37 -= ((/* implicit */unsigned int) (unsigned char)85);
    var_38 = (signed char)-123;
}
