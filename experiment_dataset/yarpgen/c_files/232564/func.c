/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232564
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1] [i_1 - 2])) && (((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1] [i_1 - 2])))) && (((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_2] [i_1 + 2] [i_2])))));
                    var_10 ^= ((/* implicit */unsigned char) ((long long int) (!(((((/* implicit */_Bool) (short)32762)) || (((/* implicit */_Bool) arr_2 [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 4) /* same iter space */
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned char) (+(arr_5 [i_3] [i_3] [i_3 + 1])));
        arr_12 [i_3] [i_3] = ((/* implicit */_Bool) arr_2 [i_3 + 1]);
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            arr_17 [(short)4] [i_3] [(signed char)4] = ((long long int) (-(((/* implicit */int) var_4))));
            arr_18 [(unsigned short)0] [i_3] [i_4] = ((/* implicit */signed char) arr_0 [i_4]);
            /* LoopSeq 1 */
            for (short i_5 = 1; i_5 < 14; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    arr_26 [15] [(signed char)15] [(signed char)15] [i_3] [15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_3 + 3] [i_3] [i_3 + 2] [i_5 + 2])) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (unsigned short)41374))));
                    arr_27 [i_3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32762))))) && (((/* implicit */_Bool) (+(1788408487))))));
                }
                for (int i_7 = 4; i_7 < 13; i_7 += 1) 
                {
                    arr_30 [i_3] [i_4] [(unsigned short)1] [14ULL] = -1788408487;
                    arr_31 [i_3] = (~(((/* implicit */int) arr_23 [i_3] [i_5 + 1] [i_3])));
                }
                var_11 = ((/* implicit */int) 3065506741849890861ULL);
                var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_13 [i_5 + 1] [i_5] [i_5 + 1]))));
                arr_32 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [0] [i_5 + 1] [i_5 - 1])) ? ((+(var_8))) : ((~(-1788408475)))));
            }
        }
    }
    for (unsigned char i_8 = 1; i_8 < 13; i_8 += 4) /* same iter space */
    {
        arr_35 [i_8] = ((/* implicit */int) (!((_Bool)1)));
        arr_36 [i_8 - 1] = ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) arr_4 [i_8 + 1] [i_8 + 1] [i_8 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32763))) : (6210185794220314362LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_8])) ? (var_8) : (((/* implicit */int) var_7)))))))));
        var_13 = ((/* implicit */unsigned short) arr_20 [(unsigned char)14] [i_8 - 1] [i_8 + 3]);
    }
    var_14 = (+(min((min((((/* implicit */unsigned long long int) 742196267U)), (9956136976125421779ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_2))))))));
    var_15 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_7))))) / (11680147574792584114ULL)))));
    /* LoopNest 3 */
    for (int i_9 = 4; i_9 < 10; i_9 += 2) 
    {
        for (unsigned long long int i_10 = 4; i_10 < 10; i_10 += 2) 
        {
            for (long long int i_11 = 1; i_11 < 11; i_11 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) (+(min(((+(((/* implicit */int) (short)-32763)))), (((/* implicit */int) arr_34 [i_9 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 8; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 2; i_13 < 9; i_13 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_9 - 3] [(_Bool)1] [i_9 - 3])) ? ((+(((/* implicit */int) arr_9 [i_9 - 1])))) : (((/* implicit */int) ((arr_13 [i_9 - 2] [i_10] [i_9 - 2]) && (((/* implicit */_Bool) var_4)))))))) && (((/* implicit */_Bool) min((min((((/* implicit */int) arr_23 [i_11] [i_11] [i_12])), (1788408473))), (((int) arr_47 [i_12 + 1] [i_12 + 1] [i_12 + 4] [(unsigned char)9] [(unsigned char)9] [i_9])))))));
                                var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_13 [i_10 + 1] [i_12] [i_13 - 1])), (arr_10 [i_11])))), (arr_41 [i_10]))))));
                                var_19 = ((/* implicit */unsigned short) 1458941500);
                            }
                        } 
                    } 
                    arr_50 [i_11] [i_11] [i_9] = ((/* implicit */unsigned char) max((arr_10 [i_11]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_11])))))));
                }
            } 
        } 
    } 
}
