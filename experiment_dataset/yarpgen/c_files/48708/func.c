/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48708
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
    var_17 = ((/* implicit */short) var_4);
    var_18 = min((((((((/* implicit */_Bool) 1637586513U)) ? (((/* implicit */long long int) var_4)) : (var_7))) > (((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (2657380782U)))))), ((!(var_10))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = min((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (2235248603U)))) && (((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) (short)-1)))))))), ((+((~(((/* implicit */int) (short)1)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) max((var_20), ((-(((((((/* implicit */_Bool) var_9)) ? (var_11) : (var_7))) + (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))))));
                                arr_13 [i_0] [i_1] [i_2] [14LL] [i_4] [(short)19] [i_0] = ((/* implicit */int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)22)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), (var_11))), (((/* implicit */long long int) max(((-(((/* implicit */int) (short)30546)))), (((int) (-9223372036854775807LL - 1LL))))))));
                                var_21 = ((/* implicit */short) (unsigned char)176);
                                arr_14 [i_4] [i_4] [i_0] [i_2] [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 2657380782U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1))) : (2657380782U)));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) min((((((/* implicit */int) (!(((/* implicit */_Bool) -2147483638))))) >= ((~(((/* implicit */int) (short)-24972)))))), (((3522939154U) != (((/* implicit */unsigned int) 0)))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0] [i_0]))) : (min((min((arr_7 [i_1] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_11)))), (max((((/* implicit */unsigned long long int) var_4)), (arr_9 [i_0] [i_1] [i_0] [i_1] [(_Bool)1])))))));
            }
        } 
    } 
}
