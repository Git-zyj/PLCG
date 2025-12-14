/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232151
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) 2999451590U))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) var_6);
                    var_16 = ((/* implicit */int) var_4);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_17 += ((/* implicit */unsigned short) var_11);
        arr_11 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (short)26069))) == (-8414497179797741774LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4266))) : (min((3961661834U), (((/* implicit */unsigned int) (unsigned short)42609))))))) ? (min((var_11), (((/* implicit */long long int) arr_8 [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    }
    for (int i_4 = 2; i_4 < 20; i_4 += 4) 
    {
        arr_15 [15U] [15U] |= ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) > (((((/* implicit */_Bool) 438375751726934723ULL)) ? (var_10) : (((/* implicit */long long int) 1194422583U)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            var_18 = ((/* implicit */int) var_10);
            arr_18 [i_5] [i_4] [i_5] = ((/* implicit */unsigned short) var_2);
        }
    }
    var_19 = ((/* implicit */long long int) var_6);
}
