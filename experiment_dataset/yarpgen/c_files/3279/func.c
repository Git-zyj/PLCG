/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3279
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1088763534)) ? (arr_2 [i_0]) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_4))))) : ((+(var_7))))))));
                                arr_14 [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) 1824414341)), ((~(((var_7) + (((/* implicit */long long int) 1824414341))))))));
                                arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] = ((((/* implicit */int) (unsigned char)34)) % ((~((~(((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_0] [i_0])) ? ((+(arr_12 [i_1] [i_1]))) : (((int) (signed char)-46))))));
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned int) min((1375850462), (arr_12 [i_1] [i_1])))) : ((+(arr_13 [i_0] [i_1] [i_1] [i_1] [i_0])))));
                arr_17 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_1] [i_1]);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((var_4) ? (((/* implicit */int) var_8)) : (((min((1824414322), (((/* implicit */int) var_4)))) % (-1824414341)))));
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) var_2))))), (var_0)));
    var_15 = ((/* implicit */unsigned short) var_10);
    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_0))))))) | (((/* implicit */int) var_2))));
}
