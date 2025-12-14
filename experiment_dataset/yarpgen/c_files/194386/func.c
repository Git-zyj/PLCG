/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194386
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_3 [i_0] [i_2 - 2] [i_1 - 1])) - (((/* implicit */int) arr_3 [i_2] [i_2 - 2] [i_1 + 1])))), (((((/* implicit */int) arr_0 [i_0] [i_2 - 3])) - (((/* implicit */int) arr_3 [i_0] [i_2 - 3] [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_2 - 2] [i_3] [i_2] [i_4] = (-((-(arr_8 [i_1 + 1] [i_3 - 2] [i_4 - 1]))));
                                arr_12 [0U] [i_2] [i_2 - 1] [i_2 - 4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_1 + 1] [i_0] [i_3 - 1] [(short)0])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28366))))) != (((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) | ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) var_5))))))));
                            }
                        } 
                    } 
                    var_11 |= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (_Bool)1)))))) | (((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) var_0)))) : (((((/* implicit */int) var_1)) + (((/* implicit */int) arr_9 [i_0] [i_0] [i_1 + 1] [6U] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_18 [i_6] [i_5] [i_2] [i_1] [i_0] = max((((/* implicit */unsigned long long int) ((593862338U) >> (((((/* implicit */int) (unsigned char)255)) - (251)))))), (((unsigned long long int) (signed char)-19)));
                                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_10) >> (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) var_10)) : ((-(min((((/* implicit */unsigned long long int) var_0)), (arr_7 [i_0] [i_1] [i_2 - 3] [i_5] [i_6] [i_6]))))))))));
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) % (((((/* implicit */_Bool) arr_16 [i_0])) ? (3566540301U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35228))) - (17651599099593341771ULL)))));
                            }
                        } 
                    } 
                    arr_19 [0] [i_2] [i_2] [i_0] = arr_1 [i_1 - 1];
                }
            } 
        } 
        arr_20 [i_0] [i_0] = (((~((+(18446744073709551615ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))));
        arr_21 [(unsigned short)8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_10))) & (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (max((min((2097151ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_8))))));
    }
    var_14 += ((/* implicit */unsigned char) var_7);
    var_15 = var_2;
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (var_9)))) && (((/* implicit */_Bool) ((var_8) << (((((var_10) << (((/* implicit */int) var_1)))) - (92361163U))))))));
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            {
                arr_27 [i_8] [i_8] [i_8] = ((/* implicit */short) arr_24 [i_7] [i_7] [i_7]);
                arr_28 [i_7] [i_7] [i_7] &= ((/* implicit */short) min((max((min((var_8), (((/* implicit */unsigned int) arr_26 [i_8])))), (var_8))), (((/* implicit */unsigned int) var_1))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 1) 
                {
                    for (short i_10 = 1; i_10 < 20; i_10 += 3) 
                    {
                        {
                            arr_35 [i_8] = (+(min((arr_24 [i_9 + 1] [i_9 + 1] [i_9 - 1]), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)571)), ((unsigned short)28388)))))));
                            arr_36 [i_8] [i_8] [10U] [i_10 + 4] = ((/* implicit */unsigned short) 795144974116209830ULL);
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((arr_31 [(_Bool)1]) + (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) var_6)), ((unsigned short)28376))))))))));
                            arr_37 [i_7] [i_7] [i_8] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((unsigned long long int) (+(((((/* implicit */unsigned long long int) var_7)) / (arr_25 [i_7] [i_7]))))));
                            var_18 = ((/* implicit */_Bool) arr_26 [i_7]);
                        }
                    } 
                } 
            }
        } 
    } 
}
