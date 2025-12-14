/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40317
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
    var_13 = ((/* implicit */unsigned short) min((var_3), (var_3)));
    var_14 = ((/* implicit */int) var_6);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [(short)9] = ((((((arr_1 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30653))))) & (((arr_1 [(signed char)4]) >> (((arr_1 [(unsigned short)0]) - (645083462030842945ULL))))))) - (max((min((arr_1 [i_0 + 1]), (((/* implicit */unsigned long long int) arr_0 [(short)6])))), (((/* implicit */unsigned long long int) (short)-14726)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */short) ((min((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]), (arr_5 [i_0] [(_Bool)1] [i_2]))) == (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_7 [i_0 + 1] [i_1])), ((short)-14733)))))));
                    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)143)), (min((max((((/* implicit */unsigned long long int) arr_6 [i_1])), (19ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)14721)), (arr_4 [i_0] [i_1]))))))));
                    var_16 = min((max((((((/* implicit */_Bool) arr_4 [6LL] [i_1])) ? (arr_4 [i_0] [8]) : (arr_4 [4] [i_1]))), (((arr_4 [i_0] [2U]) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [0]))))))), (((/* implicit */long long int) ((arr_5 [i_2] [i_2] [i_2]) > (arr_5 [(_Bool)1] [(_Bool)1] [(_Bool)1])))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) (unsigned char)132)), (-9145272827297473224LL))) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1])))))) ? (((/* implicit */int) max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) : (((/* implicit */int) max(((unsigned short)24179), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [5LL] [i_0 + 1]))) == (1063641643U)))))))));
        var_17 = ((/* implicit */int) (~(0U)));
        arr_10 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max(((unsigned char)113), (((/* implicit */unsigned char) arr_3 [(unsigned char)6] [i_0] [i_0 + 1]))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [(unsigned short)4] [8] [8])), (arr_4 [i_0] [i_0])))) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)0))))))));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 22; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned char) ((signed char) -2062205610));
        arr_15 [5ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3 - 4] [i_3 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)511)))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_13 [(signed char)10] [(signed char)10])))));
        var_18 -= ((/* implicit */signed char) ((((/* implicit */int) (short)15)) + (((/* implicit */int) (unsigned short)255))));
        arr_16 [1ULL] [1ULL] = ((/* implicit */short) ((long long int) arr_12 [i_3 - 2] [i_3 - 2]));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_12 [22] [i_3])))) ? (arr_13 [i_3 - 1] [i_3 - 4]) : (((/* implicit */long long int) ((arr_12 [(_Bool)1] [i_3]) - (((/* implicit */int) (unsigned short)2)))))));
    }
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        arr_20 [i_4] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) (unsigned short)24185)) : (arr_11 [i_4])))) ? (arr_12 [i_4] [i_4]) : (arr_11 [i_4]))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_13 [i_4] [(unsigned short)20])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-14739)))) : (max((((/* implicit */unsigned int) (signed char)0)), (1063641643U))))) - (92U)))));
        arr_21 [(unsigned char)14] = ((/* implicit */unsigned short) max((max((arr_18 [i_4]), (arr_18 [i_4]))), (max((((/* implicit */unsigned long long int) 3387898164U)), (arr_18 [i_4])))));
        arr_22 [i_4] = ((/* implicit */short) max((1570006622), (((arr_12 [i_4] [i_4]) | (arr_12 [(_Bool)1] [i_4])))));
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 9; i_5 += 4) 
    {
        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        for (short i_9 = 3; i_9 < 11; i_9 += 2) 
                        {
                            {
                                arr_35 [i_5] [7] [i_7] = ((/* implicit */short) max((((((/* implicit */_Bool) (short)32767)) ? (arr_13 [i_6 - 2] [i_9 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)22940))))), (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_5 + 2])) * (((/* implicit */int) arr_19 [i_5 + 1])))))));
                                arr_36 [i_7] [5] [(_Bool)1] [(short)4] [5] [9ULL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_23 [i_5 - 2]), (arr_23 [i_5 - 1]))))) * (max((((arr_17 [(unsigned char)15]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)143))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [(short)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)44))) : (3138558254U))))))));
                            }
                        } 
                    } 
                } 
                var_20 ^= ((/* implicit */unsigned char) arr_12 [i_5 - 2] [i_5 + 2]);
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)5919))));
}
