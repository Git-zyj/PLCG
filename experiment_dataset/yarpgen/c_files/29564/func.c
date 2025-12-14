/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29564
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (var_15))) : (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_12)) - (13382)))))))), (min((6579744730357226886LL), (((/* implicit */long long int) (unsigned char)162)))))))));
    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) : (max((var_11), (((/* implicit */unsigned long long int) var_9))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (var_15)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_16))) : (((/* implicit */unsigned int) var_13)))) : (((var_16) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */int) var_2)))))))));
    var_20 = ((/* implicit */short) ((var_6) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) var_17))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */unsigned int) 268435456)) : (2909452349U)));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = var_5;
                    var_22 += ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((((/* implicit */_Bool) var_2)) ? (var_5) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_15)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    arr_8 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) : (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_10))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (short)-13357)))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2 - 1] = ((/* implicit */unsigned int) (+(((int) min((var_9), (var_6))))));
                }
            } 
        } 
    } 
}
