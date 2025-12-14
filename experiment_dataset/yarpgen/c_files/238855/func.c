/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238855
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
    var_19 = ((/* implicit */unsigned char) ((var_8) >= (((/* implicit */unsigned long long int) ((long long int) var_7)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        var_20 -= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_4 [i_3 + 1] [i_3 - 1])) && (((/* implicit */_Bool) arr_4 [i_3 + 1] [i_3 - 2])))));
                        var_21 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 2305843009213431808LL)) >= (arr_1 [i_0] [i_0])));
                    }
                    for (long long int i_4 = 1; i_4 < 16; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1]))))) >> (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 4294967295U)) : (2305843009213431789LL))) - (4294967295LL)))))));
                        var_23 = ((/* implicit */unsigned int) min(((+(min((var_7), (arr_9 [i_4] [i_2] [i_1] [i_0]))))), (((/* implicit */long long int) ((signed char) 2305843009213431808LL)))));
                        var_24 = ((/* implicit */int) min((6235253025167861559LL), (((/* implicit */long long int) (signed char)51))));
                    }
                    var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1012246002U)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (-2305843009213431790LL))) >= (6235253025167861559LL)));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_2] [i_1] [i_5])) ? (((/* implicit */int) arr_12 [i_5])) : (arr_14 [i_0] [i_1] [i_2] [i_5])))) | (arr_9 [i_0] [i_1] [i_2] [i_5])))) : (arr_1 [i_0] [i_0])));
                        var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) arr_2 [i_0] [18ULL] [(_Bool)1])) : (((/* implicit */int) ((unsigned char) 6235253025167861558LL)))))) ? (((((((/* implicit */_Bool) (signed char)-12)) ? (522240U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))));
                        var_28 = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (2305843009213431790LL)))), ((+(522250U))))));
                        arr_16 [i_5] [i_1] [i_1] [i_1] [i_1] [i_1] = arr_11 [i_0] [i_1] [i_2] [i_2] [i_5];
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                {
                    arr_25 [i_6] [i_6] [i_8] [i_6] = ((/* implicit */int) min((816605614835149616LL), (-29902632965319567LL)));
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((short) min((var_1), (((/* implicit */unsigned int) arr_12 [i_6]))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                {
                    var_30 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_6] [(_Bool)1] [i_10])) ? (arr_7 [i_6] [i_6] [i_6]) : (arr_7 [i_6] [i_9] [i_10])))) >= (min((((/* implicit */unsigned int) arr_6 [i_6] [i_6] [i_6])), ((~(1215262176U)))))));
                    var_31 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_10] [i_9] [i_6])) ? (((/* implicit */long long int) arr_18 [i_6])) : ((-9223372036854775807LL - 1LL)))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_10] [i_10] [i_9] [i_6]))) : (arr_9 [i_6] [i_9] [i_10] [i_10])))));
                }
            } 
        } 
        arr_30 [i_6] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((var_1) | (((/* implicit */unsigned int) -1241262382))))) ? (min((2147483647), (arr_29 [i_6] [i_6] [i_6]))) : (((((/* implicit */_Bool) 5890397422812387161ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4)))))));
    }
}
