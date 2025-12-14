/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204682
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((~(4194303LL))))))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1503609063)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (1503609062))))));
    var_13 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) (unsigned char)196)), (1387434768U))), (((/* implicit */unsigned int) (short)0))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2 + 1] [i_2 + 1]))));
                            arr_13 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-100)))))));
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_3] [i_3 - 2] [i_2] = (-(((/* implicit */int) ((((/* implicit */_Bool) 3798962404U)) || (((/* implicit */_Bool) (unsigned short)65535))))));
                        }
                    } 
                } 
                var_15 |= ((/* implicit */short) ((-1503609063) / ((~(((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_0]))))));
            }
        } 
    } 
}
