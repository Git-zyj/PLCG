/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245641
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [10])) ? (((long long int) arr_2 [6LL])) : (((/* implicit */long long int) max((var_10), (((/* implicit */int) var_15))))))))));
                    arr_6 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) arr_1 [i_2]);
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) ((unsigned char) ((((((/* implicit */int) arr_0 [i_0] [i_1])) / (((/* implicit */int) var_14)))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56070))))))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)23203)) && (((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_2] [i_2]))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) ((int) (unsigned short)44230));
        arr_8 [i_0] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) (unsigned short)29715)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9956))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (short)-23195))))))));
        var_24 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)182))))) ^ (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) <= (arr_2 [i_0]))) ? (((/* implicit */long long int) 1199050818)) : (9223372036854775807LL)))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((unsigned int) var_3)) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (var_3)))))))));
            arr_16 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned char) (+(1051054956))));
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1)))))));
        }
        for (short i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            var_28 = ((arr_18 [i_5] [i_5] [i_5]) % (((/* implicit */long long int) arr_15 [i_3] [i_3] [i_3])));
            arr_19 [i_5] [i_5] = ((/* implicit */unsigned long long int) var_7);
        }
        arr_20 [17ULL] [9] = ((/* implicit */long long int) arr_12 [i_3]);
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 4) 
        {
            arr_23 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((int) arr_17 [i_3] [i_3] [i_3]));
            arr_24 [3LL] [3LL] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
            arr_25 [i_3] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32256)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_14 [i_3] [i_6 + 1]))));
        }
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_15 [10] [10] [i_3])) : (var_13)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_3] [i_3])))))));
    }
    var_30 = ((/* implicit */signed char) ((int) var_16));
}
