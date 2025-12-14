/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242649
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [10ULL] [(signed char)3]))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max(((signed char)7), ((signed char)105))))))) < (arr_2 [(unsigned char)1] [(unsigned char)1])));
                var_20 &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)86)))) ? (((((/* implicit */_Bool) 0U)) ? (((8796093018112ULL) | (2198754820096ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) var_17)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((0U) <= (24U)));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                arr_13 [(unsigned char)11] [(short)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_3])) ? (arr_2 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3])))))) ? (((((/* implicit */int) arr_12 [i_2])) * (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_12 [(_Bool)1]))));
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) 4294967294U))));
            }
        } 
    } 
}
