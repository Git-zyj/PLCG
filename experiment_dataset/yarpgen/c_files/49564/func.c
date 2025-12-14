/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49564
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
    var_15 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        arr_2 [(signed char)19] = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
        var_16 = ((/* implicit */_Bool) max((var_16), ((!(((/* implicit */_Bool) ((long long int) arr_0 [i_0])))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            arr_7 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((((/* implicit */_Bool) (unsigned char)16)) ? (18ULL) : (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) (+(var_6))))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    {
                        var_17 = ((((/* implicit */_Bool) var_12)) ? (arr_9 [i_2] [i_2 - 1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 1]))));
                        var_18 = ((/* implicit */short) arr_8 [i_2] [i_2 - 1]);
                        var_19 = ((/* implicit */int) ((arr_9 [i_1] [i_1] [8ULL]) < (((/* implicit */unsigned long long int) arr_6 [i_2]))));
                        arr_13 [i_2] [3U] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2])) ? (arr_5 [i_2 - 2] [i_2]) : (arr_5 [i_2 - 1] [i_2])));
                        arr_14 [i_1] [i_2] [i_2 + 1] [7ULL] [i_2] = arr_8 [i_2] [(signed char)8];
                    }
                } 
            } 
        }
        for (unsigned char i_5 = 1; i_5 < 8; i_5 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) arr_11 [i_1]);
            var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned char) arr_0 [(unsigned char)1])), (var_1)));
            arr_18 [i_5] [i_5 + 2] = ((/* implicit */_Bool) (short)3550);
        }
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            arr_21 [2] [i_6] [i_1] = ((/* implicit */unsigned int) ((18446744073709551615ULL) >> (((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_1] [9U]))));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((int) arr_19 [i_6] [i_6])))));
        }
        var_23 = ((/* implicit */signed char) var_7);
        arr_22 [2U] &= ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
        var_24 = ((/* implicit */int) (short)32207);
    }
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_0))));
}
