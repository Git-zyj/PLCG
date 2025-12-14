/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209392
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) 595881813442612562ULL);
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) (short)8731);
                                var_13 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((4U), (4294967289U)))))) ? (4294967291U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 305559248U)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)27372)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27372))) : (((((/* implicit */_Bool) (unsigned short)3647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_8))))) | (var_0))))));
    var_15 = ((/* implicit */unsigned int) var_2);
}
