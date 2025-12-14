/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19737
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
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (16528522125747541331ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (var_3))))))), (var_3)));
    var_19 *= ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_20 = (!(((/* implicit */_Bool) (-(6470717069350316213ULL)))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [i_2] [i_2] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_9)))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6470717069350316209ULL)) ? (var_7) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) arr_8 [i_0] [i_0 - 4] [i_4 - 1] [i_4 + 2])) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 3] [i_4 + 2] [i_4 + 3])) ? (((/* implicit */int) arr_8 [i_0 - 3] [i_0 + 1] [i_4 - 1] [i_4 + 1])) : (((/* implicit */int) arr_8 [i_0] [i_0 - 4] [i_4 + 2] [i_4 - 1]))))));
                                arr_15 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) var_1);
                                var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 11976027004359235402ULL)) || (((/* implicit */_Bool) (signed char)(-127 - 1))))) || (((/* implicit */_Bool) (unsigned char)15))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
