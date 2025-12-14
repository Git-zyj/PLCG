/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208870
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) var_6))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -1)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (-(max((max((((/* implicit */int) var_1)), (-1))), ((+(1))))))))));
                                arr_14 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */int) (unsigned char)58);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_2);
                                arr_21 [9ULL] [i_5] [i_2] [i_5] [i_0] = ((/* implicit */unsigned short) (unsigned char)141);
                            }
                        } 
                    } 
                    var_14 -= ((/* implicit */short) (unsigned char)198);
                }
            } 
        } 
    } 
}
