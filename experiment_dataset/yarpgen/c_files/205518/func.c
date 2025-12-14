/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205518
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_6))));
    var_19 = ((/* implicit */int) min((var_19), (var_11)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_7))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))))), ((unsigned char)248)))))))));
                arr_6 [i_0] [i_0 - 2] [(signed char)8] &= ((/* implicit */signed char) arr_0 [i_0 + 2]);
                /* LoopSeq 4 */
                for (int i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    var_22 ^= min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_0 + 2])) : (((/* implicit */int) arr_5 [i_0 + 2])))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_23 |= (((!(min((var_2), (arr_11 [i_0]))))) ? (((((/* implicit */long long int) ((unsigned int) var_2))) / (((long long int) (unsigned char)7)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)8))))), ((unsigned char)7))))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) && (((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))), ((signed char)(-127 - 1)))))));
                        var_25 &= ((/* implicit */signed char) arr_2 [i_1] [i_1]);
                        var_26 -= ((/* implicit */unsigned short) ((((unsigned long long int) ((((/* implicit */int) (signed char)-7)) % (((/* implicit */int) (_Bool)1))))) == (((/* implicit */unsigned long long int) ((-230273110) | (572259295))))));
                        var_27 += ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_2 - 1])) < (((/* implicit */int) (unsigned char)1))))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (var_7)))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        var_28 ^= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 572259304)) ? (13588978454107062716ULL) : (((/* implicit */unsigned long long int) -572259305)))));
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) 15888619041666528963ULL))));
                        arr_14 [(unsigned short)0] [i_0] [i_0] [i_4] &= ((/* implicit */short) -1526301103);
                        var_30 &= ((/* implicit */int) arr_5 [i_2 - 1]);
                    }
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(min((var_10), (((/* implicit */long long int) var_11))))))), (arr_9 [i_0 + 1] [i_0 - 1] [i_2 + 1] [i_2 + 1] [i_2]))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
                {
                    arr_17 [4U] [4U] [4U] |= ((/* implicit */short) ((unsigned short) arr_13 [i_5]));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        for (signed char i_7 = 3; i_7 < 10; i_7 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (+(((unsigned int) ((unsigned short) var_10))))))));
                                var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) var_10))));
                                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (~(0LL))))));
                                var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((signed char) max((arr_7 [12] [i_0 - 2] [i_7 + 2] [i_6]), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (unsigned short)8)))))))))));
                                var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) var_14))));
                            }
                        } 
                    } 
                    var_37 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_5) / (((/* implicit */long long int) 131071))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) -2147483644)), (var_12))))));
                    var_38 -= ((/* implicit */unsigned long long int) (_Bool)1);
                }
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
                {
                    var_39 &= ((/* implicit */int) max((min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) ^ (957506922U))), (((/* implicit */unsigned int) max((-572259304), (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) var_13))));
                    var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((var_2) ? (max((((/* implicit */long long int) arr_11 [i_0 + 1])), (var_12))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) + (957506907U)))))))))));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 1; i_9 < 13; i_9 += 2) 
                    {
                        arr_30 [(short)4] [(short)4] [(short)4] [i_9] [(unsigned char)1] [4LL] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6294862231436318219LL)) ? (arr_0 [i_1]) : (arr_0 [i_1])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_9 - 1] [9LL])) ? (((/* implicit */int) arr_29 [i_0] [i_1] [9] [1ULL] [i_1])) : (((/* implicit */int) (_Bool)1))))), (min((arr_13 [i_1]), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_8] [(short)4])))))))));
                        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_8 [i_0 - 1])) == (((/* implicit */int) (unsigned char)8)))) ? (((((/* implicit */_Bool) arr_18 [i_0 + 2] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (957506922U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_9 - 1])) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) (unsigned char)8))))))))));
                        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) arr_24 [i_0]))));
                        var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((int) var_2)))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_10 = 3; i_10 < 13; i_10 += 1) /* same iter space */
                    {
                        var_44 *= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_0 + 2]))));
                        var_45 -= ((/* implicit */unsigned char) arr_22 [i_0] [7ULL] [i_8] [i_10] [i_0]);
                    }
                    for (signed char i_11 = 3; i_11 < 13; i_11 += 1) /* same iter space */
                    {
                        var_46 += ((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_7 [i_11 + 1] [i_11 + 1] [i_0 - 1] [i_11 + 1])))), ((~(min((((/* implicit */int) var_6)), (var_13)))))));
                        var_47 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_10) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))), (arr_12 [i_0 - 2] [i_8] [i_0 - 2] [i_8] [i_11 - 1])))) ? (min((((/* implicit */unsigned long long int) min((438124549U), (((/* implicit */unsigned int) var_11))))), (min((1883528436374303403ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(unsigned char)9] [i_0 + 2]))))))));
                        var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) min((((/* implicit */int) arr_8 [i_0])), (var_13))))))) ? (var_10) : (((/* implicit */long long int) min((((/* implicit */int) min((var_2), ((_Bool)0)))), ((+(((/* implicit */int) arr_3 [11LL] [11LL]))))))))))));
                        arr_35 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (unsigned short)46731);
                    }
                }
                for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
                {
                    var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((arr_10 [i_1]) ^ (((/* implicit */unsigned int) var_17))))))) | (((((/* implicit */unsigned long long int) 1556600387)) & (7278914730151277206ULL))))))));
                    var_50 = ((/* implicit */_Bool) min((var_50), (((((/* implicit */int) arr_33 [i_0] [i_0] [i_1] [i_0])) < (((/* implicit */int) var_4))))));
                }
            }
        } 
    } 
}
