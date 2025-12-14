/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24666
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
    var_15 = var_9;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (short)-32250))));
        var_17 = (-(122865838U));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_18 ^= ((/* implicit */unsigned int) (short)32227);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_7 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_2])) ? ((-(((/* implicit */int) arr_3 [8U])))) : ((-(((/* implicit */int) (short)-32247))))));
            arr_8 [i_2] = (~(((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_5 [i_2] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32250))))));
            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_2]))));
        }
        arr_9 [i_1] = (unsigned short)47667;
        var_20 &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)17869)) < (((/* implicit */int) arr_3 [i_1]))));
        var_21 += ((/* implicit */short) (((!(((/* implicit */_Bool) arr_2 [i_1] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9244)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31896))) : (arr_0 [i_1]))))));
    }
}
