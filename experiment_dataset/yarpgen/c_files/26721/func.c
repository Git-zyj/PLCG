/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26721
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (~(((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */short) min((arr_1 [i_0]), (arr_1 [i_0]))))))))))));
        var_15 ^= ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(short)8])))))) : (arr_2 [i_0] [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_4 [i_1]);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (signed char i_3 = 3; i_3 < 15; i_3 += 4) 
            {
                {
                    var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_9 [i_3 + 1])) : (arr_5 [i_1] [i_2])))));
                    var_17 = (-(min((arr_11 [i_3 + 1] [i_3 - 3]), (((/* implicit */unsigned long long int) arr_6 [i_3 - 2])))));
                    var_18 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 3])) ? (arr_8 [i_3 - 3] [i_3 + 1] [i_3 - 2]) : (arr_8 [i_3 + 1] [i_3 + 1] [i_3 - 1])))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (min(((-(((((/* implicit */_Bool) arr_4 [2ULL])) ? (((/* implicit */unsigned long long int) arr_12 [i_1])) : (arr_5 [i_1] [i_1]))))), ((-(arr_8 [7LL] [i_1] [i_1])))))));
    }
    for (short i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        arr_16 [i_4] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) arr_15 [i_4]))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_14 [i_4]), (arr_15 [i_4])))) ? (min(((~(((/* implicit */int) (signed char)105)))), (((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) arr_14 [i_4])))))) : ((~(((/* implicit */int) arr_15 [i_4]))))));
    }
    var_21 |= ((/* implicit */unsigned long long int) min((min((max((1794897287U), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-27046))))))), (((/* implicit */unsigned int) var_3))));
}
