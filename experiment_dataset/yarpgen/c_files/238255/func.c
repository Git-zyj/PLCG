/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238255
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
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (~(29828780))))) ? (((((/* implicit */_Bool) (+(-841250797)))) ? (((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned long long int) 1996272921U)))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)34191)), (1909074993)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
    var_14 -= (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (var_5)))) ? (((/* implicit */int) ((short) 3493129915498116009ULL))) : (((/* implicit */int) ((signed char) 13293765669348931754ULL))))));
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_16 -= ((/* implicit */short) (+((+(((/* implicit */int) (unsigned short)34201))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) 140155405))) ? (arr_2 [i_0] [i_0]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 112028033)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_0]))))) ? (min((arr_2 [i_0] [i_0]), (2113929216U))) : (((unsigned int) 1375287790))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) (-(arr_0 [19U] [19U])));
            arr_5 [i_0] = ((/* implicit */unsigned long long int) (signed char)127);
            arr_6 [i_0] = ((unsigned long long int) (signed char)-54);
        }
        arr_7 [i_0] = ((/* implicit */unsigned char) 126976U);
    }
}
