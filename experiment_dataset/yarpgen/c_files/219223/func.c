/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219223
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-8107)), (var_13))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */_Bool) ((unsigned short) arr_2 [(short)5]));
                    arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)250)) <= (((/* implicit */int) min(((unsigned char)103), ((unsigned char)152))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_12 [(unsigned short)1] [i_3] [i_3] = ((/* implicit */_Bool) (-(max((min((arr_5 [i_1] [i_2] [i_4]), (((/* implicit */unsigned int) (unsigned char)6)))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)15)) + (((/* implicit */int) (signed char)-33)))))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) max((max((arr_0 [(_Bool)1] [i_1]), (arr_11 [i_3 - 2]))), (((/* implicit */short) (unsigned char)49))))) & (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0])) || (((/* implicit */_Bool) (signed char)108))))), (var_9))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((((/* implicit */_Bool) (+(((var_14) ? (((/* implicit */unsigned int) 8388608)) : (var_12)))))) ? (((((/* implicit */_Bool) 9569863336124914089ULL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) min((((/* implicit */short) var_15)), ((short)9371)))))));
}
