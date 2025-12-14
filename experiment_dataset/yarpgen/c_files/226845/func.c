/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226845
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
    var_18 |= ((/* implicit */unsigned short) (~(((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)64)), ((unsigned short)0)))) / (((/* implicit */int) (unsigned short)65535))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 217531977U)) ? (4077435314U) : (4294967295U)));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(arr_5 [i_0] [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))) : (((((/* implicit */_Bool) var_17)) ? (9302228580770729235ULL) : (((/* implicit */unsigned long long int) 217532000U)))))))))));
                }
            } 
        } 
    } 
    var_21 = (+(min((((/* implicit */unsigned long long int) ((unsigned int) var_14))), (9144515492938822373ULL))));
}
