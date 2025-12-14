/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24916
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */long long int) (_Bool)0);
                                var_11 = ((/* implicit */unsigned int) var_4);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned short i_6 = 2; i_6 < 12; i_6 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */short) var_8);
                            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (max(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)0)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(min((((/* implicit */int) var_6)), (var_4)))))), ((-((~(18446744073709551612ULL))))))))));
}
