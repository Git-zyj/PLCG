/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206889
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)62)), ((short)28307)))), (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) var_5)))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */unsigned long long int) var_0);
                        arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */short) var_3);
                    }
                    var_12 = ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)43015)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) | (((unsigned long long int) 6397500914095126421ULL)));
                }
            }
        } 
    } 
    var_13 = min((((((/* implicit */_Bool) 5525374413715074684LL)) ? (((int) (signed char)-1)) : (max((((/* implicit */int) (short)-28307)), (var_10))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (-5525374413715074684LL)))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) -8LL)) == (var_6))))))));
}
