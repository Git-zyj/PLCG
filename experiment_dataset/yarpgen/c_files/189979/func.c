/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189979
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
    var_11 = ((/* implicit */int) max((1290756293U), (4168333417U)));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) var_0);
                arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [i_1])), (arr_2 [i_0] [i_1] [i_0])))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [i_0 - 1])), (arr_0 [i_2])))) && (((/* implicit */_Bool) ((arr_6 [i_2] [i_1]) >> (((((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) - (45864))))))))), (var_6))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned short) (+(((int) max((126633883U), (((/* implicit */unsigned int) var_1)))))));
                        /* LoopSeq 3 */
                        for (int i_4 = 1; i_4 < 7; i_4 += 1) /* same iter space */
                        {
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_0 + 1] [i_0 + 1] [i_4 + 1] [i_4] [i_4]))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 3] [i_4 + 2] [i_4 + 2] [i_4 + 3])) : (((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 3] [i_4 + 1] [i_4] [i_4 + 4])))) : (((((/* implicit */_Bool) arr_11 [i_0 - 3] [i_0 - 3] [i_4 + 4] [i_4] [i_4])) ? (((/* implicit */int) arr_11 [i_0 - 2] [i_0 + 1] [i_4 + 3] [(unsigned short)2] [i_4])) : (((/* implicit */int) arr_11 [i_0 - 3] [i_0 - 1] [i_4 + 1] [i_0 - 1] [i_4])))))))));
                            var_16 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && ((!(((/* implicit */_Bool) 4168333417U))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */int) arr_13 [i_3] [i_1] [i_2] [i_1] [i_4] [i_1]))))), (min((((/* implicit */unsigned int) arr_3 [1LL])), (arr_1 [i_0])))))));
                        }
                        for (int i_5 = 1; i_5 < 7; i_5 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) max((min((arr_7 [i_0 - 3] [i_5 + 4] [i_0]), (arr_7 [i_0] [i_5 + 4] [i_0]))), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_5 - 1] [i_0])))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((int) var_1)) : ((-(((/* implicit */int) arr_2 [i_1] [i_1] [i_0]))))))) ? (((((/* implicit */_Bool) arr_1 [i_5 - 1])) ? (((/* implicit */long long int) ((var_8) | (((/* implicit */int) arr_12 [i_0 + 1]))))) : (max((((/* implicit */long long int) arr_3 [i_3])), (arr_8 [i_0 - 3] [i_1] [(short)1] [i_3]))))) : ((-(((((/* implicit */long long int) ((/* implicit */int) var_2))) + (var_4)))))));
                            var_19 -= ((((((/* implicit */_Bool) 126633878U)) ? (-288230376151711744LL) : (((/* implicit */long long int) -1)))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_5 + 3] [4] [i_0 - 3])) ? (((/* implicit */unsigned int) var_6)) : (((unsigned int) var_3))))));
                        }
                        for (int i_6 = 1; i_6 < 7; i_6 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_14 [i_0 - 2] [i_0] [i_0 - 1] [7] [i_0 - 3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((unsigned long long int) arr_1 [i_0 - 3]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_1] [i_0]))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))), (min((arr_17 [i_0 - 2] [i_0 + 1]), (((/* implicit */long long int) arr_3 [i_0 - 1]))))))));
                            var_21 -= ((/* implicit */long long int) ((unsigned char) ((((var_7) != (((/* implicit */unsigned long long int) arr_1 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32681))) : (max((arr_1 [i_0]), (((/* implicit */unsigned int) var_2)))))));
                        }
                        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_6 [i_0] [i_1])))) ? (((((/* implicit */_Bool) arr_13 [i_0 - 3] [i_1] [1LL] [i_3] [i_1] [i_1])) ? (17086285586375849020ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [4ULL] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [(signed char)0] [i_2] [i_3] [i_0] [i_2] [i_3])))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 2])) ? ((~(arr_6 [i_0] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0 + 1] [i_0 + 1] [(short)4] [i_0] [i_0 + 1] [(unsigned char)5])))));
                        arr_18 [i_0] = ((/* implicit */short) var_0);
                    }
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        var_24 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)58))) > (4168333417U)));
                        var_25 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) min((((((min((arr_17 [i_0 - 2] [i_0 - 2]), (((/* implicit */long long int) var_3)))) + (9223372036854775807LL))) << ((((~(((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_1])))) - (68))))), (((/* implicit */long long int) ((unsigned int) arr_8 [i_0] [i_0] [i_0] [i_7])))))) : (((/* implicit */unsigned short) min((((((min((arr_17 [i_0 - 2] [i_0 - 2]), (((/* implicit */long long int) var_3)))) + (9223372036854775807LL))) << ((((((((~(((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_1])))) - (68))) + (150))) - (15))))), (((/* implicit */long long int) ((unsigned int) arr_8 [i_0] [i_0] [i_0] [i_7]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */short) arr_8 [i_0] [(short)10] [6ULL] [i_8]);
                                var_27 = ((/* implicit */short) arr_8 [i_9] [i_8] [i_2] [i_1]);
                            }
                        } 
                    } 
                }
                var_28 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_1] [(_Bool)1] [i_1]))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_21 [i_0] [i_0])), (var_8)))) : (max((126633883U), (((/* implicit */unsigned int) (short)32144)))))) % (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
            }
        } 
    } 
}
