/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244496
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((unsigned int) ((((/* implicit */_Bool) var_15)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_0 [14LL] [i_0])) : ((-2147483647 - 1))))) ? (((((/* implicit */int) (unsigned char)126)) & (((/* implicit */int) arr_1 [8ULL])))) : (((/* implicit */int) arr_1 [(signed char)1])))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((2147483647) - (((/* implicit */int) (unsigned char)1)))) >> (((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)-5055)) : (((/* implicit */int) var_7)))) - (15063)))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_9 [5] [3ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((0LL) <= (((/* implicit */long long int) (-2147483647 - 1)))))))) >= (((/* implicit */int) (signed char)-32))));
        arr_10 [i_1] = ((/* implicit */long long int) ((signed char) ((((-2147483647) + (2147483647))) >> (((((/* implicit */int) (signed char)-11)) + (21))))));
    }
    var_19 = var_12;
    var_20 ^= ((/* implicit */unsigned long long int) var_10);
    var_21 &= ((/* implicit */int) (!(((/* implicit */_Bool) 110702775))));
}
