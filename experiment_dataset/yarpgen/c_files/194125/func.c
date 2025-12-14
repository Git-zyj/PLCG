/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194125
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
    var_11 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [(signed char)8] [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned short) arr_3 [i_1] [i_0]);
                var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3943812507U)) ? (163432624U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (unsigned int i_3 = 2; i_3 < 12; i_3 += 3) 
        {
            {
                var_13 &= ((/* implicit */signed char) (-(((arr_7 [i_2]) ^ (((/* implicit */unsigned long long int) ((unsigned int) (short)-1)))))));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) / (((/* implicit */int) arr_9 [i_2] [i_3 + 1] [i_3]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+(((/* implicit */int) (short)-1)))))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) var_3))), (var_0)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4412218881053568335LL)) ? (2747092365U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (var_4))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) / (3199739816U)))));
}
