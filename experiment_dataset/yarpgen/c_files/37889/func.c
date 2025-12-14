/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37889
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
    var_10 += ((/* implicit */short) var_2);
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)154)))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)157)))))));
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */long long int) (unsigned char)154)), (0LL))));
                    var_13 += ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned short)65535)), (min(((~(arr_5 [i_0 - 3] [i_0 + 1] [i_0]))), (arr_5 [i_0 + 1] [i_0 - 2] [i_0 + 1])))));
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (+(min((((((/* implicit */_Bool) (short)-20480)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)102)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (unsigned char)96)))))))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)154);
                }
            } 
        } 
    } 
}
