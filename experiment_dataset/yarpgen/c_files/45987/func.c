/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45987
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
    var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_4))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((+(var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7))))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((4774018242341056388ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-32751))) ^ (var_12))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32751))) : (var_1)))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) -5152835349817513612LL))));
            }
        } 
    } 
}
