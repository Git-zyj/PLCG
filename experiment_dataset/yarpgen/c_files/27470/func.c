/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27470
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
    var_13 = ((/* implicit */long long int) var_10);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((-1) * (1839663755)))) > (var_6)))) : (((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) (-(var_11)))))))));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1839663763)))))) : (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(_Bool)1] [i_1 + 1] [i_0 + 1] [i_0 + 1]))) : (var_12)))));
                    var_16 -= ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) 1839663744)))), ((((!(var_3))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)78)) ? (-1839663755) : (((/* implicit */int) (short)-12483)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_2);
    var_18 -= ((((/* implicit */_Bool) (~(var_5)))) ? (((var_5) >> (((var_5) - (2385172783U))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-3694)) + (2147483647))) << (((((min((((/* implicit */int) (unsigned char)38)), (-1839663752))) + (1839663781))) - (29)))))));
}
