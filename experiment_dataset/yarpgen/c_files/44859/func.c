/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44859
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
    var_13 |= ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)22021))));
                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-11097)) ? (5398120950612054882LL) : (((/* implicit */long long int) 4294967290U))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */int) (unsigned char)121)))), (((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) var_10))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) 32768);
}
