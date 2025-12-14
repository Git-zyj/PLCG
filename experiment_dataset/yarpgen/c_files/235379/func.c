/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235379
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
    var_20 = ((/* implicit */_Bool) var_16);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */unsigned long long int) -2008782617)) : (((((/* implicit */_Bool) 562945658454016LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2008782617))))))) ? (((/* implicit */int) ((-2008782594) <= (((/* implicit */int) (unsigned char)0))))) : (max((0), (((/* implicit */int) (short)-8098))))));
                var_21 = ((/* implicit */signed char) ((((max((19U), (((/* implicit */unsigned int) (_Bool)1)))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)12)) >> (((((/* implicit */_Bool) 2235977516U)) ? (((/* implicit */int) (unsigned short)22)) : (((/* implicit */int) (unsigned short)65523)))))))));
                arr_8 [i_1] = ((((/* implicit */_Bool) max((2235977512U), (((/* implicit */unsigned int) (short)-32763))))) ? (((((/* implicit */_Bool) 16711680U)) ? (33554431LL) : (((/* implicit */long long int) 1626242917U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3))) : (2058989783U)))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) -6081095606645923255LL);
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_18))));
}
