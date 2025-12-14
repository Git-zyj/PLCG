/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224647
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((unsigned char) var_17));
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) ((unsigned int) arr_2 [10ULL] [i_1] [i_2]));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_2] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_12))));
                                var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_2]))) | (var_5)))) < (arr_1 [i_0]))) || (((/* implicit */_Bool) arr_0 [i_0] [i_4]))));
                                var_22 = ((/* implicit */_Bool) var_9);
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */_Bool) var_9);
                }
            } 
        } 
    } 
    var_24 *= ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) (~(var_6))))), (var_16)));
    var_25 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-10))))))))));
                    var_27 += ((/* implicit */unsigned long long int) ((int) ((unsigned char) (short)10)));
                }
            } 
        } 
    } 
}
