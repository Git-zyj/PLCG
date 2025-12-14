/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49275
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
    var_20 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) max((max((((/* implicit */int) var_6)), (((arr_2 [i_0] [i_0]) & (((/* implicit */int) (unsigned short)34923)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    var_21 += ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) && (((/* implicit */_Bool) arr_0 [i_1] [i_1])))))) > (((1048575ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_22 &= var_3;
                                arr_14 [i_0 + 1] [i_1] [i_0 + 1] [i_3] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 17691572019663731233ULL)) && (((/* implicit */_Bool) arr_12 [i_4] [i_0] [i_2] [i_1] [i_0] [(unsigned short)19]))))))));
                                arr_15 [i_2] [i_3] [(unsigned char)15] [i_3] [i_3] [i_0] [2] = ((/* implicit */unsigned int) ((((unsigned int) var_18)) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) 1122879417))))) ? (((/* implicit */int) arr_5 [i_0])) : (((arr_1 [i_3] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))))))));
                                var_23 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_18)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_9 [(signed char)16] [i_1] [i_1] [(signed char)16]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1] [i_2] [(unsigned short)3])))))) : (arr_9 [i_0 + 1] [(signed char)3] [i_2] [i_4])))));
                                arr_16 [i_4] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [22] [i_2] [i_3] [i_3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_11 [i_0]) : (arr_9 [i_0 + 1] [i_0 + 1] [i_3] [i_4])))))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_4) == (var_4))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max((((((/* implicit */_Bool) (short)-8806)) || (((/* implicit */_Bool) arr_10 [i_0])))), (((((/* implicit */unsigned int) 32767)) == (arr_13 [i_1] [i_0]))))))));
                    arr_19 [i_0] [i_1] [i_5] = arr_6 [i_5];
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_17 [i_5] [i_5] [i_5]), (var_3)))) ? (arr_17 [i_0] [i_1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((874261858U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10)))))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    arr_22 [i_0] = ((/* implicit */int) ((arr_12 [i_0] [i_0] [i_6] [i_0] [i_6] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))));
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))) >= (((((/* implicit */_Bool) (unsigned short)511)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (arr_12 [14ULL] [i_0] [i_1] [i_0] [i_0] [i_6])))));
                }
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) ((var_3) > (arr_6 [i_0])))) : (((/* implicit */int) ((arr_6 [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))))));
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)34904)) + (((/* implicit */int) (unsigned char)48))));
                                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_17 [i_0 - 1] [i_1] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0 - 2])))));
                                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_7] [i_8])) : (((/* implicit */int) arr_7 [i_1] [i_7] [i_1] [i_7]))));
                            }
                        } 
                    } 
                    arr_32 [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) ((arr_6 [i_0 - 2]) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_30 [i_0] [i_0 - 1] [i_1] [i_1] [i_7] [i_7] [i_7])))) - (26460)))));
                }
                /* LoopNest 3 */
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 23; i_12 += 2) 
                        {
                            {
                                arr_41 [i_1] [i_0] [i_10] [i_0] [i_0 - 2] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((var_16), (((/* implicit */unsigned short) (_Bool)0)))))));
                                arr_42 [i_0] [i_11] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2017612633061982208LL)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0]))) ^ (144115188073758720ULL)))) ? (4619704760523583195ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13977))))) : (max(((-(72057594037927935ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11834481584394651434ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_31 -= ((/* implicit */unsigned short) var_0);
}
