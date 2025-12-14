/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235249
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
    for (long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        var_12 = ((signed char) var_2);
                        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) min((min((arr_6 [i_1 + 2] [i_1 - 1]), (arr_0 [i_1 + 3] [i_0 - 2]))), (((/* implicit */long long int) arr_1 [i_0 - 1])))))));
                    }
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) var_9));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            {
                var_14 = ((/* implicit */short) (signed char)117);
                arr_17 [i_5] [i_4] = max(((-(arr_3 [i_4]))), (arr_3 [i_5]));
                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)124))));
                arr_18 [i_4] [i_4] [i_4] = ((/* implicit */long long int) min((((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-124)), ((unsigned short)52623)))) ^ (((/* implicit */int) arr_12 [i_4])))), (((/* implicit */int) (signed char)-126))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        for (long long int i_7 = 3; i_7 < 17; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 4) 
                        {
                            arr_31 [i_6] [i_6] [i_6] [(unsigned short)8] [i_6] = ((/* implicit */short) (-(((/* implicit */int) var_0))));
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_25 [i_10] [i_9] [i_6])), (var_4)))) ? (((((/* implicit */_Bool) var_11)) ? (var_8) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((arr_26 [i_6]), (((/* implicit */long long int) arr_30 [i_6] [i_7] [i_8] [i_9] [i_10]))))))))))));
                        }
                        var_17 += ((/* implicit */unsigned short) ((arr_19 [i_6]) + (min((((/* implicit */long long int) var_9)), (arr_19 [i_9])))));
                        arr_32 [i_8] [i_8] [i_6] [i_6] = ((/* implicit */long long int) (((~((~(((/* implicit */int) arr_27 [(short)2] [i_8])))))) << (((((((var_7) + (9223372036854775807LL))) >> (((((long long int) var_0)) - (7032LL))))) - (46683268457797852LL)))));
                    }
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_12 = 0; i_12 < 18; i_12 += 4) 
                        {
                            var_18 = ((/* implicit */short) ((arr_29 [(unsigned short)17] [i_7 - 2] [i_8]) < (((((/* implicit */_Bool) (signed char)117)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_6] [i_7] [i_8] [i_11] [i_6])))))));
                            var_19 = ((/* implicit */short) var_8);
                            var_20 = ((/* implicit */long long int) ((unsigned short) arr_22 [i_7 - 2]));
                        }
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)105))) + (arr_38 [i_6] [i_6] [i_7] [i_8] [i_8] [i_8] [(short)3]))), (arr_19 [i_11])))) ? (((/* implicit */long long int) ((/* implicit */int) (((-(arr_38 [i_6] [i_7] [10LL] [i_7] [i_7] [i_8] [i_11]))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_24 [3LL] [i_8] [i_6] [i_6])) : (((/* implicit */int) arr_33 [i_11] [i_8] [i_6] [i_6] [i_6]))))))))) : (min((var_4), (((long long int) var_1))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        for (short i_14 = 0; i_14 < 18; i_14 += 4) 
                        {
                            {
                                arr_44 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) var_0);
                                arr_45 [4LL] [(signed char)16] [(signed char)16] [i_13] = min((max((((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_25 [i_6] [i_7] [i_13]))))))), (max((((/* implicit */long long int) (+(((/* implicit */int) (signed char)52))))), (((((/* implicit */_Bool) arr_22 [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_6))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
