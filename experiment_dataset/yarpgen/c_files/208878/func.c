/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208878
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
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_9))));
        var_13 *= ((/* implicit */unsigned int) ((signed char) ((int) 1146133389U)));
        arr_3 [(signed char)6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0]))) < (2094221054U)))), (((unsigned long long int) arr_2 [i_0 - 1] [i_0 + 1]))));
    }
    for (short i_1 = 1; i_1 < 23; i_1 += 2) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 647944773598450712ULL)) ? (3050933749428387226ULL) : (((/* implicit */unsigned long long int) 1340942347))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((9223372036854775804LL) - (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45176)))));
            /* LoopSeq 4 */
            for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((var_7) ? (((/* implicit */int) arr_11 [i_1 + 2] [i_3] [i_3])) : (((/* implicit */int) arr_11 [i_1 + 2] [i_3] [i_3])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (unsigned short)20359)) : (((/* implicit */int) arr_11 [i_2] [i_3] [i_3])))))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 3; i_5 < 22; i_5 += 3) 
                    {
                        {
                            arr_18 [i_1] [i_2] [i_2] [12U] [i_5 + 3] = ((/* implicit */signed char) ((((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(signed char)17] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 2]))))) ? (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_17 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 1]))))) : ((-(1340942334)))));
                            arr_19 [i_1] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */unsigned char) var_5);
                        }
                    } 
                } 
            }
            for (long long int i_6 = 3; i_6 < 23; i_6 += 3) 
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) -9223372036854775785LL))));
                var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((min((7031598211024375067ULL), (((/* implicit */unsigned long long int) 1275035155)))), (((/* implicit */unsigned long long int) min((arr_9 [i_6] [i_2] [i_1 - 1]), (arr_14 [i_1] [(signed char)2]))))))) ? ((-(min((((/* implicit */unsigned int) (signed char)114)), (var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                var_19 &= ((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)131)))), (((((/* implicit */_Bool) arr_20 [24ULL] [i_1 + 1] [24ULL])) ? (arr_12 [i_1]) : (((/* implicit */int) (_Bool)0))))));
            }
            for (long long int i_7 = 2; i_7 < 24; i_7 += 4) 
            {
                var_20 = ((/* implicit */_Bool) max(((unsigned short)7), (((/* implicit */unsigned short) (_Bool)1))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((max((var_4), (arr_22 [i_7 - 2] [i_7 - 1] [i_7] [i_7]))), (((unsigned short) var_8)))))));
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_1 + 1] [i_1 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 2]))))), (max((2483289252765154233ULL), (arr_8 [i_7 - 1] [i_7 - 2]))))))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                var_23 ^= ((/* implicit */unsigned short) min((min((arr_20 [i_8] [i_8] [i_8]), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_8] [i_8] [i_8]))) == (var_6))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [(unsigned short)19] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 2])))))));
                var_24 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((short) (unsigned short)31739))) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) max(((unsigned short)57791), (((/* implicit */unsigned short) (_Bool)1))))))), (((/* implicit */int) ((signed char) ((signed char) var_10))))));
            }
            var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-115))))), (var_11)));
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) max((((unsigned int) (_Bool)0)), (((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned short)41105)))) | (((/* implicit */int) max(((unsigned short)31245), (var_0))))))))))));
        }
        for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_6))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))))))));
            arr_31 [(unsigned short)21] [i_9] [i_1] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */short) (unsigned char)255)))))) : (max((((/* implicit */unsigned int) (unsigned short)7750)), (1818811253U)))));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned short)57802), (((/* implicit */unsigned short) var_3))))) % (((((/* implicit */int) arr_28 [i_1 - 1] [i_1 + 2] [i_1 + 2])) - (((/* implicit */int) arr_22 [(_Bool)1] [i_1 - 1] [i_9] [i_9]))))));
        }
    }
    var_29 = var_0;
}
