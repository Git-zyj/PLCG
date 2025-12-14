/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228357
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
    var_13 = ((int) var_5);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_1 [(unsigned short)16])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */long long int) (short)19542);
            arr_6 [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [14] [i_0]);
        }
        var_15 = ((/* implicit */long long int) var_2);
    }
    for (short i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (arr_7 [i_2]) : (arr_7 [i_2])));
        /* LoopSeq 3 */
        for (unsigned short i_3 = 4; i_3 < 16; i_3 += 3) 
        {
            var_16 = ((((/* implicit */_Bool) ((unsigned char) 1722742355))) ? ((+(arr_8 [i_3 - 1]))) : (max((arr_8 [i_3 - 1]), (arr_8 [i_3 + 1]))));
            arr_15 [i_2] [i_2 - 1] [i_2] = var_11;
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (max((var_11), (((/* implicit */long long int) arr_13 [i_3])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)11534)) ? (((/* implicit */int) arr_0 [i_2])) : (var_8))))))) ? (((/* implicit */unsigned long long int) var_11)) : (max((((/* implicit */unsigned long long int) (short)-13114)), (var_1)))));
            var_18 = var_8;
        }
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2] [i_2])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))));
            var_20 = ((/* implicit */unsigned long long int) 1109437406);
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (arr_2 [i_2] [i_2] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) && (((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2994876526U))))))))));
        }
        for (int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            var_22 = ((/* implicit */long long int) arr_0 [i_2]);
            var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_2 + 1] [i_5])) & (((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) var_4))))))) >= (var_11)));
            arr_20 [i_2] [i_2] [i_5] = ((/* implicit */long long int) arr_19 [i_2 + 1] [i_2 + 1]);
        }
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) : (var_8)))) : (arr_14 [i_2])));
        var_25 = ((/* implicit */unsigned short) (_Bool)0);
        var_26 = (unsigned char)163;
    }
    for (unsigned char i_6 = 3; i_6 < 19; i_6 += 3) 
    {
        var_27 = ((/* implicit */short) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) max((var_8), (((/* implicit */int) var_10))))) : (-8742981192449296842LL))), (((/* implicit */long long int) var_9))));
        arr_24 [i_6] = ((/* implicit */short) arr_3 [i_6] [i_6 - 1] [i_6]);
    }
}
