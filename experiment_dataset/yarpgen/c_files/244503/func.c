/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244503
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_12 -= ((/* implicit */long long int) (+(((((/* implicit */int) (signed char)71)) ^ (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_3]))))));
                            arr_9 [i_0] [i_0] [(signed char)5] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_1 - 1] [i_0 + 3]))));
                            arr_10 [i_0 - 1] [i_1] [i_2] [(signed char)2] &= ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */int) ((signed char) (signed char)-31))), ((~(((/* implicit */int) arr_8 [i_0] [i_1] [i_1 + 1] [i_1 + 1] [i_0] [i_1 + 1]))))));
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (10688945706156447513ULL) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]))));
                arr_12 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? ((+(arr_1 [i_0 - 2]))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)4095))) : (arr_1 [i_0 + 1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned short)63978), (((/* implicit */unsigned short) var_2)))))))) : (((unsigned long long int) arr_22 [i_4] [i_5] [i_7] [i_4]))));
                                var_15 = (-(arr_24 [i_8] [i_7] [i_4] [i_4] [i_5] [i_4] [i_4]));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */short) max((arr_22 [i_4] [i_4] [i_5] [i_5]), (((/* implicit */int) ((((/* implicit */_Bool) 7757798367553104101ULL)) || (((/* implicit */_Bool) (unsigned short)1558)))))));
            }
        } 
    } 
    var_17 -= ((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) (~(((var_1) ? (((/* implicit */int) var_6)) : (1733875065))))))));
}
