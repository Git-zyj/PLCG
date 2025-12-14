/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40589
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) arr_5 [i_0] [i_0] [22]);
                        arr_12 [i_1] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) 1676063365U);
                        arr_13 [i_1] = ((/* implicit */int) var_12);
                        arr_14 [(short)8] [i_1] [i_2] [i_1] [i_3] = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_2] [i_0 + 2])) << (((arr_8 [i_1] [i_1] [i_1]) - (95384136U)))))) : (((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_2] [i_0 + 2])) << (((((arr_8 [i_1] [i_1] [i_1]) - (95384136U))) - (187421983U))))));
                        var_15 ^= ((/* implicit */short) var_1);
                    }
                    for (unsigned int i_4 = 4; i_4 < 20; i_4 += 1) 
                    {
                        var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)75)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (1676063359U)));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_6 [i_2] [i_5] [i_2]))));
                            var_18 = ((/* implicit */unsigned int) var_8);
                        }
                        for (long long int i_6 = 2; i_6 < 21; i_6 += 4) 
                        {
                            arr_22 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [i_6])) ? (1676063365U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-76)))) - (((/* implicit */int) arr_1 [i_0 + 2] [i_1]))));
                            arr_23 [i_1] = ((/* implicit */long long int) ((((arr_0 [i_4]) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (2618903930U))) || (((/* implicit */_Bool) var_2))))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                        {
                            var_19 ^= ((/* implicit */signed char) arr_0 [i_0]);
                            var_20 -= ((/* implicit */unsigned char) var_0);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) min((2735746031U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1] [i_0 - 1] [i_1])) ? (((/* implicit */int) arr_10 [i_1] [i_0 - 1] [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_0 + 1] [i_1])))))));
                            arr_32 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) arr_6 [i_8] [i_1] [i_1]);
                        }
                        var_22 = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) / (((((var_7) >> (((arr_6 [i_0] [i_1] [i_0]) - (18064783898732453669ULL))))) - (((1676063371U) << (((arr_9 [i_4] [i_0] [i_1] [i_4 - 1]) - (1046716813)))))))))) : (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) / (((((var_7) >> (((((arr_6 [i_0] [i_1] [i_0]) - (18064783898732453669ULL))) - (7938388011433177349ULL))))) - (((1676063371U) << (((((arr_9 [i_4] [i_0] [i_1] [i_4 - 1]) - (1046716813))) + (728835524))))))))));
                    }
                    var_23 *= arr_4 [19U];
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_11)) % (var_8)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((1676063365U), (((/* implicit */unsigned int) -2147483645))))), (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
}
