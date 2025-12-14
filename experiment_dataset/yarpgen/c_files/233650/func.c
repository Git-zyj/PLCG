/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233650
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [(short)13] = ((/* implicit */int) min((-7134532642177136101LL), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
                var_17 += ((/* implicit */short) min((min((((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) <= (0U)))))), (((6327161091098091842ULL) / (((/* implicit */unsigned long long int) 1356378380))))));
                var_18 += (unsigned char)251;
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (-(max((0ULL), (((/* implicit */unsigned long long int) var_5))))));
    var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (max((18446744073709551613ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_13))))))) : (max(((-(((/* implicit */int) (short)-32766)))), (((((/* implicit */_Bool) 5U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))))));
}
