/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196690
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
    var_20 |= 1382001038U;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) 536870911U))));
                            arr_9 [i_1] [i_0] = ((/* implicit */_Bool) 3758096385U);
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)7272)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11706))) : (191620020U)))), (max((((/* implicit */long long int) 4103347284U)), (-6412857936445164654LL))))))));
                            arr_10 [10LL] [i_1] [i_2] [i_2] &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 846178589)) ? (260046848) : (-260046868)))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (571569364U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77)))))));
                            var_23 = ((/* implicit */unsigned long long int) 260046833);
                        }
                    } 
                } 
                var_24 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)17464)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)65512))))), (((((/* implicit */_Bool) (short)541)) ? (65535U) : (((/* implicit */unsigned int) 260046871))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)28)));
                arr_11 [i_0] [(short)5] [i_1] = ((/* implicit */unsigned int) max((max(((short)3072), (((/* implicit */short) (signed char)56)))), (((/* implicit */short) (unsigned char)0))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) var_5);
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), ((((_Bool)1) ? (1048575ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-6513500613349510333LL)));
}
