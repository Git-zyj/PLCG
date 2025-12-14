/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46944
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [(unsigned short)14] &= var_0;
        var_12 = arr_1 [i_0];
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_3) : (arr_2 [i_0] [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (2123250986778909316LL) : (8657600199638989203LL))))));
        var_15 = ((/* implicit */long long int) arr_0 [i_1]);
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_11))));
        var_17 ^= ((((/* implicit */_Bool) var_10)) ? (min((min((((/* implicit */long long int) var_11)), (arr_1 [23LL]))), (((arr_1 [i_2]) / (arr_1 [i_2]))))) : (var_6));
        var_18 = ((/* implicit */long long int) max((var_18), ((-(var_5)))));
        var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) var_10)) ? (var_10) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_2 [i_2] [i_2]) : (max((8883141307140591044LL), (4220284282450451959LL)))))))));
    }
    for (long long int i_3 = 3; i_3 < 15; i_3 += 4) 
    {
        var_20 = var_8;
        arr_12 [i_3] = ((/* implicit */unsigned short) min(((+(arr_10 [i_3 - 2]))), (((((/* implicit */_Bool) arr_10 [i_3 - 1])) ? (arr_10 [i_3 + 1]) : (var_10)))));
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_3]))));
    }
    /* LoopSeq 2 */
    for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        arr_15 [i_4] [i_4] = min((((/* implicit */long long int) ((arr_8 [i_4]) < (arr_8 [i_4])))), (var_10));
        /* LoopSeq 1 */
        for (long long int i_5 = 4; i_5 < 9; i_5 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) var_6);
            var_23 += ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
            arr_19 [i_4] [(unsigned short)9] = ((((/* implicit */_Bool) arr_17 [i_5])) ? ((-(((((/* implicit */_Bool) var_11)) ? (var_10) : (arr_11 [i_4] [i_4]))))) : (((((/* implicit */_Bool) arr_4 [i_5 - 2] [i_5])) ? ((-(0LL))) : (((((/* implicit */_Bool) arr_10 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_2 [(unsigned short)16] [i_5 - 3]))))));
            arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5 - 2] [i_5 - 2])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_5 - 3])) ? (((/* implicit */int) arr_14 [i_5 + 1])) : (((/* implicit */int) arr_14 [i_5 - 4]))))) : (min(((+(var_8))), (arr_16 [i_4])))));
        }
    }
    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        arr_23 [i_6] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) min((arr_0 [i_6]), (arr_7 [i_6]))))))));
        var_24 = ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((long long int) var_10))))) ? ((-((-(arr_9 [i_6]))))) : (var_6));
        var_25 = arr_2 [i_6] [i_6];
    }
    var_26 = var_5;
    var_27 = var_3;
}
