/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233896
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
    var_11 = ((/* implicit */unsigned int) ((unsigned short) (-(min((4737095565779043653ULL), (((/* implicit */unsigned long long int) (short)-31067)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) 5150343784936632164ULL);
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) arr_2 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */short) ((arr_1 [i_0]) < (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_0 [i_0] [i_0]))))) - (var_8)))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_8) - ((-(arr_2 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 9155104827878395781ULL)))) : (arr_2 [i_0] [i_0])));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_13 = (+(((((/* implicit */int) (unsigned short)63017)) / (128140541))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_6 [i_1]))));
        arr_9 [i_1] = arr_6 [i_1];
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-72)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_7 [i_1])))))) ? (arr_8 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_2 [i_1] [i_1]))))));
        arr_10 [i_1] = ((/* implicit */unsigned long long int) (-(-8227024436675767005LL)));
    }
}
