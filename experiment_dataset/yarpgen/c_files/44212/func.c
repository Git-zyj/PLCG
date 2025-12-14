/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44212
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_7))));
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) + (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? ((-(-8014520870917780688LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))) : (8014520870917780688LL))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-7))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_2] [i_1])), (arr_1 [i_0]))))))) != ((~(((((/* implicit */_Bool) arr_8 [14U] [i_1] [i_1] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_1]))))))));
                }
            } 
        } 
    } 
    var_16 = ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (var_8)))))) ? (max((((long long int) (unsigned char)113)), (((/* implicit */long long int) max(((short)-32279), (((/* implicit */short) var_2))))))) : ((+(((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */long long int) 611246674U)) : (-6751263135694397979LL))))));
}
