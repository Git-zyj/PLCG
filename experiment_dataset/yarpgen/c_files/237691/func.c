/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237691
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
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) max((max((-1836737200), (((/* implicit */int) (short)-25184)))), (((/* implicit */int) var_2))))), (90539664U)));
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) (unsigned short)23702))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_3 [(unsigned short)14] &= ((/* implicit */_Bool) 134209536);
        arr_4 [i_0] = (~(min(((((_Bool)1) ? (var_16) : (var_6))), (((/* implicit */long long int) (_Bool)1)))));
        arr_5 [i_0] = var_0;
        arr_6 [i_0] = ((/* implicit */unsigned int) min((min((min((arr_1 [i_0]), (((/* implicit */int) (signed char)-47)))), (((/* implicit */int) var_4)))), (min((((/* implicit */int) var_0)), (arr_1 [i_0])))));
    }
    var_20 = ((unsigned char) (~(6874409333744441178LL)));
}
