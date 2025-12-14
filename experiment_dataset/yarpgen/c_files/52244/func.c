/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52244
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
    var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
    var_16 = ((/* implicit */unsigned char) ((unsigned short) (+(var_0))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) arr_2 [i_0 + 2] [(unsigned short)14]);
        arr_4 [i_0] [3ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0 - 1]), (arr_2 [i_0] [i_0 + 3])))) ? (((/* implicit */int) min((arr_2 [i_0] [i_0 + 2]), (arr_2 [i_0] [i_0 + 2])))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (((/* implicit */int) (unsigned short)51800)) : (((/* implicit */int) (unsigned char)112))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) max(((+((~(((/* implicit */int) var_13)))))), (((/* implicit */int) max(((unsigned char)25), (((/* implicit */unsigned char) arr_1 [i_0] [i_0 + 1])))))));
    }
}
