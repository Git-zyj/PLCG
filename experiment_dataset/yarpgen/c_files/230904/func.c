/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230904
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned int i_3 = 4; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [(_Bool)1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_13 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 1] [i_0 - 2])))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_8 [6U] [i_1] [i_1] [i_1])))))))));
                                var_20 += max(((-(((unsigned long long int) (_Bool)0)))), (max((((/* implicit */unsigned long long int) 1190260864U)), (17906760646698710711ULL))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-15299))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (max((1581971297U), (((/* implicit */unsigned int) (short)-15318))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)15300)) > (var_7))) ? (((/* implicit */int) max((arr_2 [i_1]), ((short)15318)))) : (((/* implicit */int) var_10))))) : (2712995999U))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_8))));
}
