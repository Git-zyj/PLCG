/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210934
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (short)20)) ? (((/* implicit */unsigned long long int) -1786836788221685579LL)) : (8899565862244720393ULL))) : (9547178211464831224ULL))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 3241851588U)) != (8899565862244720404ULL)));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (arr_4 [i_0] [i_0])))) || ((!(((/* implicit */_Bool) -8653453214432338316LL))))));
                    var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_2] [i_1 - 3] [i_1 + 1])), (8899565862244720387ULL))) : (((/* implicit */unsigned long long int) (-(3241851588U))))));
                }
            } 
        } 
    } 
}
