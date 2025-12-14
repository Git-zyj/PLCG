/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31429
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
    var_11 = ((/* implicit */signed char) ((unsigned int) var_6));
    var_12 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 2])));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6)))) | (arr_5 [i_0 - 1])));
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_6 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))))));
            var_15 = ((/* implicit */int) arr_6 [i_1] [i_1]);
            arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (arr_5 [i_0 + 3]) : (arr_5 [i_0 - 1])));
            arr_8 [i_1] [3LL] = ((/* implicit */short) ((arr_2 [i_0] [i_1]) != (arr_2 [i_1] [i_1])));
        }
        for (int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0 + 3])) && (((/* implicit */_Bool) arr_9 [i_0 + 4] [i_0 - 1])))))));
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (((~(17586955510683738686ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)28497)) >> (((arr_6 [i_0 + 2] [7U]) - (1029699113U)))))))))));
        }
        for (long long int i_3 = 3; i_3 < 13; i_3 += 4) 
        {
            arr_13 [i_0] [i_3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-1))))));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_0] [i_3]))));
        }
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            var_19 = ((/* implicit */short) (~((+(var_9)))));
            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_9 [i_0] [i_0 - 2])) + (2147483647))) << (((((-8140200874190942378LL) + (8140200874190942382LL))) - (4LL)))));
            /* LoopNest 2 */
            for (unsigned int i_5 = 2; i_5 < 14; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    {
                        arr_22 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_6] = ((((/* implicit */_Bool) arr_18 [i_5 - 1] [(_Bool)1] [i_5] [i_5])) ? (((/* implicit */int) arr_21 [i_5 + 2] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_4 [i_5 + 1] [i_5] [i_5])));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((arr_6 [i_0 - 1] [i_5 - 1]) << (((/* implicit */int) (_Bool)1)))))));
                        arr_23 [i_0] [i_4] = ((/* implicit */unsigned int) 0LL);
                        var_22 = ((/* implicit */short) arr_11 [i_6]);
                        arr_24 [i_0] [i_4] [i_0] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_5 + 1] [i_0 + 1]))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_4] [i_0])) ? (((/* implicit */int) (short)31593)) : (((/* implicit */int) var_0))))));
        }
    }
}
