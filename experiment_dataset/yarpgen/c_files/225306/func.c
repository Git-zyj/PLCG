/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225306
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) var_10)) ? (var_4) : (var_4)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((max((-4237835933977249489LL), (((/* implicit */long long int) arr_2 [i_0] [i_0])))) | (((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_0] [i_0]))))));
        var_12 -= var_6;
        var_13 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22083)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [5U])))))) : (arr_0 [i_0] [i_0])))));
        var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)-22083)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)22083))) : ((-(-4237835933977249477LL)))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 259337775)) ? (18174559727913192316ULL) : (((/* implicit */unsigned long long int) 5096353283222324151LL))));
        var_16 = ((((/* implicit */int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) ((var_0) <= (-4237835933977249499LL)))))))) <= ((-(((/* implicit */int) (unsigned char)81)))));
        var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (arr_5 [i_1] [i_1])))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))))))) ? ((-(min((15904739497994800309ULL), (((/* implicit */unsigned long long int) var_2)))))) : (14659456242962233387ULL)));
    }
}
