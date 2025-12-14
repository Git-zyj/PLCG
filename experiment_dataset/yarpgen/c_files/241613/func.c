/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241613
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) ((signed char) (_Bool)0)))))));
        var_11 |= ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */int) ((short) (_Bool)1))) + (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (((unsigned short) (unsigned short)20041))))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_8))));
        arr_5 [i_1] = ((/* implicit */int) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    var_13 += (!(((/* implicit */_Bool) (unsigned short)27366)));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 3; i_4 < 8; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 9; i_5 += 2) 
                        {
                            {
                                var_14 -= ((/* implicit */short) (-(((/* implicit */int) var_7))));
                                arr_17 [i_1] [i_2] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */short) arr_11 [i_1] [i_1] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) min(((short)30749), (((/* implicit */short) (unsigned char)255))))))) : (((/* implicit */int) var_1))));
    var_16 = ((/* implicit */unsigned short) ((max((var_8), (((((/* implicit */int) var_6)) == (((/* implicit */int) var_8)))))) ? ((-(3466683652U))) : (((/* implicit */unsigned int) min(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_7)))))));
}
