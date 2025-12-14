/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222107
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_0 [i_0])))));
        var_16 = ((/* implicit */unsigned char) (signed char)13);
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((((/* implicit */int) ((short) arr_5 [i_1]))) + (((((/* implicit */int) var_9)) % (((/* implicit */int) arr_5 [i_1])))));
        arr_8 [(signed char)8] = ((/* implicit */_Bool) (signed char)100);
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (signed char)0))))) : (((/* implicit */int) ((signed char) (_Bool)1)))))) ? (((/* implicit */int) ((signed char) ((unsigned long long int) (signed char)8)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-10734))))) ? ((~(((/* implicit */int) var_0)))) : (((((((/* implicit */int) (short)-23559)) + (2147483647))) >> (((4742638932891003140ULL) - (4742638932891003135ULL)))))))));
}
