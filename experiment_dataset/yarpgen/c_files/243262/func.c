/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243262
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) ((int) var_14)));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) arr_0 [i_0])))));
        var_16 += ((/* implicit */unsigned int) ((unsigned long long int) (!((_Bool)0))));
        arr_4 [i_0] = ((/* implicit */int) ((unsigned short) ((unsigned char) var_4)));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) ((_Bool) (unsigned short)54654))))));
                var_18 = ((/* implicit */unsigned short) ((int) (+((-(var_8))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) ((int) var_3))))));
}
