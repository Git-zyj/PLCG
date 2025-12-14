/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195645
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_0] = ((/* implicit */unsigned int) (~(min((((var_4) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) arr_2 [i_1 + 2]))))));
                    var_14 = ((/* implicit */short) ((max((-2016018667), (2016018659))) != (((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_1 + 1]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) >= (((/* implicit */int) ((unsigned char) -3174827074752465572LL)))));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned long long int) 2016018655)), (2791044596234497853ULL))) : (((var_8) - (7233570802461821442ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (var_11)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_17 &= ((/* implicit */unsigned long long int) var_5);
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((2016018662) > (((/* implicit */int) arr_3 [(short)10] [i_3] [i_3]))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [16LL])))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_3])) / (((((/* implicit */_Bool) arr_7 [i_3] [i_3] [14U])) ? (((/* implicit */int) arr_4 [2ULL])) : (((/* implicit */int) arr_3 [(unsigned char)10] [i_3] [i_3])))))))));
    }
    var_20 = ((/* implicit */unsigned short) var_9);
}
