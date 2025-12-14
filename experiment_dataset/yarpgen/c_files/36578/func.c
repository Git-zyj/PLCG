/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36578
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
    var_13 |= ((/* implicit */int) (-(var_7)));
    var_14 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) 4016491759U);
                                arr_13 [i_1] [i_2] [(unsigned char)5] = ((5275537451098952966ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))));
                                var_16 += ((/* implicit */unsigned short) (~(var_4)));
                            }
                        } 
                    } 
                    arr_14 [i_2] = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)20357))))))));
                    arr_15 [i_2] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((signed char) 47523146U))) ? (var_2) : (var_6))));
                }
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    arr_18 [i_5] [i_1] = (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)245))))));
                    var_17 = ((/* implicit */short) arr_9 [i_0] [i_5] [i_0] [i_0] [2ULL] [i_5]);
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    arr_21 [i_6] [(signed char)4] [i_6] [i_6] = ((/* implicit */unsigned int) (((((_Bool)1) || (((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [10] [i_1])))) || (((/* implicit */_Bool) (+(var_6))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                arr_30 [i_6] [i_8] [i_8] [i_8] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 32767ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204))) : (278475550U)));
                                var_18 *= ((/* implicit */signed char) ((_Bool) arr_23 [i_8] [i_1] [i_7]));
                                arr_31 [i_6] [i_1] [i_6] = ((/* implicit */unsigned short) ((long long int) ((unsigned int) 13171206622610598643ULL)));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) (+(4036128527U)));
                    var_20 -= ((/* implicit */int) (unsigned short)56121);
                }
                var_21 *= ((/* implicit */unsigned int) 18446744073709551612ULL);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((unsigned int) var_5));
}
