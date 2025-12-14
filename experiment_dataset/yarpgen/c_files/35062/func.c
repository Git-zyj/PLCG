/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35062
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) (unsigned char)0))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255)))) : ((~(arr_5 [i_1] [i_1 - 1])))));
                                var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)6))));
                                var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)250)) >> (((arr_5 [i_0] [i_1 - 1]) + (2064709371)))))), (((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [15ULL])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) + (((((/* implicit */_Bool) var_2)) ? (14505659171627668331ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                                var_20 -= ((/* implicit */unsigned int) (((~((~(((/* implicit */int) (unsigned char)242)))))) >> (((((((/* implicit */_Bool) (unsigned char)179)) ? ((((_Bool)1) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) : (max((((/* implicit */unsigned long long int) -1925605255)), (var_5))))) - (11383299555674612589ULL)))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [7ULL] [i_1 - 1] [7ULL] [i_1 - 1] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1]))))) & (((((/* implicit */_Bool) 1450613739)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_11)))));
                var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 1674610004U)), (576460752303357952ULL)));
            }
        } 
    } 
    var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */int) var_1)) << (((((/* implicit */int) var_1)) - (80)))))));
}
