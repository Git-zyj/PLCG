/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216734
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
    var_15 = ((/* implicit */unsigned char) (short)8442);
    var_16 = ((((/* implicit */int) (short)8442)) == (((/* implicit */int) (short)8449)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 4) /* same iter space */
                    {
                        arr_12 [i_1] [i_1] [i_2] [i_3] [i_4 + 1] = ((/* implicit */short) ((((((/* implicit */int) (short)-8442)) + (2147483647))) >> (((((/* implicit */int) (short)8442)) - (8421)))));
                        arr_13 [i_0] [i_4] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) & (arr_7 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned int) max((((/* implicit */int) (short)-8443)), (max((var_10), (arr_8 [i_0] [i_2] [i_3] [i_4 + 1]))))))));
                        arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_1])) ? (((/* implicit */int) (short)8442)) : (((/* implicit */int) arr_10 [i_2] [i_3] [i_3] [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_4 - 1])))) >> (((((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_4 + 1])) - (660)))));
                        arr_15 [i_1] [i_3] [i_2] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_11 [i_1] [i_4 - 1] [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1] [i_1])))), ((+(((/* implicit */int) arr_10 [i_3] [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4] [i_4 + 1]))))));
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 4) /* same iter space */
                    {
                        arr_20 [i_1] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_14))));
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) (short)8449);
                        arr_22 [i_0] [i_1] [i_2] [i_2] [i_3] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)8449)) ? ((~(((/* implicit */int) arr_10 [i_1] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5] [i_5] [i_5 - 2])))) : (min((((((/* implicit */_Bool) (short)8442)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-8426)))), (((/* implicit */int) min(((short)-8443), ((short)8425))))))));
                    }
                    arr_23 [i_1] [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)8448)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)8445))));
                    arr_24 [(signed char)16] &= ((/* implicit */short) (~(arr_2 [i_0] [i_0] [i_0])));
                    arr_25 [(unsigned char)14] |= ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_16 [i_0] [2] [i_2] [i_3] [i_0] [i_2])))), (max((((/* implicit */int) ((((/* implicit */int) (short)-8448)) == (((/* implicit */int) (short)8442))))), (((((/* implicit */int) (short)8436)) % (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0] [i_0]))))))));
                    arr_26 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-8449)) || (((/* implicit */_Bool) (short)8442)))) ? (((/* implicit */int) (short)8448)) : ((~(((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3]))))));
                }
                for (unsigned int i_6 = 1; i_6 < 20; i_6 += 1) 
                {
                    arr_29 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-8462))))) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) var_5))));
                    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) min(((short)-8450), ((short)8448))))));
                }
                arr_30 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) min(((short)-8449), ((short)8425)))), ((-(((/* implicit */int) (short)8425)))))) * (((((/* implicit */_Bool) (short)8445)) ? (((/* implicit */int) (short)8448)) : (((/* implicit */int) (short)-8424))))));
            }
            var_18 |= ((/* implicit */_Bool) (~((-(((/* implicit */int) (short)-8442))))));
            var_19 *= ((/* implicit */unsigned char) (+(((arr_8 [i_0] [i_0] [i_1] [i_1]) - ((+(((/* implicit */int) (short)-8434))))))));
            arr_31 [i_1] = ((/* implicit */_Bool) (+((+(((/* implicit */int) (short)8448))))));
        }
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_36 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)8437)), ((~(((/* implicit */int) arr_11 [i_8] [i_8] [i_8] [i_7] [i_8] [i_0] [i_7]))))))) ? (((((/* implicit */_Bool) (short)-8437)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-8437)) && (((/* implicit */_Bool) (short)-8437))))) : (((/* implicit */int) arr_16 [i_0] [i_7] [i_7] [i_8] [i_8] [i_8])))) : (((/* implicit */int) var_14))));
                    arr_37 [i_7] [(unsigned char)18] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */short) arr_1 [i_0])), ((short)8448)))) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_7] [i_8])) : (var_11))) + ((+(((((/* implicit */_Bool) arr_19 [i_8] [i_7] [i_0])) ? (arr_19 [i_0] [i_7] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8442)))))))));
                    var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)8443))))) != ((~(((/* implicit */int) (short)-8458))))));
                    arr_38 [i_0] [i_7] [i_8] [i_7] = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_8])))), (((arr_9 [i_7] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (short)-8424)) : (((/* implicit */int) arr_9 [i_7] [i_7] [i_8] [i_8]))))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_7] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((var_12) | (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_7] [i_8])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-8430)) && (((/* implicit */_Bool) arr_8 [i_0] [i_7] [i_7] [i_8])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8444)) ? (((/* implicit */int) (short)8448)) : (((/* implicit */int) arr_32 [i_0] [i_7]))))) ? (max((arr_7 [i_0] [i_0] [i_0] [i_0]), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_7] [i_7])))))));
                }
            } 
        } 
    }
}
