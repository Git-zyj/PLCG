/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198378
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
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)31362))));
    var_15 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min(((short)31357), ((short)-31362)))) ? (((((/* implicit */_Bool) (short)-31351)) ? (((/* implicit */int) (short)-31374)) : (((/* implicit */int) (short)31382)))) : (((/* implicit */int) min(((short)31374), ((short)31362)))))), ((~((-(((/* implicit */int) (short)31366))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) (short)31382);
                        arr_12 [i_0] [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)31382)) ? (((/* implicit */int) (short)31363)) : (((/* implicit */int) (short)-31375))))));
                        arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)-31365)) ? (((/* implicit */int) (short)-31381)) : (((/* implicit */int) (short)-31375))))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned char) (short)-31378);
        arr_15 [i_0] = ((/* implicit */signed char) (short)-31341);
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (short)31362))))));
    }
    var_16 = (+(((((/* implicit */_Bool) (short)31377)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))));
}
