/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241292
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
    var_13 = ((/* implicit */signed char) var_1);
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 420603338468697646ULL)) ? (((/* implicit */unsigned int) 58720256)) : (min((((/* implicit */unsigned int) 58720256)), (max((((/* implicit */unsigned int) 58720256)), (4231244200U))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_1 - 1])), ((+(((/* implicit */int) ((signed char) arr_3 [i_2] [i_0])))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 4; i_3 < 21; i_3 += 3) 
                    {
                        var_15 -= ((/* implicit */signed char) max((((/* implicit */long long int) ((int) (_Bool)1))), (((arr_5 [i_1] [i_1 - 1] [i_1]) - (((/* implicit */long long int) var_5))))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-66)) / (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        arr_17 [i_1] [(short)18] [(short)18] &= (+(((/* implicit */int) min(((short)28532), ((short)5)))));
                        arr_18 [i_0] [i_1] [i_1] [i_0] [(unsigned char)10] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5622)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)108))));
                    }
                    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 2) 
                    {
                        arr_22 [i_0] [i_1] [(unsigned short)7] [i_0] [i_0] [i_5 - 1] = ((/* implicit */unsigned short) (signed char)108);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned int) 58720256);
                            arr_27 [(short)14] [15U] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_23 [i_0 - 2]))));
                            arr_28 [i_0] = ((/* implicit */unsigned int) (short)-17548);
                        }
                        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-20))));
                    }
                }
            } 
        } 
    } 
}
