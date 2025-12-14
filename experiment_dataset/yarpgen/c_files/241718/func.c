/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241718
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
    var_12 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_4))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) (~(arr_1 [i_0])))) : (((unsigned long long int) arr_0 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_14 -= ((/* implicit */short) (-((-(((/* implicit */int) arr_5 [i_1] [(_Bool)1]))))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (var_10)));
        arr_6 [(_Bool)1] [i_1] = ((/* implicit */short) arr_4 [i_1] [i_1]);
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16777215)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) (short)32758))));
        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 1964139479))))) | ((+(((/* implicit */int) (unsigned short)8)))))))));
    }
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((var_11) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))));
}
