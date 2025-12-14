/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4638
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
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned int) min((8661533971001003911LL), (((/* implicit */long long int) (unsigned char)56)))))), (max((((/* implicit */long long int) (~(4099446010U)))), (var_7)))));
    var_14 -= ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (max((var_1), (((/* implicit */unsigned long long int) var_0)))) : (max((var_3), (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_15 *= (((~(arr_4 [i_1] [i_1 - 3]))) | (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_1 [i_1])) ^ (((/* implicit */int) arr_0 [i_2]))))))));
                    var_16 *= ((/* implicit */unsigned int) (-(max(((+(var_1))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((arr_4 [i_0] [i_1 - 3]), (arr_4 [i_0] [i_1 + 1])))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (-919634210475610622LL) : (var_7)))), (((((/* implicit */_Bool) (unsigned short)35112)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1 - 3] [i_2])))))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */int) var_3);
                }
            } 
        } 
    } 
    var_18 = (-(((/* implicit */int) var_12)));
}
