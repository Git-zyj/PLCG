/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220813
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
    var_10 = (((((!(((/* implicit */_Bool) var_4)))) ? (var_5) : (var_5))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
    var_11 = ((/* implicit */unsigned short) ((var_0) & (var_6)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) arr_0 [2U] [(unsigned short)1]))));
        var_13 = ((((/* implicit */_Bool) arr_0 [(unsigned short)20] [i_0])) && (((/* implicit */_Bool) max((arr_0 [2ULL] [i_0]), (arr_0 [i_0] [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) & (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (arr_0 [(unsigned short)3] [(unsigned short)3]) : (max((arr_1 [6]), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1)))))))));
    }
    /* LoopSeq 3 */
    for (int i_1 = 3; i_1 < 9; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = max(((!(((/* implicit */_Bool) 3777669079U)))), ((!(((/* implicit */_Bool) var_0)))));
        var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (var_0) : (arr_1 [i_1 + 1])))) ? (((/* implicit */int) arr_6 [i_1] [i_1 - 2])) : ((~(((/* implicit */int) arr_2 [i_1] [i_1])))))) + (((/* implicit */int) ((var_0) != (((((/* implicit */_Bool) arr_6 [6U] [2U])) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
    }
    for (int i_2 = 3; i_2 < 9; i_2 += 1) /* same iter space */
    {
        arr_10 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)1))));
        var_15 = ((/* implicit */short) arr_8 [i_2]);
        var_16 = (((-(((((/* implicit */int) var_2)) - (((/* implicit */int) arr_6 [8ULL] [8ULL])))))) * (((/* implicit */int) var_3)));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 3) 
    {
        var_17 ^= (~(((/* implicit */int) arr_11 [(unsigned short)8])));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_3 - 3])) ? (arr_0 [i_3 + 2] [i_3 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_3 + 1])))));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 4; i_4 < 17; i_4 += 1) 
        {
            arr_15 [4ULL] [i_3] = ((/* implicit */unsigned long long int) arr_0 [i_4 + 1] [i_3 - 2]);
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) 3777669076U)) ? (1099580934U) : (517298216U))))));
        }
        arr_16 [i_3] [i_3] = ((arr_12 [i_3 + 2] [i_3 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3 + 2] [i_3 - 2]))) : (var_6));
    }
}
