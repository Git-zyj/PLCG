/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32643
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 399731485U)), (7790897599336070146ULL)))) ? (((long long int) 399731504U)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (1854101011))))) / ((-(arr_2 [i_0])))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((313842587U) - (313842568U)))))) & ((~(((((/* implicit */long long int) var_6)) ^ (arr_2 [i_0])))))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (unsigned short)23451)) % (((/* implicit */int) var_7)))))) ? ((-(var_2))) : (((/* implicit */int) ((unsigned char) (unsigned short)45919)))));
    var_20 = ((/* implicit */unsigned char) var_5);
}
