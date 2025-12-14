/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243515
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
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24333)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24333)))))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (max((((/* implicit */int) (!((_Bool)1)))), (min((((/* implicit */int) (signed char)10)), (var_14))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [(unsigned char)4] [(unsigned char)4] [i_2] = ((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)));
                    var_17 = ((/* implicit */_Bool) var_12);
                    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-117))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_19 -= ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */signed char) (!(arr_1 [i_2] [i_3])))), (min(((signed char)89), (((/* implicit */signed char) (_Bool)1)))))))));
                                var_20 = max(((~((+(9223372036854775807LL))))), (((/* implicit */long long int) var_5)));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) (short)-7635)) / (((/* implicit */int) (unsigned short)41203)))), (((/* implicit */int) (signed char)20))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_14) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * ((~(var_14))))))));
                }
            } 
        } 
    } 
}
