/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26521
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((3616463780388854211ULL), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)11102), (((/* implicit */short) (signed char)24)))))) : (((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (2251799813685247ULL)))));
        var_19 = min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (short)-21920)))) <= (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) max((-6127491358656584315LL), (((/* implicit */long long int) (unsigned char)119))))) ? (((unsigned int) 15489921551687451646ULL)) : (max((2068426649U), (((/* implicit */unsigned int) 536870911)))))));
    }
    /* LoopSeq 2 */
    for (signed char i_1 = 3; i_1 < 15; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) ((536870911) < (636834777)));
        var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) min((((unsigned char) (-9223372036854775807LL - 1LL))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) var_9)))))))), (((((((/* implicit */unsigned int) arr_6 [i_1])) & (arr_5 [i_1]))) >> (((/* implicit */int) ((1285407138) <= (-54165080))))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        arr_12 [i_2] [i_2] = 615551392;
        arr_13 [i_2] = ((/* implicit */unsigned long long int) ((((-1202637014) + (2147483647))) << (((((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */int) var_2)))) - (211980212)))));
    }
}
