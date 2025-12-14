/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196603
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_0 + 4] [i_1] [i_2] = ((/* implicit */unsigned long long int) min((arr_2 [i_0 + 3] [i_0 + 1]), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (short)27762)) == (arr_6 [i_1] [i_1])))) <= (((((/* implicit */_Bool) (short)27747)) ? (((/* implicit */int) (short)-27756)) : (arr_6 [i_1] [i_1]))))))));
                    var_18 = ((/* implicit */long long int) (~(((int) (short)27762))));
                }
            } 
        } 
    } 
    var_19 &= ((/* implicit */_Bool) var_15);
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))));
}
