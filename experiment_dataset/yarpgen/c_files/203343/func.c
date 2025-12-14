/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203343
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
    var_14 -= ((/* implicit */unsigned short) (+(var_6)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((unsigned int) var_13));
                                var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) max((var_17), (max((min((((1129765452731948373LL) - (1129765452731948362LL))), (((/* implicit */long long int) ((unsigned char) (_Bool)0))))), (((((/* implicit */_Bool) 1129765452731948373LL)) ? (3983241077266624552LL) : (1129765452731948383LL)))))));
                    var_18 = ((/* implicit */short) ((unsigned int) min((var_5), ((_Bool)1))));
                }
            } 
        } 
    } 
}
