/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47021
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_14 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [2LL] [i_2] [i_2]))));
                    var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (signed char)36))));
                    var_16 = ((/* implicit */short) ((signed char) var_1));
                }
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_8 [i_0]), (((/* implicit */unsigned char) (signed char)-15))))) ? (min((((/* implicit */unsigned int) (short)-21085)), (((unsigned int) (short)21092)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37)))));
                            arr_14 [i_3] |= (+(((((/* implicit */_Bool) (signed char)36)) ? ((~(-1))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = var_6;
}
