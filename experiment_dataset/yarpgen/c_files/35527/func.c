/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35527
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */int) ((unsigned long long int) (((+(((/* implicit */int) (unsigned short)0)))) << (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) - (48299))))));
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (unsigned short)0))))) : (((unsigned long long int) arr_0 [i_1]))))) ? (((var_0) ? (((/* implicit */int) min(((unsigned short)0), ((unsigned short)65535)))) : (((((/* implicit */_Bool) -7547956083698636148LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_1])))) < (((/* implicit */int) (signed char)90)))))));
                var_13 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -7547956083698636165LL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) arr_1 [i_1] [i_0])))) : ((~(((/* implicit */int) (signed char)-52)))))), (min((((/* implicit */int) ((arr_3 [i_1] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned short)65535))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) (signed char)52);
}
