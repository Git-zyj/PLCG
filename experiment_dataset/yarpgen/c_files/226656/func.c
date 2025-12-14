/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226656
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max(((~(((((((/* implicit */int) (short)-3910)) + (2147483647))) >> (((var_14) + (1043245566))))))), (((/* implicit */int) ((1208282958268354613ULL) == (((/* implicit */unsigned long long int) -5426598715862183106LL))))))))));
    var_17 = var_0;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) arr_3 [i_0]);
        var_18 = ((/* implicit */long long int) ((((int) max(((unsigned short)43861), (arr_2 [i_0] [i_0])))) & (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)5))) * ((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) / (-4934624601816964933LL))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((signed char) ((((((-223914531) + (2147483647))) << (((((var_12) + (1973748537788449184LL))) - (2LL))))) % (((/* implicit */int) arr_0 [i_1] [i_2]))))))));
            var_21 = ((int) ((((/* implicit */_Bool) arr_0 [i_1 - 3] [i_1 - 1])) ? (((/* implicit */int) var_1)) : ((~(-223914531)))));
        }
    }
}
