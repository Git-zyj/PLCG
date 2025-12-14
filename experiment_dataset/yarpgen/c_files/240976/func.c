/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240976
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_17))))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)109)) - (((((/* implicit */int) var_17)) + (((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -8840408049198822225LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23207))) : (-8840408049198822225LL)));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)27)) << (((((((/* implicit */int) (short)-14658)) + (14686))) - (12)))));
        var_19 = ((/* implicit */unsigned short) ((arr_0 [i_0]) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            {
                arr_9 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) arr_5 [i_1 + 1])) : (-8840408049198822225LL)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((arr_4 [i_2] [i_3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2]))) : (arr_5 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1 + 1])))));
                    var_21 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-14671)) <= (((/* implicit */int) var_10)))))) == (arr_10 [i_2] [i_3]));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_18 [3U] [10U] [i_4] [i_4] [i_5] [13ULL] = ((/* implicit */_Bool) ((-2955315181449355292LL) + (((/* implicit */long long int) 0U))));
                            var_22 = ((((/* implicit */_Bool) arr_17 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])) ? (arr_17 [i_4] [i_4 - 1] [13] [i_4 - 1] [i_4 - 1]) : (arr_17 [i_4] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1]));
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) -2062564458)) ? (((/* implicit */unsigned long long int) 8840408049198822221LL)) : (13531485921118569492ULL)));
                            var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_17 [i_1] [(_Bool)1] [i_1] [(unsigned short)12] [i_1])) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (3573417925U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-21247)))));
                        }
                        for (short i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_3] [i_4 - 1] [i_6] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_16 [i_1] [i_2])))))) : (((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_5 [i_1 + 1])))));
                            var_26 = ((arr_8 [(signed char)5] [i_2] [i_1]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1577356903)) ? (((/* implicit */int) (short)14671)) : (((/* implicit */int) (unsigned char)255))))) : (arr_15 [i_1 + 1] [i_6]));
                        }
                        var_27 = (i_4 % 2 == 0) ? (((((arr_14 [i_3] [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_10 [(_Bool)1] [i_1]))) * (((/* implicit */long long int) arr_12 [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_1 + 1])))) : (((((arr_14 [i_3] [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_10 [(_Bool)1] [i_1]))) / (((/* implicit */long long int) arr_12 [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_1 + 1]))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_23 [i_1 + 1] [i_2] [i_3] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4915258152590982149ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14026)))));
                        arr_26 [i_7] [i_2] [i_2] [i_2] = ((/* implicit */short) (((_Bool)0) ? (arr_10 [i_1 + 1] [i_1 + 1]) : (arr_10 [i_1 + 1] [i_1 + 1])));
                    }
                }
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21225)) ? (0LL) : (((/* implicit */long long int) 1528013717U))))) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
            }
        } 
    } 
}
