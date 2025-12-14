/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205633
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
    var_15 &= ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) (short)13453)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_10 [i_3] [(short)10] = ((/* implicit */unsigned int) (short)-13454);
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_3 [i_0] [14]))));
                            }
                        } 
                    } 
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((2053028207U), (((/* implicit */unsigned int) (signed char)-38))));
                    arr_12 [8] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) % (((((/* implicit */_Bool) (short)-13453)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0] [(_Bool)1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))))) || (((/* implicit */_Bool) (~(var_1))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)13453)), (min((((/* implicit */long long int) (short)-13453)), (var_14)))))) : (min((var_12), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))))));
}
