/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245358
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
    var_19 &= var_3;
    var_20 = ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (0ULL))))));
                    arr_7 [17] [i_1] [i_0] &= ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-28790), (((/* implicit */short) (signed char)-30)))))) | (max((((/* implicit */unsigned long long int) arr_5 [i_2] [(signed char)11] [i_1] [i_0])), (18446744073709551614ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15777487011609641313ULL)) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4515289617703353058ULL)) ? (arr_1 [i_2] [i_2]) : (arr_2 [i_0]))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_6);
                }
            } 
        } 
    } 
}
