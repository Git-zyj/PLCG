/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235723
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
    var_20 = ((/* implicit */unsigned short) min((min((511U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1663281380)) ? (var_8) : (((/* implicit */int) var_18))))))), (((/* implicit */unsigned int) (-((-(((/* implicit */int) var_6)))))))));
    var_21 = min((((((/* implicit */_Bool) (+(2502488425100621421LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_9))), (((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */long long int) var_3)) : (min((var_9), (((/* implicit */long long int) var_1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((var_9) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)9954))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) var_5);
                        arr_10 [i_0] = (unsigned short)65535;
                    }
                } 
            } 
        } 
    }
}
