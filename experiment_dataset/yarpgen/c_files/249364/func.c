/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249364
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
    for (unsigned char i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_2 + 1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) arr_7 [i_0 - 3] [i_0 + 1] [i_2 - 3]))), ((-(((/* implicit */int) arr_4 [i_0 - 3] [i_0 - 2]))))));
                    var_18 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) arr_7 [i_0 - 3] [i_0 - 3] [i_2])) : ((~(((/* implicit */int) max((((/* implicit */short) arr_7 [i_0 - 2] [i_0 - 2] [i_2])), ((short)(-32767 - 1)))))))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((signed char) arr_1 [(unsigned char)11] [i_1])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_11);
    var_21 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (int i_4 = 4; i_4 < 10; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) -3513647510984887312LL);
                    var_23 = var_0;
                    arr_18 [i_3] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 + 1]))) - (arr_0 [i_4 - 2] [i_4 - 3])))));
                }
            } 
        } 
    } 
}
