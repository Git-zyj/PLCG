/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45671
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
    var_11 = ((/* implicit */unsigned long long int) ((((var_9) < (((/* implicit */long long int) ((((/* implicit */_Bool) -1796549280)) ? (-617914418) : (2147483644)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_9)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */signed char) max((((/* implicit */int) ((617914417) < (((/* implicit */int) var_4))))), ((-(arr_2 [i_0])))));
                    var_13 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_7 [i_0] [i_2])), (var_9)));
                    var_14 |= ((/* implicit */unsigned long long int) ((long long int) var_6));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (arr_4 [i_3])))) ? ((~(arr_4 [i_4]))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (var_1))))));
                var_16 *= ((/* implicit */unsigned char) (-(-2147483645)));
            }
        } 
    } 
}
