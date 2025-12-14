/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42529
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
    var_15 = ((/* implicit */short) var_3);
    var_16 = var_4;
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 6; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_8 [(unsigned char)9] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)13093)) > (((/* implicit */int) (_Bool)0))));
                    var_17 |= ((/* implicit */unsigned char) min((((((((/* implicit */int) (signed char)-63)) + (2147483647))) << (((((((/* implicit */int) (signed char)-63)) + (64))) - (1))))), (((/* implicit */int) (signed char)-61))));
                    arr_9 [i_2 - 2] [i_1] [3] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (var_5)))) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_10)) - (56469)))))))), (((/* implicit */long long int) ((unsigned char) var_6)))));
                    arr_10 [i_0] [i_0 + 2] [i_0] [2] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_2] [i_1 - 2])) << ((((((-(min((arr_5 [6LL] [i_0] [i_0]), (((/* implicit */long long int) (signed char)63)))))) + (94LL))) - (27LL)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) min((var_8), (((/* implicit */short) var_0))))) : (((/* implicit */int) var_3)))));
        arr_14 [i_3] = min((((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (arr_12 [i_3] [i_3]) : (((/* implicit */unsigned long long int) arr_11 [i_3] [i_3])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_3]))))));
        var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((arr_11 [i_3] [i_3]) % (arr_11 [i_3] [i_3])))), (arr_12 [i_3] [i_3])));
    }
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        arr_18 [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned short) (_Bool)0))))), (arr_12 [i_4] [i_4])));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_15 [i_4] [i_4]))) ? (((738920017U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4])))));
        arr_19 [i_4] [i_4] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_16 [i_4])))))))));
        arr_20 [i_4] = ((/* implicit */signed char) var_13);
        /* LoopSeq 1 */
        for (int i_5 = 3; i_5 < 14; i_5 += 1) 
        {
            arr_23 [i_5] [i_4] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
            var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) 3556047279U)) ? (((/* implicit */int) arr_15 [i_5 + 1] [i_4])) : (((/* implicit */int) arr_21 [(signed char)3])))), (((((/* implicit */int) (unsigned short)43427)) >> (((/* implicit */int) (_Bool)0))))))), (min((((/* implicit */unsigned int) arr_21 [i_5 - 1])), (3426972725U)))));
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_12 [i_5] [i_4])))) - (arr_22 [i_4])))))));
            arr_24 [i_4] [i_5] [i_4] = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [(signed char)14]))) | (738920017U)))));
        }
    }
}
