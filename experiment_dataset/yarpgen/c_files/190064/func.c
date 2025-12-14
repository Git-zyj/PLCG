/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190064
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [12LL]))) | (var_14)))))) ^ (((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) arr_0 [(unsigned char)0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : ((~(var_5))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        arr_3 [i_0] [(unsigned short)12] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_1 [i_1]))));
        var_19 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) max((arr_1 [i_1]), (var_13)))) : (((/* implicit */int) (unsigned char)0)))));
        var_20 ^= ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_4 [i_1]))))), (min((var_6), (((/* implicit */long long int) var_9))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned short)341))))));
        var_22 = ((long long int) (((~(arr_7 [i_2]))) >> (((((/* implicit */int) arr_1 [i_2])) - (28948)))));
    }
    var_23 = ((/* implicit */long long int) max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) var_11))));
}
