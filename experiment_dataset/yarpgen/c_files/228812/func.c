/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228812
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */signed char) (((-(var_1))) / (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_10 [i_0] [i_2] [(short)8])) / (((/* implicit */int) arr_9 [(signed char)14] [i_1] [i_2 + 1] [(signed char)14] [i_0] [i_1])))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)36)))))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_16)))), (((/* implicit */int) (signed char)59))))) ? ((~(min((var_0), (var_0))))) : (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [(signed char)0]))))), (max((var_9), (((/* implicit */unsigned long long int) var_7))))))));
                            var_19 = ((/* implicit */unsigned int) ((arr_11 [i_0] [i_1] [(unsigned short)3] [i_1] [i_4]) < (((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) (unsigned short)54641)) : (((/* implicit */int) (short)6476))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_5 = 2; i_5 < 22; i_5 += 3) 
        {
            for (signed char i_6 = 1; i_6 < 21; i_6 += 4) 
            {
                {
                    arr_19 [i_0] [i_5 - 1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) (-(var_15)))) != (arr_8 [i_5 - 1] [i_6 + 1] [i_6] [i_6 + 2]))) ? (min((((/* implicit */int) arr_2 [i_6 + 2])), (((((/* implicit */int) var_13)) << (((arr_3 [i_0] [16] [i_0]) - (12908406306365315466ULL))))))) : (((/* implicit */int) min(((unsigned short)45961), ((unsigned short)45963))))));
                    var_20 = ((((/* implicit */unsigned long long int) max((arr_11 [i_0] [i_5] [i_0] [i_0] [i_0]), ((~(((/* implicit */int) (signed char)-40))))))) ^ (arr_3 [i_0] [i_0] [i_0]));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_7 = 2; i_7 < 22; i_7 += 2) 
                    {
                        arr_22 [i_0] [i_5 - 1] [i_5 - 2] [i_6] [13ULL] [i_5 - 2] = ((((/* implicit */int) arr_2 [i_6])) >> (((2439067787U) - (2439067771U))));
                        var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (17585420643815978490ULL));
                    }
                    arr_23 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_16 [i_5] [i_6 + 2]))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 21; i_8 += 3) 
    {
        for (unsigned int i_9 = 3; i_9 < 19; i_9 += 4) 
        {
            for (unsigned short i_10 = 3; i_10 < 20; i_10 += 2) 
            {
                {
                    var_22 = ((/* implicit */int) max((max((((/* implicit */long long int) min((((/* implicit */unsigned short) var_11)), (arr_16 [i_8] [i_9])))), (arr_28 [i_8]))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_12 [i_8] [11ULL] [i_10] [i_9 - 2] [i_8])) && (((/* implicit */_Bool) arr_3 [i_8] [i_8] [i_10])))) || (((/* implicit */_Bool) ((unsigned long long int) 1838104988U))))))));
                    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) + (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_8)))) ? (((/* implicit */int) min((arr_6 [i_8]), (((/* implicit */unsigned short) (signed char)-93))))) : (((/* implicit */int) ((signed char) min((2456862308U), (((/* implicit */unsigned int) (signed char)91)))))));
                }
            } 
        } 
    } 
}
