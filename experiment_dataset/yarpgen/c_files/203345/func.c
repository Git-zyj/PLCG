/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203345
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 3] [i_1 + 2] [i_0])) ? (((/* implicit */long long int) var_2)) : (-4977594457755981994LL)))) ? (arr_2 [i_1 + 1]) : (4977594457755982002LL))) >= (max((max((((/* implicit */long long int) var_12)), (-4977594457755981982LL))), (((/* implicit */long long int) max((var_3), (((/* implicit */int) var_11)))))))));
                arr_6 [9ULL] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((min((arr_2 [i_0]), (((/* implicit */long long int) var_2)))) << ((((~(var_1))) - (890192940330144643LL)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) -4977594457755981992LL);
    var_17 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 4977594457755981999LL)))) ? (((((/* implicit */int) var_4)) + (((/* implicit */int) var_11)))) : (((/* implicit */int) max((var_6), (var_0))))))) > (((((/* implicit */unsigned long long int) var_2)) & (var_13)))));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((unsigned long long int) var_13)) : (((unsigned long long int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (short)8982)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)50261), (((/* implicit */unsigned short) var_14)))))) : (max((((/* implicit */unsigned long long int) var_2)), (var_13))))))))));
}
