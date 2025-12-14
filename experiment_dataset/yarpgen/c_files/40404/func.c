/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40404
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20980)) ? (((/* implicit */int) (short)19104)) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_10 [i_2] [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) ((unsigned long long int) var_2))));
                            var_12 = ((((/* implicit */_Bool) ((short) min((var_7), (((/* implicit */int) (signed char)33)))))) ? (((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */int) ((unsigned char) (signed char)52))) : (((int) var_6)))) : (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((_Bool) 274877906943LL))))));
                            var_13 = ((/* implicit */unsigned short) ((unsigned char) ((int) (((_Bool)1) ? (-2147483642) : (((/* implicit */int) (unsigned char)247))))));
                            var_14 = ((/* implicit */short) min(((signed char)52), (((/* implicit */signed char) (_Bool)0))));
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-35)))))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (-(4294967295U)))))));
            }
        } 
    } 
}
