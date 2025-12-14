/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47609
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
    var_15 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned short) max(((short)2047), (((/* implicit */short) (!(var_12)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_16 += ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14))) ^ (arr_3 [i_0] [i_1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -169702162)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (short)-27))))) != (min((((/* implicit */long long int) (signed char)37)), (var_9)))))))));
                    arr_8 [(_Bool)1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 169702177))))) << (((((/* implicit */int) (short)14240)) - (14239)))));
                }
            } 
        } 
    } 
    var_17 ^= ((/* implicit */signed char) 0LL);
    var_18 = ((/* implicit */unsigned char) ((short) var_10));
}
