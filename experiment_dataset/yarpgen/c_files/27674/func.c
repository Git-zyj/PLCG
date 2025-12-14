/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27674
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
    var_20 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_18)))) || (((/* implicit */_Bool) var_8))))), (4191468387347198506ULL)));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] = max((((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (signed char)102))))), (max((((/* implicit */int) ((((/* implicit */int) (signed char)118)) == (((/* implicit */int) (unsigned short)55146))))), (((((/* implicit */int) var_7)) & (((/* implicit */int) (short)-32759)))))));
                                arr_16 [i_0] [i_1 + 1] [i_1 - 1] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) ((arr_1 [i_3] [i_3]) << (((((/* implicit */int) (signed char)105)) - (102)))));
                                arr_17 [i_1] [i_1] [i_4] [i_3] [i_1] = ((/* implicit */long long int) var_12);
                                var_22 = ((/* implicit */unsigned short) var_5);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 11; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8918621700890157365ULL)) ? (((/* implicit */int) (short)32767)) : (2147483642)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) : (arr_20 [i_0] [i_1] [i_2] [i_1]))) : (((/* implicit */long long int) max((3390353635U), (((/* implicit */unsigned int) 1641132369))))))))));
                                var_23 = ((/* implicit */short) (((-(max((12ULL), (((/* implicit */unsigned long long int) var_14)))))) >> (((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_1 [i_5] [i_5])) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) var_12)))) : ((-(var_17))))) + (155)))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) (signed char)102);
                    arr_23 [i_0] [i_1] = (signed char)-125;
                }
            } 
        } 
    } 
    var_25 |= ((/* implicit */signed char) (_Bool)1);
}
