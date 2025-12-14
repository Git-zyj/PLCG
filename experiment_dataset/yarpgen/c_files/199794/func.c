/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199794
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
    var_12 = ((/* implicit */_Bool) var_1);
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_4))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (var_4))) + (((/* implicit */int) ((((/* implicit */int) var_5)) <= (var_9))))));
            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */long long int) var_2)) & (((long long int) var_8)))))));
            var_16 = ((/* implicit */int) var_10);
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (var_10)))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((33030144U), (((/* implicit */unsigned int) var_4)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) >= (((/* implicit */int) var_11))))))))) ? (7018431809350417847ULL) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_2] [23])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)16376)))) + (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)57172)))))))));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) 5410195516572387525ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_6)) + (var_4))))))))));
        }
        arr_8 [i_0 - 2] = ((/* implicit */short) arr_4 [i_0 - 2]);
        var_19 = ((/* implicit */unsigned int) var_1);
    }
    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_20 = ((/* implicit */_Bool) var_10);
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(var_10))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 15; i_4 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), ((+(((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
        arr_14 [i_4] [i_4] = ((/* implicit */int) ((short) arr_3 [i_4] [i_4 + 3] [i_4]));
        var_23 |= ((/* implicit */short) arr_1 [i_4] [i_4 - 1]);
        /* LoopSeq 1 */
        for (unsigned short i_5 = 3; i_5 < 17; i_5 += 3) 
        {
            var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_4 - 1] [i_4 + 2] [i_5 - 1]))));
            var_25 = ((/* implicit */short) arr_4 [i_5]);
            var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)65))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((+(var_2))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)1415)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [15] [15] [i_6])))))));
                arr_20 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */_Bool) ((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4 + 2] [13])))));
                arr_21 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) & (arr_4 [i_4])))) ? (((/* implicit */int) ((var_4) != (((/* implicit */int) var_6))))) : (((/* implicit */int) (unsigned short)1834))));
                var_28 += ((/* implicit */_Bool) arr_17 [i_4] [(unsigned char)10] [2ULL]);
            }
        }
        arr_22 [i_4] = ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (var_10))));
    }
    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (((((+(((/* implicit */int) var_5)))) % (((((/* implicit */int) var_7)) & (((/* implicit */int) (signed char)51)))))) & (((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (unsigned char)127))))))))));
}
