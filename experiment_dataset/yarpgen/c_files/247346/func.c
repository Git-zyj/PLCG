/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247346
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_16 ^= ((/* implicit */short) max(((!(((/* implicit */_Bool) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) var_12))))))), ((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535)))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)8)) | (((/* implicit */int) (unsigned char)8))))) | (max((var_15), (((/* implicit */unsigned long long int) (unsigned short)65530))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (arr_0 [i_0] [i_2])))), (max((((/* implicit */unsigned long long int) (unsigned char)32)), (var_15))))) : (((((arr_3 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_2]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_2 [i_0] [i_1]))))))));
                    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */int) max((((((/* implicit */unsigned int) -1903795248)) != (635842213U))), (((((/* implicit */int) (unsigned short)12213)) <= (((/* implicit */int) (unsigned char)221))))))) <= (max((((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_0])) == (((/* implicit */int) var_14))))), (((((/* implicit */int) (unsigned char)34)) % (((/* implicit */int) (unsigned short)65524))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    arr_11 [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) ((max(((+(((/* implicit */int) (unsigned short)6)))), (((/* implicit */int) max((((/* implicit */short) arr_5 [i_0] [i_3])), ((short)-1081)))))) - (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0] [(unsigned short)15])), ((unsigned short)65520)))) == (((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) (unsigned char)6)) : (255))))))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((arr_0 [i_1] [i_0]) << (((((/* implicit */int) arr_10 [i_0])) + (1526)))))))) ? (((/* implicit */unsigned int) min(((+(((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)91)))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [9U])))))) | (max((arr_0 [i_3] [i_1]), (((/* implicit */unsigned int) (unsigned short)36535))))))));
                }
                for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((var_4), (((/* implicit */unsigned long long int) 4294967295U)))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) (unsigned char)118)))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (max((((/* implicit */unsigned long long int) (short)6981)), (17116495057791832829ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)6977), (((/* implicit */short) (unsigned char)6)))))) ^ (((7790832021766741064ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36926))))))) % (((/* implicit */unsigned long long int) min((1361470627U), (((/* implicit */unsigned int) -1)))))));
                                var_21 = ((/* implicit */short) (~(((((/* implicit */_Bool) max(((unsigned short)4), (((/* implicit */unsigned short) (unsigned char)187))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)22950)) >= ((-2147483647 - 1)))))) : (3607775770743374202ULL)))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_1 [i_0] [i_0])))))) >= ((~(var_6)))))))))));
                                arr_20 [i_0] [i_1] [i_4] [i_5] [i_6] [i_6] = ((3U) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)217))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_7] [(unsigned char)0] [i_1] [i_1]))) != (arr_21 [i_8] [i_7] [i_4] [i_1] [i_0]))) ? (((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_0] [i_1] [i_4] [i_0] [i_1])) + (-1658510763))))))));
                                var_24 = min((((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned char)130))))))), (((((/* implicit */_Bool) (+(-1778291065)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (unsigned char)69)))))) : (max((((/* implicit */unsigned int) (short)15012)), (var_5))))));
                            }
                        } 
                    } 
                }
                var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (((~(-1606883492))) ^ ((~(((/* implicit */int) (short)-14999))))))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1] [i_1]))))) * (((arr_18 [i_0] [i_1] [i_1] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    var_26 = min(((~(max((var_6), (((/* implicit */unsigned long long int) -1606883502)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_1] [i_0] [i_0] [i_1] [i_9])) << (((arr_21 [i_9] [i_9] [i_1] [i_0] [i_0]) - (12155537069836078696ULL)))))) ? (((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_27 [i_9] [i_9] [i_1] [i_0] [i_0] [i_0])) + (27457))))) : (((((/* implicit */int) (unsigned short)2)) << (((var_4) - (13674065260936975694ULL)))))))));
                    var_27 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) (~(arr_18 [i_9] [i_1] [i_9] [i_1] [i_0])))) && (((/* implicit */_Bool) max((arr_12 [i_0] [i_1] [i_9]), (arr_12 [i_0] [i_1] [i_9]))))))), (((((/* implicit */int) ((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])))))) ^ (((/* implicit */int) min((((/* implicit */unsigned short) arr_24 [i_0] [i_1] [i_9] [i_9])), ((unsigned short)31740))))))));
                    var_28 = ((/* implicit */short) min(((~((~(((/* implicit */int) arr_10 [i_9])))))), (((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) (unsigned short)50499))))) : (((/* implicit */int) max((arr_4 [i_0] [i_9]), (var_7))))))));
                    arr_30 [i_0] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) var_1))))) >= (max((((/* implicit */unsigned long long int) var_5)), (arr_17 [i_0] [i_0]))))))) <= (min(((-(18446744073709551592ULL))), (((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_1]), (((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_1] [i_9])))))))));
                }
            }
        } 
    } 
    var_29 *= ((/* implicit */unsigned short) (((-(((/* implicit */int) ((var_12) <= (var_2)))))) | (((/* implicit */int) ((((/* implicit */_Bool) 32767)) || (((/* implicit */_Bool) -463743879)))))));
    var_30 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)9781)) || (((/* implicit */_Bool) var_1))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (var_2))) - (822664285U)))))) - (min(((-(185269046U))), (((/* implicit */unsigned int) (short)-1))))));
    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((var_15) - (((/* implicit */unsigned long long int) var_2))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18933))) >= (var_15))))))))))));
    var_32 &= (+((((+(((/* implicit */int) (unsigned char)223)))) + (((((/* implicit */int) (unsigned char)82)) - (((/* implicit */int) (unsigned char)221)))))));
}
