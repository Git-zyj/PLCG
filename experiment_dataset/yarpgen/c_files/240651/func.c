/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240651
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
    var_13 = ((/* implicit */signed char) var_5);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_7 [i_1] = arr_4 [i_0] [i_1] [i_0 - 2];
            var_14 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) >> (((((/* implicit */int) arr_1 [i_1])) - (83))))) & (((((/* implicit */int) arr_0 [i_1])) >> (((-1580092332) + (1580092335)))))));
        }
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            arr_12 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((arr_3 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 2; i_3 < 10; i_3 += 3) 
            {
                for (unsigned char i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 4) 
                        {
                            arr_20 [i_3] [i_4 + 2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_2] [i_3 + 2] [i_4])) ^ (((/* implicit */int) arr_4 [i_3 + 3] [i_3 + 3] [i_3]))));
                            var_15 = var_2;
                            var_16 = ((/* implicit */long long int) arr_19 [i_3]);
                            var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_3 + 2] [i_0 - 1]))));
                        }
                        for (int i_6 = 1; i_6 < 11; i_6 += 3) 
                        {
                            arr_25 [i_3] [i_2] [i_3 - 2] [i_2] [i_3] = ((/* implicit */unsigned char) (((-(4294967295U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)0) && (arr_9 [i_2] [i_3 + 3] [i_6])))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_2] [i_3 + 3]))) : (arr_23 [i_0] [i_3] [i_2] [i_3] [i_4 + 3] [i_6])))) ? (((/* implicit */int) ((_Bool) (short)-29832))) : (arr_2 [i_6 + 1])));
                        }
                        arr_26 [i_4] [i_3] [i_3] [i_3] [i_0] = (-(((/* implicit */int) var_1)));
                    }
                } 
            } 
            arr_27 [i_0] [i_2] = ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) arr_17 [i_0])) : (((/* implicit */int) arr_21 [i_0] [i_0 - 1] [i_0 + 1])));
        }
        var_19 = ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) arr_16 [2] [i_0] [i_0] [i_0 + 1] [2] [2])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_3 [i_0]))) : (((/* implicit */long long int) -1047662627))));
        arr_28 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                {
                    arr_36 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) ((375159648) != (((/* implicit */int) (unsigned char)24))))) | (((((/* implicit */int) (unsigned short)31959)) | (((/* implicit */int) (unsigned short)11))))));
                    var_20 = ((/* implicit */unsigned long long int) ((short) arr_14 [i_0 + 2]));
                    arr_37 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_34 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (unsigned short)52701))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 2])) > ((-(((/* implicit */int) arr_0 [i_0]))))));
    }
    for (int i_9 = 2; i_9 < 11; i_9 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_29 [(unsigned short)0] [i_9 + 1])))) ? (max((((((/* implicit */_Bool) arr_14 [i_9])) ? (((/* implicit */long long int) 0U)) : (var_11))), (((/* implicit */long long int) ((((/* implicit */int) arr_19 [4U])) | (arr_18 [i_9] [i_9] [i_9] [i_9] [i_9])))))) : (((/* implicit */long long int) (~((~(((/* implicit */int) (signed char)-126)))))))));
        arr_42 [i_9 - 2] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_5 [i_9 + 2] [i_9 + 1]), (arr_5 [i_9 + 2] [i_9 + 1])))) >= (((/* implicit */int) var_7))));
    }
    for (int i_10 = 2; i_10 < 11; i_10 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_10] [i_10] [4U] [i_10] [i_10 + 2] [4U]))) != (max((((/* implicit */long long int) (-2147483647 - 1))), (arr_3 [i_10 - 2]))))) ? ((~(((/* implicit */int) arr_34 [i_10] [i_10] [i_10 - 2] [i_10 + 2])))) : (arr_30 [i_10] [i_10] [i_10])));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((((/* implicit */_Bool) arr_29 [4U] [i_10 + 1])) || (((/* implicit */_Bool) arr_3 [i_10]))))))) ^ (((/* implicit */int) ((((/* implicit */int) arr_17 [i_10 - 1])) < (((/* implicit */int) arr_17 [i_10 - 1])))))));
        arr_45 [i_10] = ((/* implicit */unsigned short) arr_8 [i_10] [i_10] [i_10]);
    }
    var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) var_3)) ? (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
}
