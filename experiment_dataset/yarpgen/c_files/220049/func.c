/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220049
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
    for (short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) (unsigned char)242))));
                    var_11 = ((/* implicit */unsigned long long int) (((-(var_0))) == (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) | (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_0 [i_1] [(unsigned char)5])))))))));
                    arr_10 [0] [i_1] [0] [0] = ((short) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-64)) == (((/* implicit */int) (_Bool)1)))))));
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) -1365802769)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)1))));
                }
            } 
        } 
    } 
    var_13 = (((_Bool)1) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (_Bool)1)));
}
