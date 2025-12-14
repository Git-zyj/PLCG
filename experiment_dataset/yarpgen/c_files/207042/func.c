/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207042
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) ((unsigned char) (unsigned char)126));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 2]);
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_3 [i_1 + 2] [i_1 - 1] [i_1 - 1]), (arr_3 [i_1 + 1] [i_1 + 2] [i_1 - 1])))) ? ((+(((/* implicit */int) min(((unsigned char)129), (var_2)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((2845321974U), (((/* implicit */unsigned int) (unsigned char)68))))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 3; i_3 < 18; i_3 += 2) 
            {
                var_16 &= ((/* implicit */unsigned char) 1296829018U);
                var_17 += ((/* implicit */unsigned int) (+(((var_10) - (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) % (2845321975U))))))));
                var_18 = ((/* implicit */unsigned char) 2845321975U);
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min(((short)32755), (((/* implicit */short) (unsigned char)130)))))));
            }
            for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    for (short i_6 = 1; i_6 < 20; i_6 += 2) 
                    {
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_4] = ((/* implicit */unsigned long long int) arr_1 [i_4 + 1]);
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) (short)510)) : (((/* implicit */int) ((short) var_0)))))) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (_Bool)1))));
                            arr_21 [i_6] [i_5] [i_4] [i_4] [i_4] [i_2] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_5]))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_4] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6] [i_4] [i_2]))) : (4294967286U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_5])) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_2])) : (((/* implicit */int) (short)-17756))))));
                            var_21 |= ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_1)))))), (((int) arr_4 [i_4 + 1]))));
                            var_22 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_10 [i_4 - 1] [i_4 - 1] [i_6 + 1])) ? (((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 1] [i_6 + 1])) : (((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 1] [i_6 + 1]))))));
                        }
                    } 
                } 
                var_23 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11U)) ? (1588683299U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) 2805675991U)) : (((((/* implicit */_Bool) (unsigned char)172)) ? (((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */unsigned long long int) 4294967289U)) : (10090927080245958269ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 2; i_7 < 19; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        {
                            arr_28 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */int) var_6);
                            arr_29 [i_0] [i_0] [i_2] [i_2] [9U] [i_7] [i_4] = ((/* implicit */unsigned long long int) (_Bool)0);
                            arr_30 [i_8] [i_7] [i_4] [i_4] [i_0] [i_0] = max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_4 + 1] [i_7 - 2] [(unsigned char)17] [i_8]))) == (arr_27 [i_0] [i_4 + 1] [i_7 + 1])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_4 - 1] [i_7 + 2] [i_7] [i_7]))) ^ (arr_27 [i_4] [i_4 + 1] [i_7 - 1]))));
                        }
                    } 
                } 
            }
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (short)17789)) ^ (((/* implicit */int) var_2))))))));
            var_25 = ((/* implicit */short) max(((((_Bool)0) ? (15249694419172164198ULL) : (3197049654537387418ULL))), (var_13)));
            var_26 = (((_Bool)1) ? (max((((/* implicit */unsigned int) var_8)), (arr_5 [i_0]))) : (max((arr_5 [i_2]), (arr_5 [i_0]))));
        }
        /* LoopNest 2 */
        for (unsigned char i_9 = 1; i_9 < 20; i_9 += 3) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_37 [i_10] [i_9] [i_10] = ((/* implicit */short) (((~(((/* implicit */int) arr_11 [i_9] [i_9 + 1])))) - (((((/* implicit */int) arr_11 [i_9] [i_9 - 1])) | (((/* implicit */int) arr_11 [i_0] [i_9 + 1]))))));
                    arr_38 [i_0] [i_10] [i_10] [i_10] = ((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */_Bool) 3069331242U)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) (unsigned char)135)))) <= (((/* implicit */int) ((var_9) < (2706283982U)))))))));
                }
            } 
        } 
        var_27 &= ((/* implicit */unsigned char) var_4);
        var_28 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned char)214)))) >> (((10090927080245958285ULL) - (10090927080245958255ULL)))));
    }
    var_29 = ((/* implicit */_Bool) ((var_13) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)128), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2370818780U)))))))))));
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-10)) || (((/* implicit */_Bool) var_11))));
    var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) < (((/* implicit */int) ((unsigned char) (unsigned char)69)))));
}
