/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31708
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
    var_17 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_18 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) (short)-22933)) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1])))), (((((/* implicit */_Bool) (short)-22933)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (signed char)122))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) max((var_7), (var_7)))) : (((/* implicit */int) min((var_15), (var_12))))))) ? ((~(max((-1941088685182358562LL), (((/* implicit */long long int) (unsigned char)239)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) -497046057)) : (-1941088685182358562LL)))));
                    arr_7 [i_0] [i_0] [i_0] = (~(-1337404088));
                    arr_8 [(_Bool)1] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned long long int) ((long long int) (signed char)97))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) ((unsigned short) var_7));
}
