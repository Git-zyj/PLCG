/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225485
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
    var_13 = ((/* implicit */unsigned char) (((-(((/* implicit */int) min((var_6), (((/* implicit */unsigned char) var_10))))))) | (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_7)) : (var_2)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [2U] [i_0] |= ((/* implicit */unsigned int) (unsigned short)1514);
                            var_14 = ((/* implicit */unsigned short) ((int) max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1514))) | (arr_1 [i_0]))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) var_0)))), (((/* implicit */int) (short)-2991))));
            }
        } 
    } 
}
