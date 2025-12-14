/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246043
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0 - 1] = ((/* implicit */signed char) arr_2 [i_0]);
                var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_3 [i_0 + 1] [i_0] [i_0 - 2]), (arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1])))), ((~(((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 2] [i_0 + 2]))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 20; i_2 += 1) /* same iter space */
                {
                    var_21 += ((/* implicit */long long int) var_3);
                    var_22 *= ((/* implicit */unsigned char) arr_0 [i_1]);
                }
                /* vectorizable */
                for (long long int i_3 = 1; i_3 < 20; i_3 += 1) /* same iter space */
                {
                    arr_10 [i_0 + 2] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) arr_8 [i_3 + 1] [i_1] [i_3 - 1] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        var_23 = var_11;
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_24 *= ((/* implicit */unsigned int) var_16);
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_1] [i_3] [i_0]) | (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_3] [i_4] [i_5 + 1])) * (((/* implicit */int) (short)-15114))))) : (arr_1 [i_0 - 2])));
                        }
                        for (int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3 + 1] [i_4] [i_4] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_3 + 1] [i_6])) : (arr_15 [i_0 - 2]))))));
                            var_27 = ((((/* implicit */_Bool) arr_5 [i_3 - 1])) || (((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_17 [i_0] [i_6] [i_3] [i_0] [i_3 + 1] [i_0 + 2])))));
                            var_28 = ((/* implicit */long long int) (!((!(arr_12 [i_0 - 2] [i_1] [i_3] [i_0 + 2] [i_3])))));
                        }
                    }
                    arr_21 [i_0 + 2] [(signed char)12] |= ((/* implicit */int) (~(((((/* implicit */_Bool) arr_14 [i_0] [i_0 + 2] [i_0] [i_1] [i_3] [i_3] [i_3 - 1])) ? (arr_16 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) arr_8 [i_0 + 1] [i_0] [i_0 - 2] [10LL]))))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    arr_24 [i_0] [i_0] [i_7] = ((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_7] [i_7] [i_7]);
                    arr_25 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(arr_7 [i_0 - 1] [i_1] [i_7])))), (3596879121U)))) > (((((/* implicit */_Bool) arr_16 [i_7] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((int) -8064671293233391619LL))) : (((unsigned long long int) -198530418907465174LL))))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            {
                                var_29 = (!(((/* implicit */_Bool) arr_29 [i_0 + 2] [i_1] [i_8] [i_0])));
                                arr_33 [i_9] [i_8] [i_8] [i_0] [i_7] [i_1] [i_0 + 2] = (-(min((((/* implicit */int) arr_6 [i_0 - 2])), (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0]))));
                                arr_34 [i_0] [i_9] = ((/* implicit */int) arr_1 [i_0]);
                            }
                        } 
                    } 
                    var_30 = ((signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_7])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15114)) ? (((/* implicit */int) var_1)) : (var_0))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        arr_37 [i_0 + 2] [i_1] [i_0] [i_10] [i_10] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 71776119061217280LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26531))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_7] [i_10])) ? (-3578647346302552234LL) : (((/* implicit */long long int) arr_35 [i_0 + 2] [i_0 + 1] [i_1] [i_1] [i_7] [i_10]))))) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_7)) : (18446744073709551612ULL)))))));
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) 72057594035830784LL)) ? (71776119061217280LL) : (72057594035830784LL))))));
                        arr_38 [i_0 + 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_18 [i_0 + 1] [i_1] [i_0] [i_10] [i_7] [i_0])), (var_5)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((arr_2 [i_0]) - (((/* implicit */unsigned int) arr_36 [i_0 + 2] [i_10]))))), (((((/* implicit */_Bool) (short)511)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)768))) : (198530418907465151LL)))))) : ((~(max((((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [i_0])), (var_16)))))));
                        arr_39 [i_0] [i_1] [i_7] [i_0] = ((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_1] [i_1] [i_7] [i_10]);
                    }
                }
                arr_40 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_1] [i_0 + 2] [i_0] [i_0] [i_0 - 2] [i_0 + 2])) != (((/* implicit */int) (unsigned short)10333))))) - (((/* implicit */int) arr_18 [i_1] [i_0 + 2] [i_0] [i_0] [i_0 - 2] [i_0 + 2]))));
            }
        } 
    } 
    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */long long int) var_7)) & (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (198530418907465192LL)))) || (((/* implicit */_Bool) (~(14ULL))))))))));
    var_33 = ((/* implicit */_Bool) var_5);
    var_34 = ((/* implicit */unsigned long long int) var_1);
}
