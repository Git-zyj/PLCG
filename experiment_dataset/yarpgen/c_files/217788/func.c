/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217788
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+(((/* implicit */int) var_19)))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((-(723559210987265184LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_16)), (var_8))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) (short)9971);
                    var_24 = ((/* implicit */short) max((var_24), (((short) min((((((/* implicit */_Bool) -8466175971601312434LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (13U))), (((unsigned int) arr_4 [4LL])))))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        var_25 = ((/* implicit */long long int) arr_2 [i_3] [i_3]);
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((long long int) var_11)))));
        var_27 = ((/* implicit */unsigned short) (_Bool)1);
    }
    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        var_28 = ((/* implicit */short) ((int) (+(((/* implicit */int) arr_3 [i_4] [(_Bool)1] [i_4])))));
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) max((((/* implicit */unsigned int) ((_Bool) -2672007199807346487LL))), (1603304716U))))));
        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_13 [i_4] [i_4]))));
    }
}
