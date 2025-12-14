/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243644
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1073741824))))), (arr_10 [i_2] [i_2 + 1] [i_3 + 1])))) && (((/* implicit */_Bool) arr_1 [i_4]))));
                                var_18 = ((min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])), (min((((/* implicit */unsigned long long int) var_4)), (arr_4 [i_1] [i_4]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) && (((/* implicit */_Bool) arr_0 [i_2 + 1])))))));
                                var_19 = ((/* implicit */int) arr_13 [i_0]);
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) 4192256)), (2080374784U)))) + (((arr_7 [i_4] [i_3 - 3] [i_3] [i_3]) >> (((((/* implicit */int) (short)-28822)) + (28832)))))));
                                var_21 ^= ((/* implicit */unsigned char) ((((arr_2 [i_4 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_9 [1ULL] [i_1] [i_2])) < (-6511044897190608396LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13496))) : (arr_2 [i_0])));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) arr_1 [i_1]);
                    arr_15 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_1] [i_2 + 1])) >> (((((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) - (171)))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 12; i_6 += 4) 
                    {
                        for (signed char i_7 = 1; i_7 < 12; i_7 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) arr_2 [i_0]);
                                arr_24 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [0ULL] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (6511044897190608395LL)));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) arr_8 [i_5] [i_0] [i_0] [i_0]);
                }
                var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)29571)) || (((/* implicit */_Bool) (unsigned short)35964))))), (min((arr_17 [i_0]), (((/* implicit */int) arr_6 [i_0] [i_0]))))))) ? (min((((/* implicit */long long int) var_5)), (min((var_6), (((/* implicit */long long int) var_12)))))) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_8 = 1; i_8 < 12; i_8 += 2) 
    {
        for (short i_9 = 3; i_9 < 11; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_11 = 3; i_11 < 12; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 13; i_12 += 1) 
                        {
                            {
                                var_26 &= ((short) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (short)25519)) : (((((/* implicit */int) (short)-15601)) / (2147483641)))));
                                var_27 ^= ((/* implicit */_Bool) arr_17 [i_9]);
                                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) min((arr_34 [i_10] [i_11 + 1] [i_8 - 1] [i_9 + 2] [i_10]), (arr_34 [i_8] [i_11 - 3] [i_8 + 1] [i_9 - 2] [i_12]))))));
                                var_29 *= arr_5 [(short)9];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 11; i_13 += 4) 
                    {
                        for (short i_14 = 3; i_14 < 12; i_14 += 2) 
                        {
                            {
                                arr_42 [i_8] [i_10] [i_13] [i_14 + 1] &= ((/* implicit */unsigned int) (+(((/* implicit */int) min((((short) var_11)), (((/* implicit */short) arr_16 [(short)13])))))));
                                var_30 = ((/* implicit */int) arr_27 [i_13] [i_10]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_15 = 1; i_15 < 11; i_15 += 2) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) min((((((/* implicit */int) arr_39 [i_8] [i_9 - 3] [i_8] [i_8] [i_8])) & (((/* implicit */int) (unsigned char)41)))), (((/* implicit */int) ((short) arr_39 [i_8 - 1] [i_9 + 2] [i_9 + 2] [i_15 - 1] [i_8])))));
                                arr_49 [i_8] [i_8] = min((min((6511044897190608391LL), (((/* implicit */long long int) (short)-1)))), (((/* implicit */long long int) arr_28 [i_8] [(short)3])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
