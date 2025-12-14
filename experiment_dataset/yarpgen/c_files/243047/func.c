/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243047
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
    var_11 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((2880521627U), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)175)))))) && (var_8)));
    var_12 = ((/* implicit */unsigned int) max((var_3), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4095))) * (16875782585543876841ULL))))))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) >= (((((/* implicit */_Bool) -6148107693085795258LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-64))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) max((2130716011), (((/* implicit */int) (unsigned char)92))))) && (((/* implicit */_Bool) max((108431852U), (((/* implicit */unsigned int) (unsigned char)164)))))));
                var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0]))))), (3717720395U)));
            }
        } 
    } 
}
