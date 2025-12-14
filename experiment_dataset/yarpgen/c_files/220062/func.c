/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220062
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
    var_14 = var_1;
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_10))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 7; i_2 += 1) 
            {
                {
                    var_16 += ((/* implicit */signed char) max((((/* implicit */long long int) (signed char)-19)), (-9223372036854775794LL)));
                    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) max(((signed char)114), ((signed char)-60))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) (+(var_7)));
                    var_19 *= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_4] [i_3] [i_4]))))))) || (((/* implicit */_Bool) min((8039797215512923240LL), (var_13))))));
                    var_20 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((1002422165U) - (var_9)))), ((-(arr_7 [i_0] [6U])))));
                    arr_15 [i_0] [i_0] = var_0;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        arr_20 [i_0] [i_4] [3LL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? ((-(418745735U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (var_9)))))));
                        arr_21 [i_0] [i_3] [i_4] [i_5] [i_0] [i_0] = (~(arr_14 [i_5] [i_0]));
                        arr_22 [i_3] [i_0] = ((/* implicit */long long int) (!(((4229089465U) > (var_7)))));
                        var_21 = ((/* implicit */long long int) (+(((unsigned int) arr_19 [i_5] [i_0] [i_0] [i_3] [i_0] [i_0]))));
                    }
                }
            } 
        } 
        arr_23 [i_0] [i_0] = (i_0 % 2 == 0) ? (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_18 [i_0] [i_0]))) >> (((((arr_18 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) - (3004283266U))))) : (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_18 [i_0] [i_0]))) >> (((((((arr_18 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) - (3004283266U))) - (1185635773U)))));
    }
    for (long long int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
    {
        arr_28 [i_6] [i_6] = ((/* implicit */long long int) max(((~(3876221560U))), (var_1)));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_12)))) << (((((((/* implicit */_Bool) 8039797215512923239LL)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (signed char)125)))) + (82)))))) ? (((((/* implicit */_Bool) ((signed char) var_12))) ? (max((((/* implicit */long long int) var_11)), (var_13))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)123))))) : (((arr_4 [i_6] [i_6] [i_6]) ^ (arr_4 [i_6] [i_6] [i_6]))))))));
    }
}
