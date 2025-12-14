/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19936
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
    var_17 = min((var_6), (var_6));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        var_18 -= (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */int) arr_7 [i_2])))))));
                        var_19 ^= ((unsigned long long int) min((arr_2 [i_2 - 2]), (arr_2 [i_2 + 2])));
                    }
                    for (int i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_4 [i_2 + 3] [i_0 - 1])) ? (((/* implicit */int) var_10)) : (arr_4 [i_2 + 3] [i_0 + 1])))));
                        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [(short)11])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [i_2 - 1] [i_1]))))) : (max((((/* implicit */unsigned long long int) arr_7 [i_4])), (arr_5 [i_0] [i_1] [i_2])))))) ? (max((((/* implicit */unsigned long long int) ((unsigned short) arr_12 [i_4] [i_0] [i_0] [i_0]))), (((var_16) * (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_4 [i_0 + 1] [i_0])) / (((((/* implicit */_Bool) (unsigned char)130)) ? (arr_3 [i_1] [i_0] [i_1]) : (4569824167400839298LL)))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_11 [i_5] [i_0 - 2] [i_2] [i_2])))) ? (min((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1] [i_5])) ? (var_0) : (arr_14 [i_1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))))) : (min((((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)201))), (min((arr_14 [i_2]), (arr_12 [(short)4] [i_1] [i_1] [(short)4])))))));
                        arr_15 [i_0] [i_1] [i_2] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 3])) ? (arr_1 [i_2]) : (((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_11 [i_0] [i_1] [13ULL] [i_5])))))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_2 + 2] [i_2] [i_5]))) ? (((/* implicit */unsigned long long int) arr_13 [i_2] [i_1] [i_0])) : (arr_14 [i_0])))));
                    }
                    var_23 = ((/* implicit */int) min((max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))) > (arr_11 [i_0] [i_1] [i_2 + 2] [i_0])))), (((long long int) arr_12 [i_2 + 2] [i_1] [i_0] [i_2])))), (((/* implicit */long long int) min((arr_10 [i_2 - 1] [i_2] [i_0] [i_0] [i_1] [10U]), (arr_10 [i_2 + 4] [i_2] [i_0] [i_0] [i_2 + 2] [i_1]))))));
                    var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 2])) ? (var_6) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])), (arr_12 [i_1] [i_1] [i_0] [i_1])))))));
                }
            } 
        } 
    } 
    var_25 |= ((/* implicit */short) min((var_6), (((/* implicit */unsigned long long int) ((int) var_13)))));
}
