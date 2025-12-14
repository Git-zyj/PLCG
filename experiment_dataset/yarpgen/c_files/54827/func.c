/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54827
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
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (!((!(arr_3 [i_0 - 2] [(signed char)9])))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)7135)) ? (((/* implicit */int) (unsigned short)3690)) : (((/* implicit */int) (unsigned short)61850))));
                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1048576ULL))));
                var_21 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-14078))));
                var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) 134217664U)))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 682171168U)) ? (18446744073708503056ULL) : (18446744073709551600ULL)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((1048551ULL) >= (((/* implicit */unsigned long long int) var_0))))))))));
    var_24 = ((/* implicit */unsigned short) var_4);
    var_25 = (-(((/* implicit */int) ((((/* implicit */_Bool) (-(var_0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2804266342U)) ? (((/* implicit */unsigned int) var_0)) : (var_2))))))));
    var_26 = ((/* implicit */int) ((var_17) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (-(4291364721718977117ULL)))) ? (var_0) : ((-(var_4))))))));
}
