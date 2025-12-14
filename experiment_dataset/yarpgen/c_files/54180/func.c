/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54180
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
    var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) (((~(18446744073709551615ULL))) <= (18446744073709551615ULL)))), (min((((/* implicit */long long int) min(((short)-6121), (((/* implicit */short) var_17))))), (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [6] [i_2] &= ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) (-(((/* implicit */int) var_17))))), (((arr_3 [5ULL]) >> (((((/* implicit */int) (signed char)92)) - (92)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 7; i_4 += 3) 
                        {
                            {
                                arr_16 [4] [i_1] = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [(signed char)0] [(signed char)0]);
                                arr_17 [0U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [4]) >> (((((/* implicit */int) var_5)) - (79)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) (short)30810)) - (30794)))))) : (arr_0 [(short)0])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
