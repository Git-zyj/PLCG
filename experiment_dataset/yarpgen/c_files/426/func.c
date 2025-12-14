/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/426
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
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_18))))) : (((long long int) arr_0 [i_0]))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_0)))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)79))))) ? (((/* implicit */int) ((-1618344798) <= (var_8)))) : (((/* implicit */int) var_10))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) (-(18446744073709551615ULL)));
            var_24 = (short)-18676;
        }
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_4 [11] [i_2] [i_0 - 1]))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_26 = ((/* implicit */short) var_14);
                var_27 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_3]))))) ^ (((3585306023U) >> (((/* implicit */int) (_Bool)1))))));
                var_28 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1))));
            }
            var_29 = arr_6 [i_0];
        }
    }
    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) var_8))));
}
