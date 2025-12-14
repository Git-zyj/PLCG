/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227620
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
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */int) (((-(((/* implicit */int) (signed char)127)))) >= (((/* implicit */int) ((signed char) (signed char)117)))))) & (((/* implicit */int) ((134217727ULL) == (((/* implicit */unsigned long long int) 3980948373U)))))))));
                    arr_7 [i_0] [i_0] [i_2] [i_0 - 3] = ((/* implicit */unsigned char) ((long long int) ((unsigned long long int) (unsigned char)7)));
                    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (unsigned char)249)))))), (min((((/* implicit */unsigned long long int) (unsigned char)231)), (min((12350204985676645923ULL), (((/* implicit */unsigned long long int) (unsigned char)249))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) ((_Bool) ((long long int) min((((/* implicit */unsigned long long int) (unsigned char)3)), (18446744073709551615ULL)))));
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-(((long long int) min((((/* implicit */unsigned long long int) (unsigned char)133)), (4292870144ULL)))))))));
}
