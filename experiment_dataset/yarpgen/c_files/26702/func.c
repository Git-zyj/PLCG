/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26702
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
    var_20 = ((/* implicit */unsigned short) min((var_3), (var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */long long int) 127024481U)) + (var_18))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-79)) < (((/* implicit */int) var_3)))))))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))) - (11340396994097306190ULL))) >> (((((/* implicit */int) ((unsigned short) var_1))) - (103)))))) ? (((((/* implicit */_Bool) (signed char)125)) ? (718970498U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                                var_23 = ((/* implicit */unsigned short) -2159972000585462777LL);
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] &= ((/* implicit */_Bool) var_14);
                    arr_13 [i_0] = ((/* implicit */unsigned short) var_2);
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((long long int) (signed char)-126);
                }
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((4236952033U) >= (var_19))))))) ? (min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)48))))), (7952112484846811470LL))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0]) == (((/* implicit */int) ((2159972000585462777LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-102)))))))))))))));
                var_25 *= ((/* implicit */unsigned long long int) (signed char)-1);
                /* LoopNest 3 */
                for (short i_5 = 2; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7] [i_7 + 1] [i_7 - 3])) ? (((/* implicit */int) (unsigned short)25669)) : (((/* implicit */int) arr_9 [i_7] [i_7] [i_7 + 1] [i_7 + 1] [i_7]))))), (((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7 - 1] [i_7 + 1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_7 + 1] [i_7]))) : (2159972000585462777LL)))));
                                arr_22 [i_7] [i_6] [i_5 - 2] [i_7] = ((/* implicit */unsigned short) 12761588429965018242ULL);
                                var_27 |= ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])))))) : (arr_21 [i_1] [i_1] [i_5 - 2] [i_0] [i_0] [i_6] [i_0])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((var_17), (((/* implicit */int) (unsigned short)163))))) * (((long long int) var_3))))) ? (((/* implicit */int) (signed char)-126)) : (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)44995)))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_12)) : (var_6))))))))));
    var_29 = ((/* implicit */unsigned long long int) var_2);
    var_30 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 134152192)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((unsigned long long int) (unsigned short)55933))))));
}
