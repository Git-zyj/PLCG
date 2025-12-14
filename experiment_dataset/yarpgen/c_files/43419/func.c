/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43419
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
    var_15 = ((/* implicit */int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = max((arr_5 [i_0] [i_0]), (((/* implicit */int) ((((/* implicit */int) (unsigned char)249)) >= (arr_5 [i_0] [i_0])))));
                var_16 |= ((/* implicit */long long int) (-(((int) (_Bool)1))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (var_7)))) - (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) 1U)) : (arr_3 [i_0]))))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]))));
                var_17 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_3)) ? (max((arr_3 [i_0]), (((/* implicit */unsigned long long int) -4573459770094502888LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0])))))), (((/* implicit */unsigned long long int) (short)16383))));
                var_18 = ((/* implicit */int) (~(((long long int) 1753596751))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((var_9) ? (min((((((/* implicit */_Bool) 1340738820)) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) var_5)))), (((722351491) - (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) (short)32766)) ? ((~(((/* implicit */int) (short)-15446)))) : (((/* implicit */int) (unsigned char)6))))));
}
