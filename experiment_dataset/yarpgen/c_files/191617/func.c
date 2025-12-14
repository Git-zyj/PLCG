/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191617
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)182))));
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_0))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                arr_14 [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(var_13)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */int) var_7)))))) : (min(((-(((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))))))));
                var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-80)), ((unsigned char)70)))), ((((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_10))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        {
                            arr_23 [i_2] [i_3] [10] [i_5] &= ((/* implicit */unsigned int) var_8);
                            arr_24 [i_2] [i_2] [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned long long int) (-((+((-(((/* implicit */int) var_0))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((/* implicit */int) (!((!(((/* implicit */_Bool) var_3))))))), (max((((/* implicit */int) var_2)), ((+(((/* implicit */int) var_2)))))))))));
            }
        } 
    } 
}
