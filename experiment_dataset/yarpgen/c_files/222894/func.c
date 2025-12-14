/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222894
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
    var_10 = var_6;
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [18])) ? (((/* implicit */int) arr_0 [i_0 - 1] [18LL])) : (((/* implicit */int) (unsigned char)103)))))));
        var_12 = ((unsigned short) arr_1 [i_0 + 1] [i_0]);
        var_13 = ((((/* implicit */long long int) ((/* implicit */int) (short)127))) ^ (arr_1 [i_0 - 1] [i_0]));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_0)) + (2147483647))) << (((((((/* implicit */int) var_0)) + (22513))) - (26))))) >> (((/* implicit */int) ((((/* implicit */long long int) var_9)) <= (-2692613596036878093LL))))));
        arr_7 [i_1 - 1] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)120))));
        arr_8 [i_1] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_1 [i_1] [(_Bool)1]))) | (((/* implicit */int) ((((/* implicit */int) (unsigned char)103)) > (((/* implicit */int) arr_0 [i_1 + 1] [(_Bool)1])))))));
    }
    var_14 += ((/* implicit */unsigned int) min(((unsigned char)160), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)-8681)) + (2147483647))) >> (((var_7) - (7733422199432429921LL)))))))))));
}
