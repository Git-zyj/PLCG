/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49005
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
    var_11 *= ((/* implicit */signed char) var_10);
    var_12 = ((/* implicit */short) var_0);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 -= ((/* implicit */unsigned int) (((+(var_6))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) var_2);
                                var_15 += ((/* implicit */unsigned char) max((((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_2] [i_2])), ((+(((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) min((((/* implicit */short) (signed char)56)), ((short)24433))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) (_Bool)1);
                                var_18 = (!(((/* implicit */_Bool) var_0)));
                                var_19 = ((/* implicit */unsigned int) min((var_19), ((~((~(arr_9 [i_0] [i_0] [i_0])))))));
                                var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 -= ((/* implicit */signed char) var_8);
}
