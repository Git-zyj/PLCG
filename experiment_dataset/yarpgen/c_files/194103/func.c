/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194103
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
    var_12 = ((/* implicit */short) 0ULL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)107))));
                var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)61))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) var_1);
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)126)) ? (4194846951U) : (4194846922U)));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 100120374U)) ? (((/* implicit */int) min((((/* implicit */short) arr_2 [i_1 - 1])), (var_4)))) : (((((/* implicit */int) arr_2 [i_1 + 2])) & (((/* implicit */int) arr_2 [i_1 + 1]))))));
                /* LoopSeq 2 */
                for (short i_4 = 1; i_4 < 23; i_4 += 2) 
                {
                    arr_15 [(signed char)11] [(signed char)11] [(signed char)11] [i_4] = ((/* implicit */unsigned short) (+(((unsigned int) ((((/* implicit */int) arr_3 [i_1])) <= (((/* implicit */int) (signed char)-1)))))));
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        for (long long int i_6 = 4; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_23 [i_5] [i_5] [(unsigned char)19] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6]))) % (max((100120362U), (100120373U)))));
                                var_18 = ((/* implicit */short) ((4194846931U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14)))));
                                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)8582)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned short)45146)))) << (((((((18446744073709551601ULL) == (0ULL))) ? (((((/* implicit */_Bool) (short)-21249)) ? (366670622U) : (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) - (37U)))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_7 = 4; i_7 < 24; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 23; i_9 += 2) 
                        {
                            {
                                arr_31 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) (unsigned short)8970);
                                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-2))));
                                arr_32 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_9] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned char) arr_2 [i_1 + 2]))), (min((((/* implicit */unsigned int) (unsigned short)48786)), (1055295900U)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) 593448922))));
                    arr_33 [i_0 + 1] = ((/* implicit */long long int) (-(((-16029173) * (((/* implicit */int) (_Bool)1))))));
                    var_22 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) -1373963087)) : (100120364U))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) arr_13 [i_7 - 3] [i_0 + 1] [i_0 + 1])) : (25U)))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(13U))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned int) ((var_6) + (2066445996)))) : (min((22U), (((/* implicit */unsigned int) var_11))))));
}
