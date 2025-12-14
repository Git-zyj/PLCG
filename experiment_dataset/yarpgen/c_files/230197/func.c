/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230197
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_16 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) max(((((_Bool)0) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_14)))), (((/* implicit */int) ((_Bool) arr_1 [i_0 + 4] [i_1 + 1])))));
                    arr_8 [11LL] [i_1] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) var_7);
                }
            } 
        } 
        var_18 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [i_0 + 4] [10ULL])))) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(_Bool)1])))))))));
        var_19 = ((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1]);
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        arr_12 [i_3] [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) * (((/* implicit */int) arr_7 [i_3]))));
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_3]))));
        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1057784143))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)240)) || (((/* implicit */_Bool) (unsigned short)2008)))))));
    }
    for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        arr_17 [5LL] = ((/* implicit */unsigned int) var_15);
        var_22 -= ((/* implicit */unsigned int) (-((~(arr_4 [i_4] [(unsigned short)2] [(unsigned short)2])))));
        var_23 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_3 [i_4] [(short)0])) ? ((-(var_11))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_6))))))), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
    }
    var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
}
