/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246898
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned char) arr_5 [6ULL] [i_1] [i_2]);
                    arr_7 [i_0] [6LL] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0 + 1] [i_0 - 1]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1)))))))), (var_3)));
    var_16 -= ((/* implicit */long long int) ((signed char) ((max((var_11), (var_13))) ? (((/* implicit */unsigned long long int) 4927299547347194307LL)) : (var_1))));
    var_17 = ((/* implicit */unsigned long long int) (!(((-180228596572421418LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)98)))))));
    var_18 = ((/* implicit */unsigned short) var_8);
}
