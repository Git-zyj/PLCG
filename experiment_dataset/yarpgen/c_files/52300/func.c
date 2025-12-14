/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52300
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
    var_11 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */long long int) arr_3 [i_0] [i_1]))))) ? (((/* implicit */int) arr_3 [i_2] [i_1])) : (((/* implicit */int) min((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */short) arr_3 [i_0] [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_13 *= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_6 [i_4 + 2] [i_4 + 1] [i_4 + 2])) ? (-7445593102031029773LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4 + 2] [i_4 + 1] [i_4 + 1])))))));
                                var_14 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)26882))) % (7445593102031029773LL)))) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)26882)) ? (((/* implicit */int) (unsigned short)42155)) : (((/* implicit */int) (unsigned char)21)))))));
                                var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)1984)), (-2068813997755163009LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30590)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (unsigned short)7148))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 7445593102031029772LL)) ? (((/* implicit */long long int) 418354230U)) : (var_3))) >= (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (286007806U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)178))) % (7445593102031029773LL))) : (((long long int) 5610107705058897291ULL))))));
}
