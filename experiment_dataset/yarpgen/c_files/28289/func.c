/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28289
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
    var_15 &= ((/* implicit */signed char) ((unsigned short) var_14));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) var_10);
                            var_17 = ((/* implicit */_Bool) (~((+(var_5)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        {
                            arr_16 [i_0] [i_1] [i_4 - 1] [i_5] &= ((/* implicit */short) ((_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_4)))));
                            var_18 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_4 + 1] [i_4] [i_4 + 1])) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_4 - 1] [i_4] [i_4 - 1])) : (((/* implicit */int) var_10))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) var_4)) ? (-517778429500261744LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_1 + 1])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (unsigned char)103))))))))))));
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) var_7)))));
            }
        } 
    } 
}
