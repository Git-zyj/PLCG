/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243413
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
    var_14 = var_1;
    var_15 = ((/* implicit */unsigned char) ((unsigned long long int) 2147483647));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = (~((+(((/* implicit */int) var_0)))));
                arr_7 [i_1] [i_1] &= ((((/* implicit */int) ((_Bool) 3400506946057710007ULL))) * (((/* implicit */int) var_3)));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_16 = ((/* implicit */long long int) (+((~(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255))))))));
                    arr_11 [i_0] [i_1] [i_1] = ((/* implicit */int) (+(((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) (signed char)24)) : (min((((/* implicit */unsigned long long int) -9064652688146213180LL)), (4720323988785843181ULL)))))));
                    var_17 *= ((/* implicit */long long int) min(((-(((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */_Bool) min((15046237127651841609ULL), (((/* implicit */unsigned long long int) var_4))))) || (((/* implicit */_Bool) ((int) (unsigned char)245))))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    arr_14 [i_1] [i_1] [i_0 - 2] [i_1] |= ((/* implicit */signed char) ((unsigned short) var_7));
                    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
                    arr_15 [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (2305841909702066176ULL))));
                }
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned long long int) var_12);
    var_20 &= ((/* implicit */int) (unsigned short)36748);
}
