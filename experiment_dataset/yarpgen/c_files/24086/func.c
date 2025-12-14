/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24086
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((int) arr_1 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)9)))))))) ? (((/* implicit */int) (short)25882)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))));
        var_16 &= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_0 [i_0]))))) != (((/* implicit */int) (unsigned short)30965)))))));
        arr_3 [i_0] = ((/* implicit */long long int) (((-(arr_1 [i_0]))) - ((+((-(((/* implicit */int) (signed char)1))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0]);
            var_17 = ((/* implicit */long long int) max((var_17), ((~(((-4287039323038110077LL) ^ (((/* implicit */long long int) arr_1 [i_1]))))))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_4 [i_0]))) + (max((((/* implicit */int) (short)29984)), (arr_1 [i_0])))));
            arr_8 [(short)0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(max((((long long int) -178476176401730161LL)), (((/* implicit */long long int) ((arr_1 [(_Bool)1]) ^ (((/* implicit */int) arr_0 [i_0])))))))));
        }
    }
    var_18 = ((/* implicit */int) min(((+(min((((/* implicit */long long int) (short)0)), (var_10))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51821))) : (min((-9223372036854775801LL), (((/* implicit */long long int) var_4))))))));
}
