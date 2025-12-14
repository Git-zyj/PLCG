/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33030
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
    var_13 = ((/* implicit */signed char) 9223372036854775797LL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_14 = var_6;
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_15 -= ((/* implicit */short) min((((((/* implicit */_Bool) (short)16384)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16384))) : (-7090756878227400997LL))), (((/* implicit */long long int) var_7))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) var_1)))))))));
                                var_17 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 58720256LL)) ? (3739553642408429805ULL) : (14545929526600714489ULL))), (((((/* implicit */_Bool) 2239332602909175540LL)) ? (14545929526600714473ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30292)))))));
                                var_18 += ((signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-16)), (var_1)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) -2239332602909175548LL)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)57516))));
                }
                var_20 = ((/* implicit */signed char) -2239332602909175560LL);
            }
        } 
    } 
    var_21 = (~(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2239332602909175534LL)) || (((/* implicit */_Bool) (unsigned short)65003)))))) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)21))) : (-2239332602909175541LL))))));
}
