/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23471
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 |= (-(((/* implicit */int) arr_0 [i_0])));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            var_16 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(var_1)))) >= (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_14)))));
            arr_5 [i_0] [i_1] = ((/* implicit */int) arr_2 [i_1] [i_0]);
        }
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0]);
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
        {
            arr_9 [i_0] [(unsigned char)10] |= (+(((/* implicit */int) (_Bool)1)));
            var_17 = ((/* implicit */int) (((+(var_13))) + (var_13)));
            var_18 *= ((/* implicit */unsigned char) ((arr_7 [18U]) % (arr_7 [(unsigned char)4])));
        }
    }
    var_19 = ((((/* implicit */_Bool) ((short) (+(-233718355))))) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_9))) + (((/* implicit */long long int) var_5)))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (var_13)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)237)), (var_6)))) : (var_13))));
}
