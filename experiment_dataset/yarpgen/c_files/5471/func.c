/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5471
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
    var_18 = ((/* implicit */signed char) var_0);
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 16; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            var_19 = ((/* implicit */long long int) (+(((((arr_1 [i_0 + 1] [i_1 + 2]) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (unsigned char)222)))) | ((-(((/* implicit */int) arr_3 [i_0] [i_1]))))))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)46281)) ? ((+(arr_2 [i_1 - 2] [i_1 - 2] [i_1 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
        }
        var_21 += ((/* implicit */unsigned short) (-((+(arr_2 [i_0 + 3] [i_0 - 2] [i_0 + 3])))));
    }
    for (short i_2 = 4; i_2 < 16; i_2 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) arr_0 [(short)11]);
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215))) : (4294967295U)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_2]))))) : (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)28))) : (arr_4 [i_2])))))) || (((/* implicit */_Bool) arr_5 [i_2]))));
        var_24 = ((((/* implicit */_Bool) arr_4 [i_2 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(arr_4 [i_2]))) == (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [(short)8]))))))) : (((((/* implicit */_Bool) ((unsigned char) arr_3 [i_2] [(unsigned char)0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2])) || (((/* implicit */_Bool) -4979853061391277780LL)))))) : ((-(18446744073709551605ULL))))));
    }
}
