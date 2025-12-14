/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25656
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
    var_14 -= ((/* implicit */int) ((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = min((max((((/* implicit */long long int) 129024)), (4556735912113565674LL))), (((/* implicit */long long int) (short)11294)));
                arr_6 [14] = ((/* implicit */signed char) ((short) min((arr_2 [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))))))));
                var_15 = ((/* implicit */unsigned short) ((min((arr_4 [(unsigned short)7] [i_1] [15U]), (((/* implicit */unsigned long long int) ((arr_3 [i_1]) << (((arr_4 [i_1 + 1] [i_0] [i_0]) - (2349746524872775650ULL)))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((4294967282U), (((/* implicit */unsigned int) (signed char)-63)))))))));
                arr_7 [i_0] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87))) & (((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                var_16 *= ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_13);
}
