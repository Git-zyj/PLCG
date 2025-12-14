/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227154
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
    var_15 = ((/* implicit */unsigned int) max((var_8), (((max((((/* implicit */unsigned long long int) 2574793215U)), (var_2))) | (((/* implicit */unsigned long long int) ((var_9) | (((/* implicit */unsigned int) var_0)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) ((810512077) == (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_17 = max((((/* implicit */unsigned long long int) (~(((-810512078) + (-507680487)))))), (min((((/* implicit */unsigned long long int) min((-4021432005174121394LL), (4021432005174121394LL)))), (((((/* implicit */unsigned long long int) 507680486)) & (var_2))))));
                        var_18 -= ((/* implicit */unsigned long long int) (~(((((810512077) & (((/* implicit */int) (unsigned char)163)))) >> (((var_12) + (1058770527)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 15; i_4 += 1) 
                        {
                            arr_13 [12ULL] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 33538048)) ? (507680487) : (((/* implicit */int) (short)-16295))));
                            arr_14 [i_0] = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) -4021432005174121394LL)) | (16898867308039747706ULL)))));
                        }
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 3082195600U)) ? (0U) : (((/* implicit */unsigned int) 1892053436)))))))));
}
