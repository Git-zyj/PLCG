/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32273
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
    var_12 = ((/* implicit */unsigned long long int) min((var_3), (((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [2U] [i_2] [i_0 - 1])), (var_1))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_2 + 1] [i_1] [i_2 + 1] [i_0 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_2 + 1] [i_3]))));
                                arr_14 [i_2] [i_1] [i_2] [i_3 + 2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)10953)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_11 [i_0] [i_0] [i_0] [i_4] [i_4] [i_0])));
                                var_14 = ((/* implicit */int) (short)-18207);
                                arr_15 [i_0] [i_1] [i_0] [i_3] [(unsigned short)10] |= ((/* implicit */short) ((((_Bool) ((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_3])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_10 [i_0] [i_1] [i_1] [i_3] [i_1] [i_1]) : (((/* implicit */long long int) (+(var_3))))))) : (((unsigned long long int) arr_5 [i_0] [i_0 - 1]))));
                                var_15 += ((/* implicit */_Bool) arr_5 [i_1] [i_1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_16 = ((((/* implicit */int) arr_1 [i_6 + 2] [i_6 + 2])) % (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */int) (short)22861)))));
                                var_17 += ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_2 + 1])))));
                                var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3652))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((arr_2 [i_0]), (var_1)))))) ? (((/* implicit */long long int) (+(((((/* implicit */int) arr_4 [i_6])) - (((/* implicit */int) (short)22861))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) 4294967284U)) : (var_6)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_6))));
}
