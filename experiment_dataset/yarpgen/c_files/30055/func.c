/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30055
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
    var_13 = ((/* implicit */long long int) ((((((/* implicit */int) var_0)) << (((((/* implicit */int) (short)-11397)) + (11420))))) == (-1373726275)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_1 [i_1]) : (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) arr_1 [i_0 + 2]))))) <= ((-(((/* implicit */int) arr_0 [i_0 + 2]))))));
            var_16 = ((/* implicit */unsigned char) max((((unsigned short) (unsigned short)65516)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        }
    }
    var_17 = ((/* implicit */unsigned short) ((int) ((short) ((unsigned long long int) var_7))));
}
