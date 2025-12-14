/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229798
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
    for (signed char i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        arr_11 [(short)5] [(short)5] [i_2] [(short)5] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_12)), (var_10))), (((var_10) + (((/* implicit */long long int) arr_8 [i_0] [10U] [(unsigned short)10] [i_3]))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [(signed char)3] [(signed char)3] [(signed char)3] [(signed char)3]))))) : (((unsigned int) (signed char)-111))));
                        var_16 += ((/* implicit */short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (((unsigned int) arr_9 [i_0] [i_0] [i_3]))))) & (9223372036854775807LL)));
                    }
                    for (unsigned short i_4 = 1; i_4 < 10; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_0 - 4] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_14 [(unsigned short)6] [i_1] [i_1] [i_4] [i_1] [i_2]))) + (arr_3 [i_0]))))));
                        var_18 = ((/* implicit */signed char) arr_12 [i_0] [i_0 + 1] [1U] [i_0] [2LL]);
                        arr_16 [i_4] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_3 [i_0 - 3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_0 + 1])))) : (((arr_3 [i_0]) / (arr_3 [i_4 - 1])))));
                    }
                    arr_17 [i_0 - 3] [i_1] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-63))))) <= (var_10)))), (((unsigned short) var_11))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((var_10), (var_4))), (((((/* implicit */_Bool) 6725923599314873028LL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56509)))))))) ? (((((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) (signed char)-63))))) / (arr_14 [i_2] [i_2] [i_0 - 3] [i_0] [(unsigned short)7] [(unsigned short)2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-111)) != (((/* implicit */int) (unsigned short)54420))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        for (unsigned int i_6 = 3; i_6 < 16; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                {
                    arr_25 [i_7] = ((/* implicit */signed char) ((((/* implicit */long long int) ((arr_22 [i_6 + 1] [i_6 - 1] [i_6]) >> (((((/* implicit */int) (short)-32759)) + (32768)))))) & (((long long int) arr_20 [i_6 + 1] [i_6 + 1]))));
                    var_20 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned short)30891)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [(short)13] [(short)3] [i_7] [(short)3]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (arr_23 [i_5] [i_5] [i_5]))))));
                    arr_26 [(short)16] [i_5] = ((/* implicit */signed char) ((((arr_22 [i_6 - 2] [i_6 + 1] [i_5]) & (2162888916U))) == (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_22 [i_6 + 1] [i_6 - 3] [i_5]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */long long int) 3522621951U)) <= (9223372036854775807LL))))));
}
