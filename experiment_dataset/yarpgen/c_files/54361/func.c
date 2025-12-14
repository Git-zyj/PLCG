/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54361
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-38)) && (((/* implicit */_Bool) (signed char)-36)))) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (signed char)-38))))) : (((unsigned long long int) var_4))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_11 [(_Bool)0] [i_1] [i_0] [(signed char)10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [(signed char)2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0]))))) : (((/* implicit */int) arr_1 [i_0 - 1]))))) - ((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_7 [4LL] [i_0 + 1] [i_0 - 1] [i_2 - 1])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38))) & (2305843009213562880ULL)))))));
                            /* LoopSeq 4 */
                            for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                            {
                                arr_14 [13U] [i_0] [i_0] [i_0] = max((max((((/* implicit */int) (unsigned char)165)), (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [(unsigned char)2])) ? (370096487) : (((/* implicit */int) (unsigned char)133)))))), (1879048192));
                                arr_15 [i_0 - 1] [i_1] [14LL] [i_0 - 1] [i_0 - 1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) arr_12 [i_0 - 1] [i_1] [i_0] [i_2 - 1]))))) ? (((arr_12 [i_0 - 2] [(_Bool)1] [i_0] [i_2 - 1]) + (arr_12 [i_0 - 2] [(unsigned char)17] [i_0] [i_2 - 1]))) : (arr_12 [i_0 + 1] [i_1] [i_0] [i_2 - 1])));
                                arr_16 [13LL] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) (signed char)-36)))))), (min((((/* implicit */unsigned int) ((signed char) var_6))), (((((/* implicit */_Bool) (short)-1330)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-38))) : (1487608681U)))))));
                                var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) 1368770377U)) != (arr_9 [i_0] [i_2 - 1]))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 1; i_5 < 19; i_5 += 4) 
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2807358615U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)23))) : (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_5 + 1] [i_2 - 1] [i_1] [i_2 - 1] [i_1] [i_0])) <= (((/* implicit */int) (unsigned char)0)))))) : (arr_9 [i_0] [i_0])));
                                var_20 = 1487608681U;
                                var_21 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)38))));
                            }
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                var_22 &= ((/* implicit */unsigned char) var_11);
                                var_23 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((693373851U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)36)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)116)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25))) : (((unsigned long long int) -2065333669))))));
                            }
                            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                            {
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [7] [i_3] [i_2] [i_1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 450924108128376815ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 544328307)))) : (min((var_13), (((/* implicit */unsigned int) arr_5 [i_7 - 1] [i_7 - 1] [i_7 - 1]))))))) : (((long long int) arr_3 [i_0]))));
                                var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0])), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_0 [i_0 - 3]))))) ? (((/* implicit */unsigned long long int) arr_6 [i_0])) : (((unsigned long long int) var_13))))));
                                var_26 = ((/* implicit */unsigned short) 35046933135360ULL);
                            }
                            var_27 = ((/* implicit */int) ((unsigned short) 1879048162));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_8 = 2; i_8 < 18; i_8 += 1) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) arr_22 [i_0 + 1] [i_1] [i_1] [i_9 - 1] [i_9 - 1]);
                            var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 17592181850112LL))));
                            var_30 += ((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 3]);
                            var_31 = ((/* implicit */_Bool) (+(arr_6 [i_0])));
                        }
                    } 
                } 
            }
        } 
    } 
}
