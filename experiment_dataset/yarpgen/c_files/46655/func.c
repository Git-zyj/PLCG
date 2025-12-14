/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46655
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) var_3);
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)224)) <= (((/* implicit */int) (unsigned char)32))))), ((unsigned char)169)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-((-(2706681299U))))))));
                                var_20 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_4)))))), (var_7)));
                                arr_20 [(_Bool)1] [(unsigned short)2] [(_Bool)1] [6] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7)))) ? (min((var_6), (var_6))) : (((/* implicit */int) var_12))))) - (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)18))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68))) : (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                                arr_21 [(unsigned char)1] [i_3] [i_4] [i_2] [(unsigned short)12] = ((/* implicit */unsigned int) ((((/* implicit */int) max(((signed char)-69), (var_9)))) % (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (var_4)))) : (((/* implicit */int) var_1))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) var_8)) : (((int) var_10)))))));
                }
            } 
        } 
    } 
}
