/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38001
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
    var_17 = ((/* implicit */int) max(((~(var_14))), (((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned char)2)))), (((/* implicit */int) var_9)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) arr_0 [i_0]);
        var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_0])))) != (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (signed char)16)))) : (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) var_9)))))))));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((4120400512653801878LL), (((/* implicit */long long int) arr_4 [i_2] [i_1]))))) ? (((/* implicit */int) ((arr_4 [i_1] [i_2]) >= (((/* implicit */int) var_0))))) : (arr_4 [i_1] [i_2])));
                var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned char) var_9)), (arr_5 [i_1])));
            }
        } 
    } 
}
