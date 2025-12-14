/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29561
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
    var_13 = ((/* implicit */long long int) var_11);
    var_14 *= ((/* implicit */_Bool) var_10);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) var_1)) ? (((arr_2 [i_0 + 2]) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (var_0))) : (((((/* implicit */_Bool) max((2147483647), (((/* implicit */int) var_10))))) ? (var_3) : (((/* implicit */int) max(((unsigned short)25374), (((/* implicit */unsigned short) var_7))))))));
        var_15 = ((/* implicit */unsigned char) arr_2 [i_0]);
        var_16 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (2147483638) : (((/* implicit */int) var_10))))))))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            var_17 *= ((/* implicit */signed char) (+((-(arr_1 [i_0 + 2])))));
            arr_6 [i_0] [i_1] &= ((/* implicit */unsigned short) var_11);
            var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)-27661)), (0ULL)));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 5559345941806148989LL)))))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            arr_10 [9ULL] [(unsigned short)2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 1])) ? (arr_8 [i_0 + 2]) : (arr_8 [i_0 + 2])));
            var_20 = ((/* implicit */signed char) (+(var_2)));
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_4 [0] [i_2] [i_2]))))));
            arr_12 [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_12) : (var_12)));
        }
    }
    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 1) 
    {
        var_21 += ((/* implicit */unsigned long long int) var_0);
        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [(unsigned char)11])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_3 + 1])) ? (var_2) : (((/* implicit */int) (signed char)98))))) : (((((/* implicit */_Bool) arr_13 [i_3 - 1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (arr_13 [(_Bool)1])))))))));
        var_23 = ((/* implicit */int) max((max(((+(var_11))), (((/* implicit */unsigned int) (~(-967831847)))))), (((/* implicit */unsigned int) arr_13 [(_Bool)1]))));
    }
    for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 1) 
    {
        var_24 |= ((/* implicit */unsigned long long int) var_11);
        var_25 = ((/* implicit */unsigned short) var_12);
        arr_19 [i_4] = ((/* implicit */unsigned char) min(((~(var_3))), (2147483647)));
    }
    for (int i_5 = 2; i_5 < 20; i_5 += 2) 
    {
        arr_22 [(short)23] |= ((/* implicit */unsigned short) var_4);
        arr_23 [20LL] = ((/* implicit */signed char) var_6);
    }
    var_26 = ((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) max((max((var_8), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) (+(var_0)))))))));
}
