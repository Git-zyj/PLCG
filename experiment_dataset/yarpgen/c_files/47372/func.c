/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47372
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (var_15)))) != ((-(((/* implicit */int) var_11)))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_6)) : (1580950749)))), (var_17)))));
    var_20 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) >= (min((var_17), (var_5))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (~((+(((long long int) arr_4 [i_0]))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((arr_3 [i_0] [i_0]), (((/* implicit */long long int) 1580950757))))) ? (((/* implicit */unsigned long long int) (+(var_8)))) : (((unsigned long long int) -1580950749))))));
            }
        } 
    } 
}
