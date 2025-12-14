/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46410
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+((+((-(((/* implicit */int) arr_0 [i_0] [i_1 + 1]))))))));
                    var_18 = ((/* implicit */unsigned short) min((515382390U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 3424768769268491673ULL)))))));
                }
                var_19 -= ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_7 [(short)12] [(short)12] [(_Bool)1] [(short)12])))), (286318018)));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_17))));
                    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_3] [2U])))))));
                }
                arr_12 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_1 - 1]))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_16);
    var_23 = ((/* implicit */short) (+((~((~(var_2)))))));
}
