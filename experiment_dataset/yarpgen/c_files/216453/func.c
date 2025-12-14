/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216453
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
    var_10 = min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_8)))) && (((/* implicit */_Bool) min((1048575ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))))))), (var_5));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_0] [(signed char)9] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)255);
                                var_11 = ((/* implicit */signed char) (unsigned char)255);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] = (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_13 [i_1] [i_0] [i_0 + 1] [i_0] [i_0])), (arr_0 [i_0] [i_1])))));
                    arr_16 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (18446744073708503041ULL)));
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    var_12 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5] [i_5] [i_5]))) : (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) arr_0 [i_5] [i_5]))))));
                    arr_19 [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) ((_Bool) arr_3 [i_0 - 1]));
                }
                for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    var_13 -= ((/* implicit */signed char) ((((/* implicit */long long int) (~(min((var_0), (((/* implicit */unsigned int) var_1))))))) & (var_9)));
                    var_14 = ((/* implicit */unsigned int) ((unsigned long long int) -8686130078703261416LL));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_15 *= ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_8] [i_9]))) : (1048565ULL))) < ((~(0ULL)))));
                                var_16 = ((/* implicit */signed char) ((arr_13 [i_0] [i_0 + 1] [i_0 - 1] [i_0] [(signed char)10]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0 - 1] [i_0])))));
                            }
                        } 
                    } 
                    arr_31 [i_0] [i_1] = arr_24 [i_0 + 1] [i_0 + 1] [i_0 + 1];
                    var_17 = ((/* implicit */unsigned int) ((short) ((unsigned long long int) (signed char)-88)));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_10 = 2; i_10 < 18; i_10 += 3) 
    {
        for (short i_11 = 1; i_11 < 21; i_11 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned short) var_6);
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 18; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned long long int) arr_34 [i_12]);
                                arr_44 [i_10 + 4] [i_11 - 1] [i_10] [4LL] [(short)6] = ((/* implicit */unsigned long long int) ((unsigned short) arr_32 [i_10]));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_15 = 0; i_15 < 22; i_15 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */int) (short)20543)) / (((/* implicit */int) (unsigned short)65535))));
                    arr_47 [i_10] [i_11] [(signed char)20] [i_11 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((~(0ULL))) : (10549158438323174180ULL)));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */int) ((arr_34 [i_10]) && ((_Bool)0)))) : (((/* implicit */int) arr_43 [i_11 - 1] [i_11 + 1] [i_11] [i_11 - 1] [i_11]))));
                }
                for (unsigned int i_16 = 0; i_16 < 22; i_16 += 2) /* same iter space */
                {
                    var_22 = (i_10 % 2 == zero) ? (((/* implicit */unsigned int) (((+(arr_37 [i_10] [i_11] [i_10 - 1] [i_11]))) < (((/* implicit */unsigned long long int) ((min((arr_46 [i_10] [i_11 - 1] [i_16]), (((/* implicit */int) (_Bool)1)))) << ((((-(arr_40 [i_10 + 4] [(unsigned char)13] [i_10 + 4]))) + (1968272069))))))))) : (((/* implicit */unsigned int) (((+(arr_37 [i_10] [i_11] [i_10 - 1] [i_11]))) < (((/* implicit */unsigned long long int) ((((min((arr_46 [i_10] [i_11 - 1] [i_16]), (((/* implicit */int) (_Bool)1)))) + (2147483647))) << ((((((-(arr_40 [i_10 + 4] [(unsigned char)13] [i_10 + 4]))) + (1968272069))) - (4)))))))));
                    arr_52 [i_10] [i_10] = arr_39 [i_11];
                }
                var_23 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 22; i_17 += 2) 
                {
                    for (int i_18 = 1; i_18 < 19; i_18 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) min((((unsigned long long int) (short)-28805)), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2143934942)) && (((/* implicit */_Bool) (short)-20485)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_10 + 1])) ? (((/* implicit */int) (unsigned short)3584)) : (arr_46 [i_10] [i_10] [i_11])))) : (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20485))))))))));
                            arr_58 [i_10] [i_17] [i_11] [i_10] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_53 [i_18] [i_18 + 3] [i_18]), (arr_53 [i_18 + 2] [i_18 - 1] [i_18])))), ((~(((/* implicit */int) arr_53 [i_18] [i_18 + 3] [i_18]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
