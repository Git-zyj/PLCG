/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249041
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
    var_18 *= ((/* implicit */unsigned char) (signed char)102);
    var_19 = ((/* implicit */_Bool) (signed char)84);
    var_20 = ((/* implicit */_Bool) (~(4294967289U)));
    var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)11666))) | (7U)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) var_2);
                var_23 *= ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) var_2)) ? (arr_2 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)64142)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)102))))))), (((/* implicit */unsigned long long int) 7U))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) (+(((arr_0 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((arr_9 [i_0] [i_0] [i_0] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                                var_25 -= ((/* implicit */unsigned int) (_Bool)1);
                                var_26 = ((/* implicit */unsigned long long int) 8U);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 15; i_7 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) var_10);
                                var_28 = ((/* implicit */unsigned int) (_Bool)0);
                                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_1] [i_7 - 2] [i_7] [i_7] [(_Bool)1] [i_1])) && (((/* implicit */_Bool) ((int) arr_18 [i_1] [i_7 - 2] [3] [i_7] [i_7] [i_1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
