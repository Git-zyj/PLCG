/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209135
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
    var_11 ^= ((/* implicit */unsigned char) var_1);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) min(((~(((var_6) >> (((arr_0 [(unsigned short)13]) - (2744800039U))))))), (min((min((2460055396U), (((/* implicit */unsigned int) arr_1 [i_0])))), ((~(var_3)))))));
        var_13 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (arr_1 [i_0])))) ? (((/* implicit */unsigned int) arr_1 [i_0 - 1])) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned char)17]))) : (2649796691U)))))) ? (((2460055399U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1]))))) : ((~(((1731332270U) ^ (arr_0 [i_0 - 2])))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 3) 
    {
        var_15 = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) var_9)) + (126)))))) != (((((/* implicit */_Bool) arr_4 [(signed char)2])) ? (13307918534217578954ULL) : (((/* implicit */unsigned long long int) var_3))))))));
        var_16 = ((min((((/* implicit */unsigned long long int) (~(arr_0 [i_1 + 1])))), (arr_4 [i_1 - 1]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)21234)), (1)))) && (((2460055420U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_17 = ((/* implicit */long long int) arr_2 [i_2]);
        var_18 = ((/* implicit */signed char) var_0);
    }
    for (short i_3 = 3; i_3 < 17; i_3 += 1) 
    {
        var_19 -= ((/* implicit */unsigned short) arr_11 [i_3]);
        var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned long long int) arr_1 [i_3])) : (10703401559303139657ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_3])) > (arr_0 [i_3]))))) : (var_2)))));
        arr_12 [i_3] [i_3 - 3] = ((/* implicit */unsigned long long int) (unsigned short)39180);
    }
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) min(((~(var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (unsigned short)0)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) : (var_10))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_15 [i_4]) > (arr_1 [i_4]))))) & (((((/* implicit */unsigned long long int) 0U)) % (arr_13 [i_4])))));
        var_22 = ((/* implicit */signed char) (unsigned short)55740);
        arr_17 [i_4] [i_4] = var_6;
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_4]))) > (((((/* implicit */_Bool) arr_15 [i_4])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
    }
}
