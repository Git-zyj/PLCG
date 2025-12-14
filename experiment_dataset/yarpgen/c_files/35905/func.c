/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35905
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
    var_19 = ((/* implicit */signed char) min((var_19), ((signed char)66)));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_20 |= 536870911;
                            arr_10 [i_1 + 4] [i_1 + 4] &= ((/* implicit */int) 3043081735U);
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */signed char) ((int) 4124299338U));
                                arr_14 [i_0] = ((/* implicit */short) ((signed char) (short)-28701));
                            }
                            for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                            {
                                var_21 &= ((/* implicit */short) ((unsigned long long int) (unsigned short)6841));
                                arr_17 [i_2] [i_1 - 1] [(_Bool)1] [i_3] [i_5] [i_5] = var_17;
                                var_22 += ((/* implicit */signed char) ((unsigned long long int) 170667961U));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((long long int) 10453068739364351904ULL)))) ? (var_15) : (((((/* implicit */_Bool) ((int) 2189553043U))) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) ((unsigned short) 4124299338U)))))));
                            }
                            var_24 = ((/* implicit */int) 18446744073709551614ULL);
                            arr_18 [i_3] [i_1] [i_2] [i_2] [i_1] [i_0] |= ((/* implicit */long long int) 18446744073709551596ULL);
                        }
                    } 
                } 
                var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 3272397829U)) ? (((((/* implicit */_Bool) 2161657395U)) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) 536870911)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (((((/* implicit */_Bool) 2953626550171989070ULL)) ? (((/* implicit */int) (unsigned short)34554)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (unsigned short)26156)))))));
                var_26 = var_1;
            }
        } 
    } 
}
