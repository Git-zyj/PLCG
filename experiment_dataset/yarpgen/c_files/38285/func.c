/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38285
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
    var_17 = ((/* implicit */signed char) max((((/* implicit */int) var_7)), (((int) (signed char)-48))));
    var_18 = ((/* implicit */short) (+(var_12)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [8] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */short) (signed char)48)), (max((max((((/* implicit */short) (signed char)-48)), ((short)-1602))), ((short)1626)))));
                    arr_10 [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) (signed char)49))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        for (int i_4 = 4; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] [i_2] [i_3] = ((/* implicit */short) 8141676907086457258ULL);
                                arr_17 [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-44)) && (((/* implicit */_Bool) arr_2 [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_13);
}
