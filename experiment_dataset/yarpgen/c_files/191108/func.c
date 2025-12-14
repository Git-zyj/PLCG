/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191108
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
    var_20 = ((/* implicit */_Bool) var_15);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) max(((~(arr_0 [(_Bool)1] [i_0]))), (arr_0 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max((-367249815), (((/* implicit */int) (unsigned char)164))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -3029373459690897066LL)) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) (_Bool)0)))))) : (arr_0 [i_0] [i_0]))))));
            arr_5 [11LL] [i_0] [(unsigned char)13] = ((/* implicit */short) max((arr_3 [i_0] [12LL] [i_1]), (((/* implicit */int) (!(((/* implicit */_Bool) min((7677265225105981671LL), (((/* implicit */long long int) var_0))))))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            var_22 = ((((/* implicit */int) ((-1739047376) < (-1204023487)))) - (367249814));
            arr_9 [i_0] [(unsigned char)14] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [i_0]))));
            var_23 = ((/* implicit */unsigned char) ((var_10) - (((/* implicit */long long int) (-(arr_3 [i_0] [8] [8]))))));
        }
        var_24 = ((/* implicit */unsigned char) min(((short)25795), (((/* implicit */short) (_Bool)1))));
    }
}
