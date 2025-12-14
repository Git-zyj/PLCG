/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28723
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
    var_12 -= ((/* implicit */unsigned char) min((var_7), (var_1)));
    var_13 *= ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
    var_14 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 7; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_10 [i_2] [i_2 + 3] [5LL] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) max((var_5), (((/* implicit */short) var_8))))) << (((((/* implicit */int) min(((unsigned short)57002), ((unsigned short)57002)))) - (56997))))) << ((((+(((/* implicit */int) (unsigned short)63576)))) - (63564)))));
                        var_15 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)56998)))) || (((/* implicit */_Bool) arr_1 [i_1]))));
                    }
                    for (unsigned short i_4 = 4; i_4 < 9; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            arr_17 [i_0] [i_0] [i_2] [i_4 + 2] [i_5] = ((/* implicit */short) (unsigned short)56998);
                            var_16 = ((/* implicit */short) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) >= (var_6))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_2 + 4] [i_4 - 1]))))))), (((/* implicit */long long int) ((536870911LL) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_0])))))))))));
                            arr_18 [i_2] [i_1] [3LL] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_8 [i_0] [i_2 + 3] [i_0] [(unsigned char)7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [8ULL] [i_2 + 3] [i_4] [i_4 - 4]))) : (0U))), (((/* implicit */unsigned int) arr_4 [i_2 + 1] [i_5]))));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            arr_21 [i_2] [(short)0] [i_2] [i_4] [i_2] = (i_2 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8513)) % (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1959)) >> (((((/* implicit */int) arr_16 [i_2] [i_2])) - (23787))))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8513)) % (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1959)) >> (((((((/* implicit */int) arr_16 [i_2] [i_2])) - (23787))) - (4114)))))))));
                            var_17 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [(short)4] [i_0] [i_2 - 1] [i_2]))));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] [(short)0] = ((/* implicit */unsigned long long int) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2 + 4] [i_4 - 2] [i_2 - 1] [i_2 + 4] [i_7])))));
                            var_18 *= ((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0]);
                        }
                        arr_25 [(short)0] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned char)151)) | (((/* implicit */int) arr_4 [i_4] [i_4 - 4]))))));
                        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8538))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_4 + 1])) ? (((/* implicit */int) arr_16 [i_2] [i_1])) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_23 [i_1] [i_1] [(short)7] [(_Bool)1] [(short)9])), ((unsigned short)8505))))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6866))) * (arr_12 [i_4 - 4] [i_2] [i_1])))));
                    }
                    var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2])) ? (((/* implicit */int) arr_16 [i_2] [i_2])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) - (((((/* implicit */_Bool) arr_16 [i_2] [i_2 - 1])) ? (var_6) : (arr_14 [i_0] [i_2] [i_2 + 1])))));
                    var_22 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2] [i_0] [i_1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)205))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)134)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_2])))))))) : (((((/* implicit */int) (short)15115)) - (((/* implicit */int) (unsigned short)56999))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    var_24 = ((/* implicit */short) arr_9 [i_0] [i_0] [(unsigned short)3] [i_1] [(unsigned short)3]);
                    arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)11343))));
                }
                var_25 = ((/* implicit */short) arr_9 [i_1] [1LL] [i_0] [i_0] [i_0]);
                var_26 ^= ((/* implicit */short) arr_8 [i_0] [(short)5] [i_1] [i_1]);
                arr_30 [i_0] [i_1] [6ULL] = ((/* implicit */short) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : ((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_2))))), (min((((/* implicit */short) (unsigned char)36)), (var_1))))))));
            }
        } 
    } 
}
