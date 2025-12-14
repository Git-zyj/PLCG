/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247903
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
    var_20 = ((/* implicit */_Bool) var_8);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */signed char) (unsigned char)4);
                    var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) 734009899)) : (arr_4 [i_0 + 2] [i_0 - 2])))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) (unsigned short)65519)) ? (-5591432422372882317LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17))))), (((/* implicit */long long int) (unsigned short)22)))), (((/* implicit */long long int) var_18))));
    var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((unsigned short)32), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15)))))))), (max((8834529127658414395ULL), (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) -136381040)) : (8834529127658414395ULL)))))));
}
