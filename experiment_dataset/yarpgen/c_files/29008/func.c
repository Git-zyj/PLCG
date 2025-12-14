/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29008
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
    var_16 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0] [i_0 + 2])) ? (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_3 [i_0])))))) : (((/* implicit */int) ((((/* implicit */int) ((signed char) -5868062535098926104LL))) < (((/* implicit */int) ((signed char) var_9))))))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0 + 2])) ? ((~(((/* implicit */int) (signed char)-31)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))) <= (arr_0 [i_0])))))))))));
                arr_4 [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-473324151) / (((/* implicit */int) (short)11613))))) ? ((+(arr_1 [i_0] [0U]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (arr_1 [i_0 + 1] [i_0 - 1]) : (((/* implicit */unsigned int) -1012814139))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (-(1607806286)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 12; i_2 += 4) /* same iter space */
    {
        var_20 |= ((/* implicit */int) arr_2 [i_2] [i_2] [i_2]);
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_5 [i_2])))) ? (((var_7) ? (var_9) : (((/* implicit */unsigned int) 473324151)))) : (arr_3 [i_2 + 1])));
    }
    /* vectorizable */
    for (signed char i_3 = 2; i_3 < 12; i_3 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */int) var_9);
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 4; i_4 < 12; i_4 += 1) 
        {
            for (unsigned char i_5 = 2; i_5 < 12; i_5 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        arr_18 [11U] [i_3 - 1] [i_4] [i_3 + 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)215))));
                        /* LoopSeq 4 */
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_3 - 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (1273171923) : (((/* implicit */int) (short)11613))))))))));
                            arr_23 [i_4] [i_4] [i_4] [6U] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_4 - 4])) ? (arr_0 [i_3 + 1]) : (arr_0 [i_3])));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -723385640)) ? (arr_15 [i_6 + 1] [i_6 + 1] [6U] [i_6]) : (arr_15 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6])));
                            var_25 = ((/* implicit */signed char) -1952174366);
                        }
                        for (long long int i_8 = 2; i_8 < 10; i_8 += 3) /* same iter space */
                        {
                            var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_20 [3ULL] [i_4 - 1] [i_4 - 4] [i_4] [i_4 - 3] [i_4 + 1]) : (arr_20 [i_3] [i_3 - 1] [i_3] [i_3 + 1] [(unsigned char)11] [i_3 - 2])));
                            var_27 = ((/* implicit */unsigned int) -6376385775774140089LL);
                        }
                        for (long long int i_9 = 2; i_9 < 10; i_9 += 3) /* same iter space */
                        {
                            var_28 -= ((/* implicit */unsigned long long int) arr_21 [i_6 + 1] [i_6 + 1] [i_3] [i_6 + 1] [i_6 + 1]);
                            var_29 = ((/* implicit */long long int) ((unsigned int) var_5));
                        }
                        for (long long int i_10 = 2; i_10 < 10; i_10 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */int) ((unsigned long long int) arr_10 [i_10 - 2] [i_10 + 2]));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1012814132)) ? (((/* implicit */unsigned int) 743374040)) : (3411413844U)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_2))))) : (arr_21 [i_3 - 1] [i_3 - 1] [i_4] [i_4] [i_3 - 1])));
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (arr_20 [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_3]))))))));
                            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((signed char) var_11)))));
                            var_34 -= ((/* implicit */short) ((signed char) arr_21 [i_3] [i_3] [i_3] [i_3] [8LL]));
                        }
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1768905380)) ? (1542468352U) : (((/* implicit */unsigned int) 1567065046)))))))));
                    }
                    for (signed char i_11 = 2; i_11 < 12; i_11 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_27 [i_11] [i_11] [i_11 - 1] [(signed char)11] [i_11])))));
                        var_37 = ((/* implicit */unsigned int) ((signed char) arr_15 [i_3] [i_3] [i_3] [i_3]));
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_11 + 1] [i_11 + 1])))))));
                        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((long long int) 2147483647)))));
                    }
                    for (unsigned int i_12 = 3; i_12 < 12; i_12 += 3) 
                    {
                        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((((-6376385775774140113LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-29)) + (89))))))));
                        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3] [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))) : (arr_12 [3U] [i_4] [i_5 + 1])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 2; i_13 < 9; i_13 += 2) 
                    {
                        var_42 = ((/* implicit */_Bool) ((unsigned int) arr_9 [i_4] [i_4 - 3]));
                        var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) var_15))));
                    }
                }
            } 
        } 
    }
}
