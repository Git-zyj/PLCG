/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237013
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
    var_11 &= ((/* implicit */int) ((((/* implicit */_Bool) min(((+(0ULL))), (((/* implicit */unsigned long long int) var_0))))) ? ((~(min((((/* implicit */unsigned long long int) var_10)), (0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) (+(arr_4 [i_0] [i_0] [(short)2])));
                    arr_7 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) -2082991823);
                    var_13 = ((/* implicit */unsigned int) (!(((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) 2147483647)) : (arr_1 [5ULL]))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_14 = (~((-(((((/* implicit */int) arr_6 [i_0] [i_1] [(signed char)14])) << (((arr_5 [i_1]) - (7282536395228508110ULL))))))));
                        arr_11 [i_2] [2ULL] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_2]);
                        var_15 ^= ((/* implicit */int) min((((arr_6 [(short)14] [i_3] [i_2]) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))) : (var_7))))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */unsigned int) ((signed char) var_2))), (arr_4 [i_0] [i_2] [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [1ULL] [i_1] [i_1] [(unsigned char)12] [i_2] [i_3])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [13U])) : (((/* implicit */int) ((signed char) 4125530988U))))))));
                    }
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) -2147483647))));
                        var_18 = ((/* implicit */unsigned int) ((signed char) ((var_8) != (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_2] [(unsigned short)17])) % (((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_5] [i_1] [i_5])) ? (((/* implicit */int) arr_9 [i_0] [2ULL] [i_1] [i_1] [i_1] [8U])) : (((/* implicit */int) arr_9 [i_5] [i_5] [i_2] [i_1] [i_5] [(signed char)4])))))));
                        arr_17 [i_2] [6ULL] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */unsigned int) ((unsigned char) arr_6 [i_0] [i_2] [i_2]));
                        arr_18 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_5])) ? (arr_4 [i_0] [i_1] [i_2]) : (arr_4 [i_0] [i_1] [i_5])));
                    }
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) var_2);
    }
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        arr_21 [(_Bool)1] = ((((/* implicit */_Bool) min((arr_20 [i_6] [i_6]), (arr_20 [i_6] [i_6])))) ? ((~(1203041909))) : (((arr_19 [i_6]) ^ (arr_20 [i_6] [i_6]))));
        var_21 |= ((/* implicit */signed char) arr_20 [i_6] [i_6]);
    }
}
