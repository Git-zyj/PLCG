/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222533
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
    var_13 ^= (~(max((((/* implicit */int) var_3)), (var_12))));
    var_14 = max(((((!((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)123))))) : (var_11))), ((((!(((/* implicit */_Bool) 14909198120663788346ULL)))) ? (var_12) : ((~(-1439896716))))));
    var_15 = ((/* implicit */long long int) (unsigned short)8708);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_16 ^= (((-((-(((/* implicit */int) (unsigned short)7)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)70)))))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1439896731))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) (_Bool)1)), (8085227217999938603ULL)))));
                                var_17 = ((((/* implicit */_Bool) (+(517342914)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)94)))))) : ((+(0ULL))));
                                var_18 *= ((/* implicit */signed char) (-(-200497536)));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((13866855594205280653ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                arr_17 [i_1] = ((/* implicit */unsigned char) (+(min((min((((/* implicit */unsigned long long int) (unsigned short)13822)), (1622641615742051298ULL))), (((/* implicit */unsigned long long int) -2147483619))))));
            }
        } 
    } 
    var_19 ^= var_0;
}
