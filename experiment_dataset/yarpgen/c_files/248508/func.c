/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248508
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [(_Bool)1] [i_3] [i_3] &= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_4])) < (max((-15), (2147483647)))));
                                arr_13 [i_2] [i_3] [(unsigned char)10] [i_1 - 1] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_1] [i_1 - 1]))))), (((/* implicit */unsigned int) ((25) / (var_11))))));
                                var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1610130962)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)142))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_13) > (((/* implicit */int) var_0)))))) : (((var_4) >> (((var_8) - (1458670001U))))))), (var_8)));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) 50);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_8))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967286U))))))));
}
