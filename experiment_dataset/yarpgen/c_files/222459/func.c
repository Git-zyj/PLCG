/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222459
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
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) min(((unsigned char)158), (((/* implicit */unsigned char) (_Bool)1))));
                            arr_11 [i_0] [i_3] = min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */long long int) ((/* implicit */int) var_15))) / (arr_1 [i_1] [i_1]))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] = ((/* implicit */short) (~((-((-(((/* implicit */int) (short)-9033))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) (unsigned char)8);
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) var_7)))))))))));
}
