/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19988
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_11 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_2 [i_0]))))))) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) max(((unsigned short)24), (arr_1 [i_0 + 1]))))));
        var_12 ^= ((/* implicit */_Bool) ((short) ((short) (unsigned char)1)));
        arr_4 [i_0] [i_0] = var_7;
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) arr_6 [1]);
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_5 [i_1] [i_1]))));
    }
    for (short i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] = -8417813544167412034LL;
        arr_11 [(unsigned char)0] [i_2] = ((/* implicit */unsigned int) (signed char)-127);
        var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)244)) << (((((/* implicit */_Bool) -1889068521)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)3493))))))) <= (2113929216U)));
    }
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_1))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((/* implicit */int) var_1)) >= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))))) ? ((~(var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
}
