/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20173
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) var_2)))) ? (min((((/* implicit */unsigned int) (short)-32754)), (max((0U), (0U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32754))))))));
                arr_5 [1] [i_1] [i_1] = ((/* implicit */unsigned int) ((int) 850676247));
                arr_6 [i_1] = ((/* implicit */unsigned short) min((((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-32738)) : (((/* implicit */int) (short)-27802))))), (((/* implicit */unsigned char) (_Bool)0))));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((signed char) ((((((/* implicit */unsigned int) var_8)) <= (1319945735U))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (490343019U) : (4294967283U))) : (4294967295U))));
                arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
            }
        } 
    } 
    var_11 = ((((min((((/* implicit */int) var_7)), (var_8))) <= (((/* implicit */int) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (var_9))))) : (((unsigned long long int) var_7)));
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
    {
        var_12 = ((/* implicit */int) (short)27801);
        arr_13 [i_2 - 1] [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [i_2])), (913137854U)))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-27812)) && ((!(((/* implicit */_Bool) arr_11 [i_2]))))))))));
    }
    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2537576340U)), (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (2437260509905952351ULL))))))));
            var_14 = ((/* implicit */int) arr_17 [i_4] [i_3 - 1]);
            arr_20 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)19006))));
            /* LoopSeq 3 */
            for (signed char i_5 = 1; i_5 < 16; i_5 += 1) 
            {
                arr_25 [i_4] [i_4] = ((/* implicit */unsigned short) 1273014312867997737ULL);
                arr_26 [i_4] [i_4] [i_4] = ((((/* implicit */int) arr_15 [i_3 - 2] [i_3 - 2])) * (((int) var_5)));
                arr_27 [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_5)))) ? (((((/* implicit */_Bool) arr_16 [i_3] [(_Bool)1])) ? (9223372036854775807LL) : (9223372036854775796LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32747)) ? (((/* implicit */int) arr_9 [i_3])) : (arr_12 [i_3])))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_12 [8U])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)15141)))), ((+(((/* implicit */int) arr_14 [i_5])))))))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                arr_30 [i_3] [10ULL] [i_4] [i_6] |= ((/* implicit */unsigned char) min((((/* implicit */int) arr_15 [i_3 - 2] [i_3 - 1])), (((((/* implicit */int) var_2)) >> (((/* implicit */int) arr_15 [i_3 - 3] [i_3 - 3]))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        {
                            arr_36 [i_8] [i_8] [i_7] |= ((/* implicit */unsigned int) arr_34 [i_3 - 1] [i_4] [i_6] [i_7] [i_8]);
                            arr_37 [i_8] [i_8] [i_8] [(signed char)4] [i_6] [i_4] [i_8] |= ((/* implicit */_Bool) (unsigned short)19006);
                            var_15 = ((((/* implicit */int) arr_16 [i_3 + 1] [0ULL])) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_3 - 3] [i_3 + 1])) || (((/* implicit */_Bool) arr_23 [i_3 - 1] [i_3 - 2]))))));
                            arr_38 [i_3 - 3] [i_3] [i_4] [(unsigned short)9] [i_4] [i_7] [(short)16] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_5) - (((/* implicit */int) var_7))))), ((+(972833760U))))))));
                            var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4] [i_7] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((arr_24 [i_3] [i_4] [i_4] [i_8]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)115))))))))));
                        }
                    } 
                } 
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_0)) || (var_9))))) ? (4294967295U) : (arr_10 [i_4])));
                arr_42 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((long long int) ((_Bool) max((var_5), (0)))));
            }
        }
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (signed char)80))));
        arr_43 [i_3 - 3] = ((/* implicit */_Bool) arr_11 [i_3]);
        var_19 = ((/* implicit */unsigned int) ((signed char) (!(arr_28 [i_3] [i_3] [i_3] [i_3]))));
    }
}
