/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23481
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
    var_18 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_10)) - (663)))))) : (771957189477862342ULL))), ((+(11913320247505051824ULL)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (var_4)))) & (max((6533423826204499786ULL), (11913320247505051836ULL))))));
                            var_20 = ((/* implicit */unsigned short) ((unsigned long long int) 11913320247505051830ULL));
                            arr_10 [i_0] [i_2] [(_Bool)0] [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_2 - 1])))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_1] [i_0])), (var_12)))) ^ (((arr_6 [i_1] [i_1]) ? (var_16) : (((/* implicit */int) arr_6 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_15) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))))) ? (((/* implicit */int) ((var_16) >= (var_4)))) : (max((((/* implicit */int) (unsigned char)1)), (var_1)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-11505))))) : (max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) (unsigned short)28962)) ? (((/* implicit */unsigned long long int) var_6)) : (var_0)))))));
}
