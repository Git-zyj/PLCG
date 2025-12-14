/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191996
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (min((4294967282U), (((/* implicit */unsigned int) (signed char)-32))))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (signed char)-121))))) : (var_8)));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (min((((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2251799813685247LL))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (6917529027641081856LL)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4266818496279798790LL)) ? (max((var_2), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] |= ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) (short)32445)))));
                var_14 = ((/* implicit */unsigned int) ((long long int) ((unsigned int) -5277721095562764727LL)));
            }
        } 
    } 
}
