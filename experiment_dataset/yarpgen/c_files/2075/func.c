/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2075
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
    var_20 = ((/* implicit */unsigned int) max((((unsigned short) (_Bool)0)), (((/* implicit */unsigned short) var_15))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [(unsigned short)8] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max(((unsigned char)255), ((unsigned char)0)))), (max((2534800926900323068ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)0)))))))));
                var_21 = ((/* implicit */unsigned int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-20))));
            }
        } 
    } 
    var_22 = ((signed char) ((signed char) ((signed char) var_0)));
    var_23 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (unsigned char)255))));
}
