/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46101
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) 169023198U)))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (1212662165683856256LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))));
    var_18 &= ((/* implicit */unsigned char) min(((-(((var_7) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-6408)))))), (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) (short)-1);
                var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_5 [i_1] [i_1] [i_0]))) ? (((((/* implicit */_Bool) min((var_14), (((/* implicit */short) var_13))))) ? (((int) arr_0 [i_0])) : ((~(((/* implicit */int) var_4)))))) : (((/* implicit */int) (short)0))));
            }
        } 
    } 
}
