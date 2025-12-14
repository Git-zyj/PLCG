/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41353
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(var_5))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) var_3);
        var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_3))));
        var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-27382)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (signed char)114))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (signed char)114);
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-115)) & (((/* implicit */int) (signed char)110))));
}
