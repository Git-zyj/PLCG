/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249834
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
    var_15 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (((unsigned int) (~(((/* implicit */int) var_3)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_1 [16LL]))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) | (arr_1 [i_0]))))));
        var_18 |= ((((/* implicit */_Bool) arr_1 [10ULL])) ? (((((/* implicit */int) var_2)) & (arr_1 [(unsigned short)0]))) : ((~(((/* implicit */int) var_6)))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */long long int) max(((+(var_4))), (((/* implicit */int) arr_4 [i_1] [(unsigned char)7]))));
        var_19 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((int) var_9))) + (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_0 [i_1]) : (arr_0 [i_1]))))), (((/* implicit */long long int) arr_4 [i_1] [i_1]))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) arr_2 [i_1]);
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
    {
        var_20 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_2 [i_2]) : (((/* implicit */int) arr_4 [(unsigned short)8] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_3 [i_2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [16ULL])) && (arr_9 [i_2] [i_2])))))) ^ (((int) (!(((/* implicit */_Bool) var_1))))));
        var_21 = ((/* implicit */int) ((unsigned int) (~(((((/* implicit */_Bool) arr_1 [(unsigned char)14])) ? (arr_1 [(unsigned char)10]) : (arr_1 [(unsigned short)6]))))));
    }
}
