/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208975
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (~(((/* implicit */int) max((var_5), (var_5)))))))));
                arr_8 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) max((arr_3 [i_0 - 1] [(signed char)18]), (((/* implicit */unsigned int) var_11))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_1])), (var_0)))));
                arr_9 [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_7))))) & (min((4294967295U), (((/* implicit */unsigned int) (_Bool)1))))));
                var_17 = ((/* implicit */short) max((min((((/* implicit */unsigned int) var_7)), (arr_3 [i_0 - 1] [i_0 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0 - 1])) % (((/* implicit */int) var_7)))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
                {
                    var_18 |= ((/* implicit */unsigned short) var_8);
                    var_19 -= var_8;
                    var_20 += ((/* implicit */unsigned short) ((long long int) var_10));
                }
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) arr_0 [i_0]);
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) 12U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))) : (4294967278U))))))));
                                arr_22 [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)1))))), (((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5]))) : (arr_18 [i_0] [i_0 - 1] [i_5] [i_5])))));
                            }
                        } 
                    } 
                    var_23 = ((((/* implicit */_Bool) ((((_Bool) (short)-26477)) ? (var_15) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) ((unsigned char) var_6))) - (((/* implicit */int) ((_Bool) var_13))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) (~((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 - 1] [i_6 - 1]))) : (2424506995U)))));
                                var_25 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_25 [i_0] [i_6 + 1] [i_7] [i_7] [i_0])) == (((/* implicit */int) (unsigned char)23)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) && (((/* implicit */_Bool) arr_13 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_3])))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (_Bool)1))));
                }
                for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    arr_29 [i_8] = ((/* implicit */_Bool) ((long long int) (_Bool)1));
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((22U) >> (((((/* implicit */int) (signed char)-15)) + (19))))))));
                    var_28 &= ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24528)) || (((/* implicit */_Bool) (unsigned short)24534))))) - (((/* implicit */int) ((_Bool) var_14))));
                    arr_30 [i_1] [14] &= var_12;
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        arr_34 [i_8] [i_8] [i_8] [i_0] [i_8] = ((/* implicit */_Bool) arr_33 [i_1] [i_1] [(unsigned short)6]);
                        arr_35 [i_8] [i_9] [i_9] [i_8] [i_1] [i_8] = ((/* implicit */int) (_Bool)1);
                    }
                    for (signed char i_10 = 2; i_10 < 18; i_10 += 1) 
                    {
                        arr_38 [i_0] [i_0 - 1] [i_8] = ((/* implicit */short) min((2147483647), (((/* implicit */int) (unsigned char)255))));
                        var_29 = var_8;
                    }
                }
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) (signed char)-1)))))))), (var_8)));
    var_31 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))))))));
    var_32 ^= ((/* implicit */short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65515))))) ? (max((((/* implicit */long long int) (_Bool)1)), (-5286250243767744981LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_10))))))), (((/* implicit */long long int) (((_Bool)1) || ((_Bool)1))))));
}
