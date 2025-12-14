/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39416
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
    var_18 = ((/* implicit */_Bool) 9204606441653254136LL);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((-(var_16))) << (((var_16) - (4110198388U)))))) <= ((((-(2895145307234581430LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (-9204606441653254126LL)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) max(((-(((((/* implicit */unsigned long long int) 2147483647)) + (16467672912266263722ULL))))), (((/* implicit */unsigned long long int) max(((+(1243015784548690982LL))), (min((9204606441653254136LL), (var_0))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(1979071161443287893ULL)))) ? (-5484174958003503932LL) : (max((((/* implicit */long long int) var_6)), (-1243015784548690982LL)))))));
        var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)13396)) ? (18014398509481983LL) : (9204606441653254125LL)))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)3840)) && (((/* implicit */_Bool) 9204606441653254125LL)))) ? (((/* implicit */int) max(((unsigned short)32767), (((/* implicit */unsigned short) (short)32764))))) : (max((var_1), (((/* implicit */int) (unsigned char)69))))));
    }
    var_22 = ((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)20))) / (((((/* implicit */_Bool) (unsigned short)65535)) ? (1243015784548690981LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
}
