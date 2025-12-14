/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221494
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)27249))))))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) (unsigned short)45124)) >> (((((/* implicit */int) (unsigned short)45129)) - (45110))))) : (((/* implicit */int) (unsigned short)45124)))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) -1726634323739027167LL))))), (arr_6 [i_3 + 1] [i_3 - 1]))))));
                                var_21 = (~(((int) min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1])), (arr_4 [i_0] [i_4])))));
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */unsigned long long int) (((!((_Bool)1))) ? ((~(max((262136), (((/* implicit */int) (unsigned short)27270)))))) : (((/* implicit */int) (short)-32596))));
                }
            } 
        } 
    } 
    var_23 |= ((/* implicit */unsigned short) var_8);
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (min((max((((/* implicit */unsigned long long int) var_11)), (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (608833181575967472LL)))))) : (var_6)));
}
