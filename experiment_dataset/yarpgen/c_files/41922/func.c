/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41922
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
    var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 4926574922652027223LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))))));
    var_17 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-102)))), (((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned char)118)))))) * (((/* implicit */int) var_11))));
    var_18 = ((((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)0)))) | (((int) var_5))))) ? (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))), (((unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (unsigned char)1)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 -= ((/* implicit */unsigned short) (unsigned char)17);
                    var_20 = ((/* implicit */unsigned char) var_4);
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_3))));
                    var_22 = ((/* implicit */unsigned char) (unsigned short)65535);
                }
            } 
        } 
    } 
}
