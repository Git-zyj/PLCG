/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34908
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
    var_14 = ((/* implicit */short) ((_Bool) ((((var_12) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((_Bool) var_11))))));
    var_15 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_13)))) == (((/* implicit */int) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)28))))) || (((/* implicit */_Bool) ((((-1048576) + (2147483647))) >> (((var_12) + (28277551)))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */int) ((unsigned char) var_11));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((short) (((_Bool)1) ? ((+(((/* implicit */int) arr_6 [i_2])))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)205)))))));
                }
            } 
        } 
    } 
}
