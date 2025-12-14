/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241509
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
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-65))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2 - 2] [i_2 + 3] = ((/* implicit */unsigned long long int) var_11);
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((unsigned char) 536608768U))) ? (((/* implicit */int) (short)32735)) : (((/* implicit */int) (!(arr_0 [i_2]))))))));
                    var_20 = ((/* implicit */unsigned short) (short)32712);
                    arr_11 [i_2 + 1] [i_0] = var_13;
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (var_18))), (((/* implicit */unsigned long long int) var_3)))) >> (((/* implicit */int) var_16))));
    var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) 4397645353438608652LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51))) : (4040369766U)))));
    var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_5), ((unsigned char)88))))))) ? (((/* implicit */int) var_16)) : ((~(((/* implicit */int) (short)-32738))))));
}
