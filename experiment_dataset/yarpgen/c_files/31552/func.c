/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31552
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
    for (signed char i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1 + 2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 9U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21780))) : (1314910353U)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0 + 3] [i_0] [(unsigned short)0] [i_0 + 3] [i_0] = ((/* implicit */unsigned long long int) max((-1295277835), (((/* implicit */int) (unsigned short)31206))));
                                var_15 = ((/* implicit */unsigned short) (~((-2147483647 - 1))));
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (~(988660886U))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((long long int) 1295277834)))));
    var_18 ^= ((/* implicit */unsigned short) 2769664345U);
    var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)31526)) ? (((/* implicit */int) (signed char)-64)) : (-641290291)));
}
