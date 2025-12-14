/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27145
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) 1429698022273198598ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (17017046051436353017ULL)));
        arr_2 [i_0] = ((/* implicit */short) 17017046051436353025ULL);
    }
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(17017046051436353018ULL))))));
    var_15 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            {
                var_16 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) min(((_Bool)1), ((_Bool)1)))))))));
                arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_8 [i_1] [i_2]);
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((_Bool) arr_1 [i_1] [i_2])) ? (min((((/* implicit */unsigned long long int) arr_6 [i_2] [i_2])), (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (1429698022273198576ULL) : (((/* implicit */unsigned long long int) var_12)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))))))));
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (((unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)34581))))));
            }
        } 
    } 
}
