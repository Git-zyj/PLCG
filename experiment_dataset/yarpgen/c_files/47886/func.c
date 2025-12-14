/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47886
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) var_0);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)52560)))), (((/* implicit */int) (signed char)125))))));
                                var_18 += ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775798LL))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-25004))) ^ (var_16)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))) : (((unsigned int) arr_5 [i_0] [i_1] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            {
                arr_23 [i_6] = ((/* implicit */long long int) (short)-24994);
                /* LoopNest 3 */
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            {
                                var_20 *= (!(((/* implicit */_Bool) var_10)));
                                arr_32 [i_6] [i_6] [i_9] [i_6] [5LL] [5LL] = ((/* implicit */long long int) ((unsigned int) var_0));
                            }
                        } 
                    } 
                } 
                var_21 -= ((/* implicit */_Bool) max((((/* implicit */long long int) 0)), (-1279998857408139452LL)));
                arr_33 [i_5] [i_6] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_4 [i_5] [i_6] [i_6])) : (var_13))));
            }
        } 
    } 
}
