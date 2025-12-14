/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199299
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) 4294967295U))))))));
                var_12 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(4294967286U)))), ((-(arr_0 [i_0])))));
                var_13 = ((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) (!(((_Bool) arr_11 [i_4 + 3] [i_1] [i_1] [i_3] [i_1]))));
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_6 [i_0])) + (2147483647))) >> (((((((/* implicit */_Bool) 1205484987)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_2] [i_4]))))) : (((long long int) 1U)))) + (19LL))))))));
                                var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((1U), (4294967295U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28533))) : ((+(-95915333448611082LL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((min(((~(((/* implicit */int) var_11)))), (((/* implicit */int) ((-185900344) <= (((/* implicit */int) (short)-32115))))))) != (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (var_7) : (var_7)))))));
}
