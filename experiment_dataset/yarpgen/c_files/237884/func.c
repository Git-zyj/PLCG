/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237884
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
    var_18 = ((/* implicit */signed char) -65536);
    var_19 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)0)))) | (((/* implicit */int) var_10)))));
    var_20 |= ((/* implicit */long long int) var_10);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((-65541) / (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)130)))) : (((((/* implicit */_Bool) (+(arr_2 [i_2])))) ? (((/* implicit */unsigned long long int) 65536)) : (max((0ULL), (((/* implicit */unsigned long long int) var_2))))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (+(min((((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) (short)-17691)))), (((/* implicit */int) arr_4 [i_2] [i_1] [i_2]))))));
                    var_22 = ((/* implicit */unsigned char) 9223372036854775807LL);
                }
            } 
        } 
    } 
    var_23 = (+(((((/* implicit */_Bool) 3310477018U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((65536) >= (((/* implicit */int) (short)9571))))))));
}
