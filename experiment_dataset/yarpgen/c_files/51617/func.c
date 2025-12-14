/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51617
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_4 [(_Bool)1] = ((/* implicit */unsigned short) (+(var_4)));
        var_18 = ((/* implicit */unsigned short) var_1);
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) arr_5 [i_1] [i_2])))) ? (max(((+(var_5))), (max((var_5), (var_5))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10))) != (65535LL))))))))))));
                var_20 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) var_0)))));
                arr_9 [i_2] [i_1] [i_2] |= ((int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2])) ? (min((var_17), (var_1))) : (((/* implicit */unsigned long long int) (+(-5790538003576950878LL))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))));
}
