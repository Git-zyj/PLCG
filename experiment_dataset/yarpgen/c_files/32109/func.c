/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32109
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_13))))) ? (min((var_11), (((/* implicit */unsigned long long int) var_5)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_7)))));
                    var_15 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6)))) : (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))), (max((((/* implicit */unsigned long long int) var_2)), (var_7)))));
                    var_16 *= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((unsigned int) var_13)) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_2)))))))) > (var_11));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        for (signed char i_7 = 3; i_7 < 19; i_7 += 2) 
                        {
                            {
                                arr_22 [i_3] [i_4] [i_4] [i_3] [i_7] = ((/* implicit */signed char) ((unsigned long long int) ((_Bool) var_2)));
                                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_10) / (((/* implicit */long long int) ((unsigned int) var_6))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_8 = 2; i_8 < 20; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-113)))))))), (var_1)));
                            var_19 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) max((var_7), (var_11)))) && (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_12)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
