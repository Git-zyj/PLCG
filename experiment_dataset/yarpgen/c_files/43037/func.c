/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43037
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
    var_10 ^= ((/* implicit */short) var_5);
    var_11 = ((/* implicit */unsigned char) max((1504203702), (((/* implicit */int) (unsigned char)7))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        arr_9 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((8315088164342114760ULL), (((/* implicit */unsigned long long int) (short)32756))))) ? (((((/* implicit */_Bool) max(((short)-26402), (((/* implicit */short) var_3))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) arr_4 [i_0])) << (((((/* implicit */int) (short)18774)) - (18759))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */long long int) 1042348422U)) : (-9LL)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))));
                        arr_10 [i_0] [(signed char)10] [i_0] [i_0] [i_0] [(signed char)10] = (short)10435;
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            arr_14 [i_1 + 2] [(short)7] [i_1 + 2] = ((/* implicit */short) arr_0 [i_1]);
                            arr_15 [i_0] = ((/* implicit */unsigned char) ((arr_5 [i_3 - 1] [i_1 - 2] [i_2] [i_2]) & (arr_5 [i_3 + 1] [i_1 + 2] [i_2] [i_3])));
                            arr_16 [i_4] [15] [i_2] [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-10426)) - (((/* implicit */int) (short)29085))))) ? (arr_0 [(unsigned short)3]) : (((((/* implicit */_Bool) arr_4 [i_4])) ? (1092743085) : (((/* implicit */int) var_4))))));
                        }
                        var_12 -= ((/* implicit */unsigned char) (short)10455);
                        /* LoopSeq 1 */
                        for (short i_5 = 2; i_5 < 17; i_5 += 4) 
                        {
                            var_13 ^= ((/* implicit */unsigned char) arr_4 [i_1]);
                            arr_19 [i_0] [i_2] [i_0] [i_0] = ((((/* implicit */int) max(((short)-10445), ((short)8050)))) ^ (((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1 - 2] [i_2] [i_3] [i_5]))))) >> (((((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */int) (short)10448)) : (((/* implicit */int) (_Bool)1)))) - (10422))))));
                            arr_20 [i_5] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (-((+(arr_12 [i_3 - 1])))));
                        }
                    }
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((arr_0 [i_2]), (((((/* implicit */_Bool) 2061022856)) ? (((/* implicit */int) arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 2] [2])) : (((/* implicit */int) (short)-10422))))));
                    var_14 ^= ((/* implicit */unsigned int) (short)-10432);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 14; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 2; i_10 < 16; i_10 += 2) 
                        {
                            {
                                arr_34 [i_8] = ((/* implicit */int) var_5);
                                var_16 = ((/* implicit */unsigned short) min((var_16), (arr_11 [i_6] [i_6] [1LL] [i_6] [1LL])));
                                var_17 = ((/* implicit */short) arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                            }
                        } 
                    } 
                    arr_35 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_6] [i_7] [i_6])) ? (((((/* implicit */_Bool) arr_17 [i_6] [i_7] [i_7] [i_8] [i_8] [(_Bool)1])) ? (((/* implicit */int) var_3)) : (((((((/* implicit */int) var_0)) + (2147483647))) >> (((2061022858) - (2061022854))))))) : ((((_Bool)1) ? (2061022852) : (((/* implicit */int) (signed char)116))))));
                    arr_36 [2] [9] [i_8] [i_8] = ((/* implicit */unsigned char) min(((-(arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))), (max((max((arr_32 [i_6] [i_6] [i_7] [i_7] [(_Bool)1] [i_8] [i_8]), (((/* implicit */unsigned int) (short)-10466)))), (((/* implicit */unsigned int) max((var_4), (((/* implicit */unsigned short) (short)-10437)))))))));
                    arr_37 [i_8] = ((/* implicit */short) (-(((arr_29 [i_6] [i_6] [i_8]) ? (arr_1 [i_6]) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)126)), ((unsigned char)28))))))));
                }
            } 
        } 
    } 
}
