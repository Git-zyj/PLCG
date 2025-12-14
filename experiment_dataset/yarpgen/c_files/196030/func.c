/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196030
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((var_13) & (((/* implicit */int) max((arr_3 [i_0] [i_0 + 1]), (arr_3 [i_0] [i_0 + 1]))))));
                var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967281U)) ? ((~(((((/* implicit */_Bool) 28U)) ? (13659101801442174937ULL) : (((/* implicit */unsigned long long int) -427022024)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12718)))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 7; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) arr_4 [(signed char)3] [(_Bool)1] [(_Bool)1] [i_0]);
                                var_23 = ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            {
                                arr_15 [(_Bool)1] [i_1] [i_2] [i_5] [i_6 - 1] = ((/* implicit */_Bool) arr_0 [i_6]);
                                arr_16 [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0] [i_0] [(_Bool)1] [i_0] [(unsigned short)7])) ? ((-(((/* implicit */int) ((unsigned char) (_Bool)0))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_6 - 1] [i_5] [i_2] [i_0])) || (((/* implicit */_Bool) arr_8 [i_6 - 1] [i_5] [3] [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 2; i_7 < 9; i_7 += 1) 
                    {
                        arr_21 [i_0 - 1] [i_7] [i_1] [i_1] [i_7] [i_0 - 1] = ((/* implicit */unsigned char) 4787642272267376682ULL);
                        var_24 = arr_9 [i_1] [i_1] [i_2] [(_Bool)1] [i_7];
                        var_25 = ((/* implicit */_Bool) arr_19 [3] [i_1] [i_2] [i_7]);
                        var_26 &= ((/* implicit */unsigned char) ((short) (unsigned char)255));
                    }
                    arr_22 [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */int) var_0)) == (((arr_12 [i_0]) ? (((/* implicit */int) var_12)) : (var_16))))));
                    arr_23 [i_0] [i_0] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) max((max((var_8), (((/* implicit */unsigned long long int) arr_5 [7U])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))) || (((/* implicit */_Bool) ((signed char) arr_4 [i_0 - 1] [(_Bool)1] [i_2] [i_2])))));
                }
                arr_24 [i_0 + 1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (arr_20 [i_0 - 1]) : (arr_20 [i_0 + 1])))));
                var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_20 [i_1])))) / (max((var_18), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        var_29 = ((/* implicit */signed char) ((unsigned int) (((_Bool)1) ? (arr_25 [i_8] [i_8]) : (arr_26 [i_8]))));
        var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (arr_26 [i_8]) : (arr_25 [i_8] [i_8]))) >> (((arr_26 [3]) - (2732781391U)))));
        var_31 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) (-(var_4)))) != (max((arr_25 [i_8] [i_8]), (arr_25 [i_8] [i_8]))))) ? ((-((-(arr_25 [i_8] [i_8]))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 427022027)) ? (((/* implicit */int) (unsigned char)236)) : (var_1)))) / (((((/* implicit */_Bool) arr_25 [i_8] [i_8])) ? (arr_26 [5ULL]) : (((/* implicit */unsigned int) -1405048993))))))));
    }
    for (int i_9 = 2; i_9 < 17; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_10 = 3; i_10 < 18; i_10 += 3) 
        {
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_31 [i_10])), (13659101801442174945ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_31 [i_9]))))) : (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_9]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (4294967268U)))))) : (((((/* implicit */_Bool) 4787642272267376686ULL)) ? (4787642272267376686ULL) : (((((/* implicit */_Bool) 4787642272267376673ULL)) ? (((/* implicit */unsigned long long int) 2061826084)) : (4787642272267376691ULL)))))));
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_28 [18U]))))) != (max((((/* implicit */unsigned long long int) -19)), (13659101801442174955ULL)))))))))));
        }
        arr_34 [i_9 + 1] [i_9] = ((/* implicit */unsigned short) ((short) ((((((/* implicit */int) arr_27 [i_9])) <= (var_13))) ? (((/* implicit */int) max((var_17), ((signed char)82)))) : (((/* implicit */int) arr_27 [i_9 + 2])))));
    }
    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((int) var_9)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) || (((/* implicit */_Bool) ((((var_5) == (var_8))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((var_12), (((/* implicit */short) var_0))))))))));
}
