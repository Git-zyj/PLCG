/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201108
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
    var_14 = ((/* implicit */_Bool) var_0);
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))), (var_6)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(2660453456919659549LL)))) ? (((/* implicit */unsigned int) min(((-(305412812))), (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2546272734U)) ? (((/* implicit */int) (short)-15612)) : (((/* implicit */int) (signed char)-15))))) : (min((2546272752U), (((/* implicit */unsigned int) (unsigned short)55070)))))))))));
                    arr_8 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */short) max((min((((/* implicit */int) (signed char)15)), (((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_2)) - (165))))))), (((((/* implicit */_Bool) var_8)) ? (max((var_9), (((/* implicit */int) (signed char)15)))) : (((/* implicit */int) var_0))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */unsigned int) max((var_8), (((/* implicit */int) var_4))))) : (min((((/* implicit */unsigned int) var_2)), (var_7))))), (((/* implicit */unsigned int) ((var_8) != (((/* implicit */int) (signed char)15)))))));
                                var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2546272734U)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_2] [i_0] [i_0] [(signed char)10] [i_0] = ((/* implicit */unsigned char) (unsigned short)51096);
                                var_19 += ((/* implicit */unsigned char) -2055780507708290016LL);
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) -1628514088626377412LL))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_9), (((/* implicit */int) (unsigned short)48634))))) ? (((/* implicit */unsigned long long int) (-(var_12)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (255) : (var_10)))) : (var_6)))));
                }
            } 
        } 
    } 
    var_22 -= ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (var_11)))) << (((var_8) + (20688506))));
}
