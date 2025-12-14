/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205380
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
    var_16 = ((/* implicit */short) var_14);
    var_17 = ((/* implicit */unsigned long long int) min(((signed char)-108), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-118)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2023909120)) ? (((/* implicit */int) (short)6640)) : (((/* implicit */int) (signed char)-123))))))))));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) 2570586639U)) ? (-5573864980578118918LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)216))))))));
    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) (unsigned char)46))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_3))))) : (1048376744048893570LL))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((unsigned char) var_1)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) ((signed char) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0])))))) + (2147483647))) << ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3986141534379947258LL))) - (1LL)))));
                var_21 += ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((arr_5 [i_0] [i_1]), (arr_5 [i_1] [i_0])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1]))) + (var_7)))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (unsigned char)140))))))))));
            }
        } 
    } 
}
