/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236103
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_3))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_13 += ((/* implicit */long long int) var_3);
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) var_11);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((var_3) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (unsigned char)132)))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)19393))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)132))))));
                                arr_15 [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)124)) ? (max(((-(((/* implicit */int) (signed char)-5)))), (((/* implicit */int) (unsigned char)124)))) : (((/* implicit */int) ((unsigned char) (unsigned char)120)))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */_Bool) var_0);
            }
        } 
    } 
    var_15 = ((((/* implicit */int) (unsigned short)46142)) >= (((/* implicit */int) (unsigned short)19393)));
}
