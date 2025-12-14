/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236727
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
    var_11 *= ((/* implicit */long long int) var_10);
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (4572351929870150149LL))))));
    var_13 = ((/* implicit */unsigned int) min((var_9), (((/* implicit */long long int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) max((min((arr_2 [(signed char)21]), (((4572351929870150146LL) - (((/* implicit */long long int) -2023654519)))))), (((/* implicit */long long int) ((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
        arr_4 [(signed char)20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1514976694U)) ? (1653863065401865446LL) : (((/* implicit */long long int) (~(1700034208U))))));
        var_14 = ((/* implicit */_Bool) min(((-(var_0))), (min((2594933069U), (((/* implicit */unsigned int) (signed char)98))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 |= ((/* implicit */long long int) (~(-1502366725)));
            var_16 = ((/* implicit */short) var_6);
        }
        arr_10 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_9 [i_1]))));
    }
    var_17 = (!(((/* implicit */_Bool) var_6)));
}
