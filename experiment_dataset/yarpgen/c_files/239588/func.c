/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239588
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max(((unsigned short)39107), ((unsigned short)57344)))) : ((-(((/* implicit */int) ((unsigned short) (short)(-32767 - 1))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0] [i_0])), ((-(-6678428541573138986LL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_0))))) ? (arr_0 [i_0]) : (((arr_1 [i_0] [i_0]) ? (var_10) : (((/* implicit */int) (short)32762))))))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (20U)))))));
        var_12 = ((short) var_5);
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_0))));
        arr_4 [i_0] = ((/* implicit */short) var_0);
    }
    for (short i_1 = 4; i_1 < 9; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((int) arr_6 [i_1]));
        arr_8 [i_1] = ((/* implicit */unsigned short) (short)27864);
    }
    for (short i_2 = 4; i_2 < 9; i_2 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (203590887) : (((/* implicit */int) (signed char)-107))))), (-8761525265522501580LL))), (((/* implicit */long long int) (short)(-32767 - 1))))))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27865))) : (715178653U))), (((/* implicit */unsigned int) (unsigned short)58482))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_16 = ((/* implicit */_Bool) var_3);
}
