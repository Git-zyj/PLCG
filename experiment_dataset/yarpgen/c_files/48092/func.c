/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48092
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
    var_18 -= ((/* implicit */unsigned int) var_11);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                arr_9 [i_2] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_1 + 2]))));
            }
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                var_20 = ((/* implicit */_Bool) min((min((((arr_6 [i_3] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))) : (1579585879U))), (((/* implicit */unsigned int) min((arr_10 [i_0] [i_3]), (arr_11 [i_3] [i_1] [i_0])))))), (((/* implicit */unsigned int) max((arr_0 [i_3] [i_3]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2715381392U))))))))));
                /* LoopSeq 1 */
                for (short i_4 = 3; i_4 < 14; i_4 += 4) 
                {
                    var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((2715381419U), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_7 [(_Bool)1] [(signed char)4] [i_0] [i_4])), (arr_14 [i_0] [i_0] [(unsigned short)12] [(short)6] [i_4]))))))) ? (1579585898U) : (((/* implicit */unsigned int) min((min((((/* implicit */int) var_1)), (arr_10 [i_1] [i_1]))), ((-(((/* implicit */int) (signed char)-13)))))))));
                    arr_16 [i_4] [4] [i_3] [i_4] = ((/* implicit */unsigned short) ((int) arr_2 [7U]));
                }
                var_22 = ((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)18)))), (((((/* implicit */int) (!(((/* implicit */_Bool) (short)-29142))))) ^ (((/* implicit */int) min(((unsigned char)255), ((unsigned char)18))))))));
                var_23 -= ((/* implicit */unsigned short) 1579585920U);
            }
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_24 ^= ((/* implicit */short) var_13);
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    arr_21 [i_0] [i_5] [(_Bool)1] [(short)3] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_0] [i_1 + 2]))));
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */signed char) arr_1 [i_0]);
                        var_26 *= arr_23 [i_0] [i_0];
                        var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)238)) ? (arr_3 [i_6]) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)126)))))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (arr_11 [(_Bool)1] [(_Bool)1] [(_Bool)1])))) ? (((/* implicit */int) arr_13 [4LL] [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)227))));
                    }
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned short) ((2715381404U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245)))));
                        arr_28 [i_0] [i_6] [i_0] |= ((/* implicit */short) ((4029874185U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1 + 1] [i_1] [i_1] [i_1] [(signed char)12])))));
                        var_30 = ((/* implicit */unsigned char) arr_17 [i_1] [i_8]);
                    }
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
                    {
                        arr_33 [i_0] [i_5] [(signed char)14] [i_5] [i_9] = ((/* implicit */unsigned short) ((short) (signed char)-5));
                        arr_34 [i_1] [i_5] [i_6] [i_5] = ((/* implicit */short) 4029874191U);
                    }
                    arr_35 [i_5] [(signed char)5] [i_5] [(signed char)5] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1] [(unsigned short)3])))))));
                    var_31 *= (~(((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [i_1])) >= (((/* implicit */int) (unsigned char)61))))));
                }
            }
            /* LoopSeq 1 */
            for (unsigned short i_10 = 4; i_10 < 14; i_10 += 1) 
            {
                arr_39 [i_1 + 1] [i_10] = ((/* implicit */unsigned long long int) arr_19 [i_0] [(short)11] [i_1] [i_10]);
                arr_40 [i_10] [i_1] [i_10] = ((/* implicit */long long int) min((min((1579585895U), (((/* implicit */unsigned int) arr_26 [i_1 + 1] [i_10] [i_1 + 2] [(short)10] [i_1] [i_0] [i_10 - 1])))), (((/* implicit */unsigned int) max(((_Bool)1), ((!(((/* implicit */_Bool) 134215680U)))))))));
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 15; i_11 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */signed char) min((var_32), ((signed char)-96)));
                arr_47 [i_11] [i_11] = ((/* implicit */unsigned char) ((arr_23 [i_12] [i_11]) ^ (arr_23 [i_0] [i_11])));
            }
            for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 4) /* same iter space */
            {
                arr_50 [11LL] [i_11] [i_11] = (+(265093126U));
                arr_51 [12U] [i_13] [i_11] [(unsigned short)14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */unsigned int) arr_11 [i_0] [(signed char)14] [i_13])) : (265093125U)))) ? (((((/* implicit */_Bool) 1579585855U)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) arr_17 [i_11] [i_13])))) : (((((/* implicit */_Bool) arr_15 [i_13] [i_13] [i_11] [i_0] [i_0])) ? (((/* implicit */int) arr_41 [i_0] [(_Bool)1] [i_13])) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_11] [i_11] [i_13])))));
            }
            arr_52 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(arr_18 [i_0] [(unsigned short)11])));
        }
        var_33 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) max((arr_17 [i_0] [i_0]), (((/* implicit */short) (signed char)-17)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) max((min((((/* implicit */unsigned char) (signed char)126)), ((unsigned char)25))), (((/* implicit */unsigned char) (_Bool)1)))))));
    }
    var_34 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)120)) ? (min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) (unsigned char)25)), (1579585888U))))) : (var_15)));
}
