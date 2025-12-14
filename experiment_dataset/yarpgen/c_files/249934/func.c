/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249934
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
    var_15 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */long long int) var_1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) arr_6 [(_Bool)1] [i_1]);
                                var_17 |= ((/* implicit */unsigned int) (!(((_Bool) ((short) (signed char)(-127 - 1))))));
                                arr_11 [i_3] [i_2 + 1] [(_Bool)1] [i_1] [i_4] [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)-5126), (((/* implicit */short) max(((signed char)-112), ((signed char)112))))))) ? ((+(((((/* implicit */_Bool) 8696364020397950456LL)) ? (arr_4 [i_1] [i_1]) : (6117359952868508285ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (1125899906809856LL) : (((/* implicit */long long int) (+(arr_5 [i_1])))))))));
                                var_18 = arr_7 [i_4] [i_3] [i_1] [i_0 + 2];
                                var_19 |= ((/* implicit */unsigned char) arr_4 [i_2] [i_4]);
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_0 + 2] [i_1] = ((/* implicit */short) (-((+(max((4294967295U), (((/* implicit */unsigned int) (signed char)32))))))));
                var_20 = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_4))));
    var_22 += ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)4)))) ^ (((unsigned long long int) var_3)))) == (((/* implicit */unsigned long long int) var_0))));
    var_23 |= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) 16871693581836131014ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))));
}
