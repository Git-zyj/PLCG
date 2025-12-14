/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190344
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
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((long long int) max(((+(((/* implicit */int) var_5)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)25))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_0 + 1])))) / (((unsigned int) 830547078U))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((5275775419883094750LL) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 830547078U)))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-98)) ? (arr_4 [i_0] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) 562949953421311LL))))) ? (830547078U) : (((/* implicit */unsigned int) max((3072), (((/* implicit */int) (signed char)(-127 - 1))))))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))) + (((/* implicit */int) var_6))));
            }
        } 
    } 
    var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */unsigned int) min(((unsigned char)0), (var_4)))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))) + (89379579U))))) : (((unsigned int) ((((/* implicit */_Bool) (unsigned short)65515)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_2))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)208))))), (var_4))))));
}
