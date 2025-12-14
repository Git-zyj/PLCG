/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23213
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((((/* implicit */int) var_9)) / (((int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_3))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_0])) ^ (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_0)) + (((/* implicit */int) (unsigned short)17962)))), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || ((_Bool)1))))))) : (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (18141626617937435100ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1875)))))));
        var_12 = ((/* implicit */int) var_5);
        var_13 *= ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_14 += ((/* implicit */unsigned short) arr_4 [10]);
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) var_3);
        var_15 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_0 [i_1])))) >= (((/* implicit */int) arr_0 [i_1]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (11228137843328828782ULL)));
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    var_17 *= ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
                    var_18 = ((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_1]);
                }
            }
            arr_15 [i_1] [i_1] = (-(((/* implicit */int) var_9)));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                var_19 = ((/* implicit */short) (((_Bool)1) ? (-228208037) : (((/* implicit */int) (short)14079))));
                arr_19 [i_1] [i_5] [i_5] [i_5] = ((/* implicit */signed char) arr_4 [i_1]);
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_8 [i_1] [(_Bool)1] [i_5]))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(arr_12 [i_1] [i_1] [i_2 + 1] [i_2] [i_2]))))));
            }
            var_22 = (-(arr_16 [i_2 + 1] [i_1] [i_1] [i_1]));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (4569369103897683645ULL) : (((/* implicit */unsigned long long int) arr_3 [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((/* implicit */int) arr_6 [9] [9] [i_2 + 1]))))) : (((((/* implicit */_Bool) var_6)) ? (arr_8 [i_1] [(unsigned char)4] [i_2]) : (arr_16 [i_1] [(_Bool)1] [(_Bool)1] [i_1]))))))));
        }
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            arr_24 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_17 [i_1] [5U] [i_1] [i_1]), (arr_17 [(unsigned char)5] [i_6] [i_6] [i_1])))) == (((/* implicit */int) arr_6 [i_1] [i_6] [5ULL]))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                var_24 = ((/* implicit */short) arr_1 [i_1] [i_1]);
                var_25 = ((/* implicit */unsigned int) var_7);
                var_26 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_2 [i_1])), (min((max((arr_1 [i_1] [i_1]), (((/* implicit */unsigned long long int) (short)9975)))), (((/* implicit */unsigned long long int) -1797971598))))));
                var_27 = ((/* implicit */unsigned short) ((unsigned long long int) var_5));
            }
            arr_29 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_6 [6ULL] [i_6] [i_6]))) > ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_6] [i_6] [i_1])))))))));
        }
    }
    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) 3215963619772346421ULL)))) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) var_4)))))));
}
