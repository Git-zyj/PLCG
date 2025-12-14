/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21732
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) (~(var_16)))), (min((var_0), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]))))))));
                    var_17 = (!(((/* implicit */_Bool) (-(min((var_10), (((/* implicit */unsigned long long int) var_5))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 2]))))));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [(signed char)1] [i_3] [(_Bool)0] = ((/* implicit */int) max(((((+(var_2))) - (((arr_3 [i_1] [i_1] [i_1]) ? (2464493292U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))), (((((/* implicit */_Bool) ((var_15) / (((/* implicit */unsigned long long int) var_11))))) ? (((((/* implicit */_Bool) var_10)) ? (956912569U) : (((/* implicit */unsigned int) 859238537)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned short)6] [i_3] [i_4])))))))));
                                arr_16 [i_3] [i_0] [i_0] = var_3;
                                var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) 859238532)) || (((/* implicit */_Bool) 0ULL))))), ((~(((/* implicit */int) var_3))))));
                                var_19 = ((/* implicit */unsigned int) (-(max((arr_9 [i_2 + 1] [i_2 + 1] [i_2 - 2]), (((/* implicit */long long int) arr_0 [(signed char)6] [(signed char)6]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (max((((/* implicit */long long int) var_7)), (-1802116973640782060LL))) : (((/* implicit */long long int) (~(var_16)))))) == (((/* implicit */long long int) ((/* implicit */int) (!((!(var_12)))))))));
    var_21 = ((/* implicit */signed char) var_11);
    var_22 = ((/* implicit */unsigned short) (!((((!(((/* implicit */_Bool) var_2)))) || (((_Bool) var_13))))));
    var_23 = ((/* implicit */signed char) max((((long long int) min((var_15), (((/* implicit */unsigned long long int) var_9))))), (((/* implicit */long long int) ((unsigned char) ((int) var_14))))));
}
