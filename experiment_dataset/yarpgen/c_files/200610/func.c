/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200610
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) -7504084653398187098LL))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */short) min((((((((/* implicit */int) var_12)) + (2147483647))) << (((((arr_4 [i_0] [i_0] [i_0]) + (5591866437492057323LL))) - (2LL))))), (((/* implicit */int) ((_Bool) (short)-8)))));
            var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (min((-3115595623435445411LL), (((/* implicit */long long int) arr_0 [i_0])))) : (((((/* implicit */_Bool) 3115595623435445406LL)) ? (-3115595623435445411LL) : (-3115595623435445432LL)))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3115595623435445432LL)) ? (-3115595623435445436LL) : (-3115595623435445409LL)))) ? (898245751U) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */int) var_1))))))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) ((((var_9) + (2147483647))) >> (((arr_9 [i_3]) - (2013021045)))));
                        arr_17 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_11)) ? (-3115595623435445436LL) : (-3115595623435445429LL)))));
                        arr_18 [i_0] [i_2] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 3115595623435445404LL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (unsigned char)195))))) : (3396721552U)));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_5 = 2; i_5 < 18; i_5 += 1) 
        {
            arr_22 [i_0] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0]))));
            arr_23 [i_0] [i_0] = ((/* implicit */_Bool) var_0);
        }
        arr_24 [i_0] [i_0] = ((/* implicit */signed char) (((-(((((/* implicit */int) (short)-17493)) * (-3))))) >= ((-((-(((/* implicit */int) var_12))))))));
    }
}
