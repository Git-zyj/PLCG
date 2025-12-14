/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221010
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) / ((-(var_9)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] [8U] [i_1] &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 17269864349262520724ULL)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) arr_3 [0ULL] [i_1 - 1])))), (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) arr_3 [6U] [i_0])) : (((/* implicit */int) arr_3 [10] [10]))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 1487561775)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)79)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1487561775)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)79))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))) : (2827622184U)))))));
                var_16 &= ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [0ULL] [i_1 - 1])) + (((/* implicit */int) (signed char)2))));
                arr_6 [(unsigned char)10] [i_0] [1ULL] = ((signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2])) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_0] [i_1 - 1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_19 [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)3))))) ? (((((/* implicit */unsigned int) arr_11 [i_4])) + (arr_9 [i_2]))) : (arr_9 [i_3]))) & (((/* implicit */unsigned int) ((int) arr_11 [i_5])))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                            {
                                arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)255)) ? (5947257354192609647ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_4]))))) == (((/* implicit */unsigned long long int) (~(1601727552))))));
                                arr_25 [i_2] [i_3] [i_4] [i_2] [(signed char)15] &= ((/* implicit */_Bool) (-(67076096U)));
                            }
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((unsigned long long int) (~(((((/* implicit */_Bool) 2147483647)) ? (17269864349262520724ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))))))))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 255)) ? (((12499486719516941968ULL) / (((/* implicit */unsigned long long int) 1637597095)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_2] [i_5] [i_4]))))))))));
                        }
                    } 
                } 
                arr_26 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)255)), (1447303185U)))) % (min((((unsigned long long int) 18446744073709551615ULL)), (((/* implicit */unsigned long long int) arr_10 [i_2]))))));
                arr_27 [i_2] [(unsigned char)9] &= ((/* implicit */int) (((((_Bool)1) && (((/* implicit */_Bool) (unsigned char)100)))) ? (min((5947257354192609647ULL), (((/* implicit */unsigned long long int) 1540800521)))) : (((/* implicit */unsigned long long int) 4294967295U))));
            }
        } 
    } 
}
