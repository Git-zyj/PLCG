/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211949
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
    var_11 = ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */_Bool) ((((var_10) == (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2])))) ? (((/* implicit */long long int) (~(arr_6 [i_2] [i_1] [i_0])))) : (min((((/* implicit */long long int) -1)), (var_4)))));
                    arr_7 [i_0] [7] [6] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [0LL])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_2))))) ? (min((var_3), (((/* implicit */unsigned int) -1)))) : (((/* implicit */unsigned int) 1663586534))));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))), (var_7)))) - (((((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) (short)1020))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_5 [i_0] [i_0] [i_1] [i_2]) : (arr_5 [i_0] [i_1] [i_0] [i_2])))) : (6762456688253455474ULL)))));
                    arr_8 [(unsigned short)9] [i_0] [6LL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(var_6)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_2] [i_0]))))) : (max((((unsigned long long int) 1476809385U)), (((/* implicit */unsigned long long int) (unsigned short)41814))))));
                }
            } 
        } 
    } 
    var_14 *= ((/* implicit */short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) -217688377)) / (var_8)))), (min((((/* implicit */unsigned long long int) (unsigned short)48033)), (var_6))))), (min((var_10), (((/* implicit */unsigned long long int) var_0))))));
    var_15 = ((/* implicit */int) ((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 6775114223591302836ULL))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2818157892U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) < (((/* implicit */int) (!(var_1))))))))));
    var_16 += ((/* implicit */_Bool) 6628666737943321956ULL);
}
