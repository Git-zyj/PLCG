/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246950
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned char) (+(((((/* implicit */int) var_1)) + (((/* implicit */int) var_2)))))));
        var_13 += ((/* implicit */signed char) (~(15435854505160147041ULL)));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) /* same iter space */
        {
            arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)48))))), (((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_4 [(unsigned char)12])) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)145)))))))));
            var_14 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)248)) ? (2933717754537105831ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243)))))));
        }
        for (signed char i_2 = 1; i_2 < 15; i_2 += 4) /* same iter space */
        {
            var_15 = min((((((/* implicit */_Bool) arr_0 [i_2] [i_2 - 1])) ? (var_3) : (arr_0 [i_2] [i_2 - 1]))), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned char)211))))))));
            /* LoopNest 2 */
            for (signed char i_3 = 4; i_3 < 15; i_3 += 1) 
            {
                for (unsigned char i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    {
                        arr_14 [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) : (236415724624243944ULL)))) ? (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (var_0))) : (min((2ULL), (22ULL))))) : (max((((2756144847598228275ULL) * (11712333719894082360ULL))), (((((/* implicit */_Bool) arr_9 [i_0] [i_2 + 1] [i_3])) ? (arr_6 [15ULL]) : (var_4)))))));
                        var_16 -= ((unsigned long long int) ((unsigned char) (unsigned char)0));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 1) 
                        {
                            var_17 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_10 [i_5 + 2] [i_5 + 3] [i_5 + 1])))));
                            arr_17 [i_0] [i_0] [14ULL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15513026319172445781ULL)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (unsigned char)30))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */signed char) ((arr_12 [(signed char)1] [i_2 + 1] [i_2]) >> (((var_9) - (6501350373428028535ULL)))));
                            var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)163))) : (18446744073709551614ULL))) + (((unsigned long long int) 99948683518257525ULL))));
                            arr_22 [i_0] [i_0] [i_3 + 1] [i_4] [i_6] [i_2] = ((var_12) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
                            var_20 += ((/* implicit */unsigned char) ((((((((/* implicit */int) (unsigned char)24)) - (((/* implicit */int) (signed char)72)))) + (2147483647))) >> (((((18210328349085307661ULL) << (((((/* implicit */int) (unsigned char)178)) - (124))))) - (14069245235905429473ULL)))));
                        }
                        for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 2) 
                        {
                            arr_25 [i_0] [i_2] [i_2] [i_4 + 1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0] [i_2 + 1] [(signed char)7] [i_3 - 1] [i_4] [i_2 + 1] [i_3 - 1]))))) ? (((/* implicit */int) min(((unsigned char)243), (((/* implicit */unsigned char) (signed char)51))))) : ((+(((/* implicit */int) arr_11 [i_2] [i_2 - 1] [i_3 + 1] [i_3 + 1]))))));
                            arr_26 [i_7 + 1] [i_2 + 1] = ((/* implicit */signed char) ((arr_0 [i_3 - 2] [i_0]) / (((((/* implicit */_Bool) arr_0 [i_0] [i_7 - 3])) ? (14942709408434688578ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121)))))));
                            arr_27 [i_0] [i_2 + 1] [i_0] = ((/* implicit */unsigned long long int) var_6);
                        }
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (signed char i_8 = 1; i_8 < 12; i_8 += 4) 
        {
            for (unsigned char i_9 = 4; i_9 < 15; i_9 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 4; i_10 < 14; i_10 += 3) 
                    {
                        arr_36 [i_0] [i_8] [(unsigned char)11] [(unsigned char)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) max((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), ((unsigned char)255)))) : ((~(((/* implicit */int) arr_20 [i_0] [i_8] [i_8] [i_9] [i_9 - 3] [i_10] [i_10]))))));
                        arr_37 [i_0] [i_8 + 4] [7ULL] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_4)))) ? (max((arr_24 [(unsigned char)3] [i_9] [i_9 - 3] [i_9 - 2] [i_9 + 1]), (((/* implicit */unsigned long long int) arr_10 [i_8 + 1] [i_9 - 3] [i_10 - 3])))) : (336278227893688743ULL)));
                        arr_38 [1ULL] [i_8] [1ULL] [(signed char)1] = ((/* implicit */unsigned char) var_11);
                    }
                    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_11 [i_8 - 1] [i_8 + 3] [i_8 + 1] [i_9 + 1]), (((/* implicit */unsigned char) (signed char)99))))) ? (((/* implicit */int) min((arr_11 [i_8 + 3] [i_8 + 3] [i_8 - 1] [i_9 + 1]), (arr_11 [i_8 + 4] [i_8 - 1] [i_8 + 2] [i_9 - 4])))) : ((-(((/* implicit */int) arr_11 [i_8 - 1] [i_8 + 2] [i_8 - 1] [i_9 - 4]))))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_3))) << (((((arr_0 [i_8 + 2] [i_8 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_8 + 1] [i_8 + 2] [i_9 - 2]))))) - (4156947218185217139ULL)))));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 16; i_12 += 4) 
                        {
                            arr_46 [i_12] [i_9] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)208))))), ((~(arr_19 [i_0] [i_9] [i_12] [i_11] [i_0]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                            var_23 = ((/* implicit */signed char) (unsigned char)200);
                            var_24 += (+((+(arr_12 [i_9 - 3] [i_8] [i_8 - 1]))));
                            arr_47 [i_0] [i_8 - 1] [i_9] [11ULL] [(unsigned char)9] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-75))));
                        }
                        var_25 = ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) ((unsigned char) arr_20 [i_0] [i_8] [i_8 + 4] [(unsigned char)5] [i_9 - 4] [i_11] [(unsigned char)12])))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)124)) * (((/* implicit */int) (signed char)-34))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))) + (1377661433747883177ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))));
                    }
                    var_26 += ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((unsigned long long int) (signed char)100)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned char) min((((((/* implicit */int) (signed char)-48)) % ((-(((/* implicit */int) var_1)))))), (((/* implicit */int) var_7))));
    }
    var_28 = ((/* implicit */unsigned char) var_3);
}
