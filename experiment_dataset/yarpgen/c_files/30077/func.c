/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30077
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (5535103806387229081LL))))) : (((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [(unsigned char)6] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-32407))) <= (5535103806387229103LL)));
                    var_13 = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_3))))), ((short)7400))))));
                                arr_16 [i_0] [i_1] [i_0] [i_0] [i_0 + 2] [i_0] = (((_Bool)0) ? (((((/* implicit */_Bool) arr_13 [i_2 - 4] [i_2 - 1] [i_2 - 2])) ? (-5535103806387229095LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-88)) == (((/* implicit */int) var_8)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) var_3))))) == (((((/* implicit */long long int) ((/* implicit */int) (short)-13041))) - (-5535103806387229103LL))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((7215852433804341489LL) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((var_0) << (((/* implicit */int) (_Bool)1)))))))));
                                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_17 [i_2 + 2] [i_2 + 2] [i_2 - 2] [i_2 - 3])) & (((/* implicit */int) arr_17 [i_2 + 2] [i_2 + 2] [i_2 - 2] [i_2 - 3])))) & (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)115))))) ? ((~(((/* implicit */int) arr_3 [i_6] [i_6] [(short)13])))) : ((~(((/* implicit */int) var_6))))))));
                                var_17 = ((/* implicit */signed char) 5181554212199045882ULL);
                                arr_23 [i_0] [i_0] [i_0] [i_0 - 2] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_3 [i_2] [i_2] [i_2])), (var_0)));
                            }
                        } 
                    } 
                    arr_24 [i_2 - 1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((arr_0 [i_1] [i_1]), (-430992950)))) ^ (5535103806387229103LL)))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0])) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64261))) : (var_2))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)57708)), (4294967288U))))));
                }
            } 
        } 
        arr_25 [(short)15] = ((/* implicit */unsigned short) var_4);
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 5535103806387229081LL)) == ((+(14963721928016369232ULL)))))) + (((/* implicit */int) (!(((_Bool) (unsigned short)25366)))))));
        arr_26 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_12 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 - 2] [i_0] [i_0])) : (((/* implicit */int) var_8)))), (((/* implicit */int) (unsigned short)15670))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 + 2])) || (((/* implicit */_Bool) 5535103806387229117LL)))))) : (max((max((((/* implicit */unsigned long long int) (signed char)-2)), (17745872099135753466ULL))), (((/* implicit */unsigned long long int) (~(3394651197686169123LL))))))));
    }
    for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((204513392462258983LL) >> (((-5535103806387229081LL) + (5535103806387229131LL))))) | (((/* implicit */long long int) ((4117786492U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33711))))))))) ? (((arr_1 [i_7]) + (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)98)))) ? (((/* implicit */int) ((var_6) && (((/* implicit */_Bool) -5535103806387229091LL))))) : (((var_8) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (_Bool)1)))))))));
        var_20 ^= ((/* implicit */int) var_0);
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max(((-(((unsigned int) arr_0 [i_7] [i_7])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) || (((/* implicit */_Bool) (unsigned short)7365))))))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((((_Bool)1) ? (511) : (((/* implicit */int) arr_3 [i_7] [6LL] [i_7]))))))) ? (((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (signed char)111)))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_3)) : (var_0))) : (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) 2774489951U))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [i_7])))));
    }
    var_23 = ((/* implicit */long long int) var_10);
}
