/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231444
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), ((+(((/* implicit */int) (unsigned short)52391))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1985219130)) ? (193607602U) : (((/* implicit */unsigned int) var_8))))) == (min((((/* implicit */unsigned long long int) (unsigned short)15107)), (var_3)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (var_9)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned short)52391)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))))))))));
                    arr_10 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_0]), (var_9)))) ? (max((1384484746U), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                    arr_11 [i_2] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40473)) ? ((~(2095268917U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11215)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-81))))) : (((((/* implicit */_Bool) (~(var_7)))) ? (max((14121350105716788380ULL), (((/* implicit */unsigned long long int) 1985219130)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32675)))))));
                    arr_12 [i_0] [i_2] = (~(((((/* implicit */_Bool) ((2267350720U) % (((/* implicit */unsigned int) 886339052))))) ? (max((((/* implicit */int) var_2)), (var_7))) : ((-(-1445564422))))));
                }
            } 
        } 
    } 
}
