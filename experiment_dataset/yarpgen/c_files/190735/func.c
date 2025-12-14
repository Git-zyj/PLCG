/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190735
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
    var_18 = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) (short)31338)))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((var_17) == (var_15)))) <= (((int) var_6)))))) - (((unsigned long long int) ((unsigned long long int) (short)-31316)))));
    var_20 = ((/* implicit */_Bool) (+(((((/* implicit */int) ((short) var_7))) & ((~(((/* implicit */int) (short)-31338))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_21 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_2] [i_0] [i_1]))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_9))))))))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) (+(((long long int) (!(((/* implicit */_Bool) (short)31314)))))));
                    arr_9 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) 18139986))))) >= ((-(((/* implicit */int) arr_5 [i_0])))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */int) var_8)) >> (((((/* implicit */int) (short)31320)) - (31290))))) >= (((/* implicit */int) ((short) var_0)))))) & ((+(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned short)59157)))))))));
}
