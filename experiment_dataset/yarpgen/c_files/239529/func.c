/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239529
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned short)13259)) / (((/* implicit */int) (unsigned short)5224)))), (max((((((/* implicit */int) (unsigned short)21706)) % (((/* implicit */int) (unsigned short)8323)))), ((-(((/* implicit */int) (unsigned short)59035)))))))))));
                arr_6 [i_0] [i_1] [i_1] = min(((((_Bool)1) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)21706)))))), ((_Bool)1));
            }
        } 
    } 
    var_16 ^= ((/* implicit */_Bool) min((((((/* implicit */int) ((((/* implicit */int) (unsigned short)30923)) <= (((/* implicit */int) (unsigned short)18077))))) & (((((/* implicit */int) (unsigned short)34613)) * (((/* implicit */int) (unsigned short)30923)))))), (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)63498)) > (((/* implicit */int) (unsigned short)52254))))))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(((/* implicit */int) max(((unsigned short)18077), (((/* implicit */unsigned short) (_Bool)0))))))))));
        var_19 += ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) (unsigned short)0)))), ((_Bool)1)));
        var_20 = ((/* implicit */unsigned short) max((var_20), ((unsigned short)13259)));
    }
    var_21 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) max((max(((unsigned short)30923), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)21685)) <= (((/* implicit */int) (_Bool)1))))))))));
}
