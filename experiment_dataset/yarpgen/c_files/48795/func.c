/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48795
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [(short)8] = ((/* implicit */unsigned short) ((127U) & (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (((/* implicit */short) arr_3 [i_0]))))))));
                arr_5 [(unsigned short)16] [i_1] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (var_15)));
                arr_6 [i_0] [i_0] = ((/* implicit */int) min((max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_0])) : (var_1)))))), (((((((/* implicit */_Bool) (unsigned char)96)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)1] [i_1]))))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34896)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) max(((+(arr_0 [i_4 - 1]))), (min((-905691415), (((/* implicit */int) var_10))))));
                                var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_13 [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4 - 1]), (arr_13 [i_4 + 2] [i_4] [i_4] [i_4] [i_4])))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)112)))))));
                                var_18 = ((/* implicit */unsigned short) (short)255);
                                var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) var_2)) ? (((((((/* implicit */_Bool) -1608966751)) && (((/* implicit */_Bool) (unsigned char)0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) 4289907526U))))) : (((/* implicit */int) (unsigned char)178)))) : (((1608966750) << (((((((/* implicit */int) (short)-20248)) + (20266))) - (18)))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) -905691415);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                arr_20 [(unsigned char)10] [(unsigned char)10] [i_0] [(unsigned char)10] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((((/* implicit */_Bool) arr_18 [(unsigned char)21] [i_0] [i_1])) ? (((/* implicit */int) (short)14913)) : (((/* implicit */int) (short)-256)))) : (905691415)))), ((-(var_4)))));
                                arr_21 [i_0] [i_0] [i_5] [i_0] [i_6] [i_2] = ((/* implicit */int) var_2);
                                arr_22 [(unsigned short)5] [(unsigned char)12] [i_2] [i_0] [i_6] = ((/* implicit */unsigned int) var_7);
                                arr_23 [(unsigned char)16] [(unsigned char)16] [i_5] [i_5] [9ULL] [i_0] [9ULL] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_0 [i_0]) : (((/* implicit */int) ((var_1) < (2022511454)))))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) 905691415))) % (((/* implicit */int) var_15))));
                            }
                        } 
                    } 
                }
                var_21 = ((/* implicit */short) -1721849842);
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) (short)56)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)16716)) << (((((/* implicit */int) (unsigned char)155)) - (146)))))) ? ((-(((/* implicit */int) (short)32767)))) : (((/* implicit */int) min(((unsigned char)155), ((unsigned char)155))))))) : (max(((-(var_5))), (((/* implicit */unsigned long long int) ((unsigned char) var_3))))));
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        for (int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            {
                arr_29 [8LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18185754349563824591ULL)) ? ((-9223372036854775807LL - 1LL)) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14914))) : (arr_18 [i_7] [i_7] [i_7])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-14914)) ? (((/* implicit */int) arr_1 [i_8] [i_7])) : (((/* implicit */int) var_8))));
                    arr_34 [i_7] [(short)4] = ((/* implicit */short) var_0);
                    arr_35 [i_7] [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */int) (unsigned short)57344)) : (1391252867));
                    var_24 += ((/* implicit */short) ((((/* implicit */int) arr_7 [i_7] [i_7] [i_8] [i_9])) > (((/* implicit */int) var_6))));
                    arr_36 [(short)0] [(short)0] [1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (short)8))))) == (((/* implicit */int) (short)-256))));
                }
            }
        } 
    } 
}
