/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230004
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
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_19 *= ((/* implicit */unsigned short) ((1142043962U) + (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) -183562623)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))) : (0ULL)))));
                    var_21 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1]))));
                    var_22 = ((/* implicit */long long int) ((signed char) var_1));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_12))));
    }
    var_24 = ((/* implicit */signed char) ((((((/* implicit */int) var_12)) > (((/* implicit */int) ((_Bool) (unsigned char)250))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_12)))) || (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_11))));
}
