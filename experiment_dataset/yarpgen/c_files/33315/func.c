/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33315
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
    var_15 = ((/* implicit */signed char) var_12);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((long long int) ((unsigned char) var_1)))), (((1021167117839060328ULL) | (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)14)))))));
        arr_5 [0ULL] |= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [2U])) ? (((/* implicit */int) (unsigned short)7237)) : (((/* implicit */int) var_14))))) % (max((((/* implicit */unsigned long long int) (signed char)-100)), (var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_2 [0])))))));
    }
    var_16 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13751)) || (var_12)))), (((var_3) - (((/* implicit */unsigned long long int) 158406172)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_8)))))))));
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((min((arr_9 [i_1] [i_2 + 2]), (((/* implicit */unsigned long long int) arr_6 [i_2 + 2])))), (((/* implicit */unsigned long long int) arr_14 [i_1] [4LL] [i_3])))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (signed char i_5 = 4; i_5 < 17; i_5 += 4) 
                        {
                            {
                                arr_22 [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_14 [i_2 + 2] [i_3] [i_5 - 4])), (4294967295U)))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) (unsigned char)145))))))));
                                var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) max((arr_6 [i_2 + 3]), (arr_6 [i_2 + 3])))) + (2147483647))) << (((((((/* implicit */int) arr_6 [i_2 - 1])) + (154))) - (28)))));
                            }
                        } 
                    } 
                    var_19 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_18 [i_2 + 3] [(unsigned short)17] [i_2]), (arr_18 [i_2 + 3] [i_2 + 3] [i_2 + 3]))))));
                    arr_23 [(short)11] [i_2 + 1] [i_2 + 1] [i_3] = ((unsigned short) min((var_10), (((/* implicit */unsigned long long int) var_14))));
                    arr_24 [i_1] [i_1] [(unsigned char)17] [(unsigned char)17] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_7)) == ((~(6))))) ? (min((arr_20 [i_1] [i_2 + 2]), (((/* implicit */int) (unsigned char)248)))) : (((/* implicit */int) ((((/* implicit */_Bool) (+(var_3)))) || (((/* implicit */_Bool) (~(var_13)))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (70231305224192ULL)));
        arr_25 [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))));
    }
    for (signed char i_6 = 2; i_6 < 11; i_6 += 4) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_10 [i_6 + 1] [i_6 - 2])))) ? (((/* implicit */int) arr_13 [14] [i_6 + 1] [i_6] [i_6])) : (((((/* implicit */_Bool) arr_27 [i_6] [i_6])) ? (((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) arr_21 [i_6] [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) (unsigned char)4)))) : (((((/* implicit */_Bool) 5514991871222388466LL)) ? (((/* implicit */int) arr_7 [i_6])) : (-2)))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [6U] [i_6 - 2] [i_6 - 1] [i_6 - 2])) | (((/* implicit */int) arr_13 [i_6 - 1] [i_6 - 2] [i_6 - 2] [i_6 - 2]))))) || (((/* implicit */_Bool) var_3))));
    }
}
