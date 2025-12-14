/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225054
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
    var_19 = ((/* implicit */int) min((((long long int) ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */long long int) -18)) : (var_6)))), (((/* implicit */long long int) -12))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((int) (signed char)38))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (unsigned char)181;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) var_18);
                            var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 1912673800)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((-9098776812828539400LL) + (9223372036854775807LL))) >> (((var_4) - (1651977189538348430ULL)))))) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) (short)0))))))) : (min((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]))))));
                            arr_21 [(short)0] [(short)0] [(short)0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) 17)) ? (((17) / (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)53383)) && (((/* implicit */_Bool) (short)-30980))))))) : (((/* implicit */int) var_5))));
                        }
                    } 
                } 
                arr_22 [i_0] [4LL] [4LL] |= ((((min((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) ((7) < (((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))))))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 606356188)) : (var_13)))) ? (arr_5 [i_1] [(short)6] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)30971)) << (((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) + (8699796265379839204LL))) - (18LL)))))))) - (3244022819U))));
                var_22 -= ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
            }
        } 
    } 
}
