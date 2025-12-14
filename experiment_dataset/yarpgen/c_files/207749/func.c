/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207749
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((7769807817700530267ULL), (((/* implicit */unsigned long long int) (unsigned char)99)))))));
    var_21 = ((/* implicit */_Bool) ((signed char) (((!((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned int) (short)24576)), (var_0))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)241))));
                            var_23 &= ((/* implicit */unsigned short) (-((+((-(18446744073709551615ULL)))))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56914))) >= (min((((/* implicit */long long int) arr_5 [i_0 + 2])), (-553311588164787620LL)))))))))));
                            var_25 = ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0 - 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 - 1])) ^ (((/* implicit */int) (short)(-32767 - 1)))))))), ((!(((/* implicit */_Bool) (short)-2940))))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_6))));
            }
        } 
    } 
}
