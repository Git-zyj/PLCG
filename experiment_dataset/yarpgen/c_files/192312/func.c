/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192312
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
    var_12 = ((/* implicit */short) ((((/* implicit */int) var_4)) > ((-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_9)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [(unsigned char)16] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) min((arr_13 [i_1] [7] [7] [7] [i_4 - 2]), (arr_13 [i_0 - 2] [i_3] [i_3] [i_4] [i_4 + 2])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_2] [i_4 - 2] [i_4 - 1] [i_4] [i_4 - 1])) : (((/* implicit */int) arr_13 [i_3] [i_3] [i_3] [i_3] [i_4 - 1])))));
                                var_13 = ((/* implicit */_Bool) arr_0 [i_4]);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_11);
    var_15 = ((/* implicit */signed char) max((269231583U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4025735713U)) ? (4025735712U) : (4025735712U)))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)4064)))))));
}
