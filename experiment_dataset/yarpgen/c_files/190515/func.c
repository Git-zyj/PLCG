/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190515
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (short)-20585))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) (!((!((!(arr_0 [i_0])))))));
        var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) (short)20585))))))))))));
    }
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((+(var_1)))))))))));
    var_12 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_7)))))))));
    var_13 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)59))));
    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)20556))));
}
