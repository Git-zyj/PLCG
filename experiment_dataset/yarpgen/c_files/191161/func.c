/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191161
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
    var_13 = ((/* implicit */_Bool) ((int) var_5));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -870425489)) ? (((/* implicit */int) (unsigned short)46795)) : (((/* implicit */int) (unsigned short)18726))))), (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1013))) : (176684772U)))))) ? (((/* implicit */int) (short)11838)) : (((/* implicit */int) (short)-11839)))))));
                                arr_14 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2085856362)) ? (2104741543) : (((/* implicit */int) (unsigned short)23145))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) -465850927)) ? (((/* implicit */int) (unsigned char)22)) : (((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_2] [i_0])))))))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_2] &= ((/* implicit */short) ((_Bool) max((((/* implicit */int) arr_6 [i_1])), (((((/* implicit */int) arr_7 [i_1] [i_2] [i_0] [i_1])) + (((/* implicit */int) (unsigned char)126)))))));
                }
            } 
        } 
    } 
}
