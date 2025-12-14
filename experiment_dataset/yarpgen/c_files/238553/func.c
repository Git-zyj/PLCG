/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238553
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) min(((unsigned char)153), ((unsigned char)70)));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)64))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0 + 1]))))));
            var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)38405)) < (((/* implicit */int) (unsigned char)177)))))) | (((((/* implicit */_Bool) 7126023440900788091ULL)) ? (728686658U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164)))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (unsigned int i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)153)) ? (1144536949U) : (3491335500U)))) : (min((arr_3 [i_0] [8LL] [i_4]), (arr_9 [i_0])))))), (max((((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20670))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (764051999))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */int) (unsigned short)20021);
                            var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)195))) < (arr_3 [i_0] [i_0 + 1] [i_4 + 1]))))) ^ (max((((/* implicit */long long int) arr_6 [i_0])), (arr_3 [i_0] [i_0 + 1] [i_4 + 1])))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)181))) ? (((/* implicit */int) ((arr_11 [i_0 + 1] [i_0 + 3] [i_4 - 1] [i_4 - 1]) || (((/* implicit */_Bool) arr_13 [i_0 + 3] [i_4 - 1] [i_6] [i_6] [i_6]))))) : (max((((/* implicit */int) ((var_14) || (((/* implicit */_Bool) (unsigned short)23877))))), (((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_12))))))));
                            arr_16 [i_0 - 1] [i_4] [i_4] [i_2] [i_6] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((arr_1 [i_0]), (arr_1 [i_0])))), ((+(max((var_6), (((/* implicit */unsigned int) arr_13 [i_0 - 1] [i_2] [i_0 - 1] [i_4] [i_0 - 1]))))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            var_25 ^= ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_4 - 1] [i_7] [i_0 + 1]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) arr_4 [i_4 - 1] [i_4 - 1] [i_0 + 3]))))) : (max((((/* implicit */unsigned int) arr_1 [i_7])), (var_6))));
                            var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((764051994), (((/* implicit */int) (unsigned char)68))))), (((unsigned long long int) 2723753137U))));
                        }
                    }
                } 
            } 
            arr_20 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)159))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))) : ((+(((arr_14 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))) : (2723753139U)))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            arr_23 [i_0] [i_0] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned char) var_12)))))))), (((((((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_0] [i_0 - 1] [i_0])) != (((/* implicit */int) arr_1 [i_0])))) ? (((long long int) arr_8 [i_0] [i_0] [i_0 + 2])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_8])) : (((/* implicit */int) arr_22 [i_8]))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 4; i_9 < 9; i_9 += 4) 
            {
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    for (short i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((unsigned char) arr_26 [i_0] [i_0] [i_0] [i_10] [10LL]))))) + (min((arr_10 [i_0 + 1] [i_9] [i_9] [i_10]), (((/* implicit */unsigned int) arr_13 [i_0 + 3] [i_8] [i_9] [i_9 + 2] [i_11]))))));
                            arr_31 [i_0] [i_9] &= ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45390))) >= (4034247765U));
                            var_28 = ((/* implicit */long long int) ((unsigned long long int) arr_18 [i_0 + 2] [i_0] [i_11]));
                        }
                    } 
                } 
            } 
        }
        arr_32 [i_0] = ((/* implicit */signed char) max((max((((/* implicit */long long int) (unsigned short)20550)), (71916856549572608LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_0 + 1] [(signed char)6] [i_0 + 1])) && (((/* implicit */_Bool) arr_28 [i_0 - 1] [i_0] [i_0 - 1])))))));
        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (short)-30085))));
    }
    var_30 = ((/* implicit */short) var_5);
    var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */signed char) var_15)), (var_12))))));
}
