/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38674
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
    var_12 = ((/* implicit */unsigned int) min((max((min((((/* implicit */long long int) var_6)), (var_10))), (min((((/* implicit */long long int) 1656079454)), (var_11))))), (min((-3516937461914234233LL), (0LL)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            arr_14 [i_4] [i_3] [i_2] [i_1] [i_4] = ((/* implicit */int) (short)-26256);
                            var_13 = ((/* implicit */long long int) (short)26256);
                            var_14 = ((/* implicit */unsigned long long int) (short)-32760);
                        }
                        var_15 -= ((/* implicit */unsigned int) 16LL);
                    }
                    var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((var_6), (((/* implicit */unsigned char) var_2))))), (min((1857587449U), (4294967286U)))))), (max((max((35184372088831ULL), (((/* implicit */unsigned long long int) 6592005154071370261LL)))), (((/* implicit */unsigned long long int) max((var_1), ((short)12409))))))));
                }
            } 
        } 
    } 
}
