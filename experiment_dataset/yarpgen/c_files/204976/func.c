/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204976
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-20177)))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_11 [1] [i_1] = ((/* implicit */short) (+((~(((/* implicit */int) max((((/* implicit */short) (signed char)22)), ((short)6791))))))));
                        arr_12 [i_0] [i_1] [i_2] [(unsigned char)7] [i_0] [7U] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_13))))), (18014398507384832ULL)));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            var_16 = ((/* implicit */int) 335120924023174335ULL);
                            var_17 += ((/* implicit */unsigned short) (((+(arr_7 [i_2] [i_4 + 1] [i_4 - 1] [i_4 + 1]))) + (((unsigned int) 1857871244))));
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_8 [(short)11] [i_4 + 1] [i_2]))));
                            var_19 = ((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [11U] [10LL]);
                        }
                        for (signed char i_5 = 1; i_5 < 14; i_5 += 1) 
                        {
                            var_20 ^= ((/* implicit */_Bool) (-(((arr_15 [i_5 + 1]) / (arr_15 [i_5 + 1])))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_17 [i_5 + 1] [i_5 - 1] [(short)12] [13U] [3U] [i_5 - 1] [3U])), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)7))))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) - (arr_3 [i_3]))), (((/* implicit */long long int) arr_7 [i_0] [9] [i_2] [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [2] [i_1] [i_2] [(unsigned short)14] [i_5 + 1] [i_1] [i_5]))))))));
                        }
                        var_22 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) (unsigned char)255)), (0ULL))), (((/* implicit */unsigned long long int) (~(arr_4 [i_0] [i_0]))))));
                    }
                } 
            } 
            arr_19 [i_0] [i_1] [i_0] &= ((/* implicit */int) (!((!(((/* implicit */_Bool) 1479864434U))))));
        }
        arr_20 [i_0] = (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0])), (var_9)))));
    }
    /* vectorizable */
    for (short i_6 = 2; i_6 < 14; i_6 += 4) 
    {
        var_23 = ((/* implicit */long long int) arr_21 [(short)11] [i_6 - 1]);
        var_24 = (((!(((/* implicit */_Bool) arr_22 [i_6 + 1] [i_6 + 1])))) ? (arr_22 [i_6 - 1] [4LL]) : (31U));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6] [i_6 + 1]))) + (arr_22 [(short)10] [i_6 - 1]))))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        var_26 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)248)) || (((/* implicit */_Bool) var_6))));
        var_27 += ((/* implicit */long long int) ((unsigned long long int) arr_25 [i_7]));
        var_28 = ((/* implicit */short) 131071U);
        var_29 = ((/* implicit */int) (+(((arr_26 [i_7]) / (((/* implicit */long long int) 2787930154U))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
    {
        arr_29 [i_8] [i_8] = ((/* implicit */unsigned short) max((3604116030U), (((/* implicit */unsigned int) (signed char)-50))));
        var_30 ^= ((/* implicit */unsigned int) arr_27 [i_8]);
        var_31 = ((/* implicit */short) (unsigned char)209);
        arr_30 [i_8] = ((/* implicit */short) (signed char)62);
        arr_31 [i_8] = ((/* implicit */short) arr_28 [i_8] [i_8]);
    }
}
