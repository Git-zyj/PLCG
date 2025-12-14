/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27793
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
    var_18 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_16))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            arr_5 [(short)12] [(signed char)9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((-2147483647 - 1)))))));
            var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(signed char)3] [(short)13]))) * ((-(arr_0 [6LL])))));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_4 [i_0] [(signed char)11]))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [2])))) : (2147483647)));
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        arr_9 [i_2] &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [9ULL])) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (var_7)))));
        var_22 ^= (!(((/* implicit */_Bool) ((signed char) (-2147483647 - 1)))));
        arr_10 [i_2] = ((/* implicit */int) arr_4 [13] [2U]);
        arr_11 [(short)3] [3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(arr_4 [(unsigned char)2] [i_2]))) + (((/* implicit */unsigned int) ((/* implicit */int) max((var_17), (((/* implicit */unsigned char) arr_2 [(short)14] [i_2]))))))))) ? (min((((/* implicit */int) arr_2 [1] [(short)6])), ((-(((/* implicit */int) arr_2 [i_2] [i_2])))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)1536)), (arr_3 [i_2] [(unsigned char)0]))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_23 = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [8ULL] [(signed char)13])) ? (arr_14 [i_3] [(short)12]) : (arr_14 [i_3] [i_3])))) ? (((/* implicit */long long int) ((unsigned int) var_5))) : (((var_14) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
        var_24 += ((/* implicit */unsigned int) var_4);
    }
    var_25 -= ((/* implicit */unsigned short) var_5);
    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((_Bool) 2147483647))))) - ((-(((/* implicit */int) var_1)))))))));
}
