/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220090
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
    var_14 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_15 -= ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
                                arr_12 [i_0] [i_1 + 2] [i_0] [i_1 + 2] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_13))))), (((int) var_0))));
                                arr_13 [i_4] [(_Bool)1] [i_4] [i_0] [11] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) arr_6 [i_0] [i_2] [i_0]))))), (((unsigned int) 1147860711U)))) << (((/* implicit */int) min((((/* implicit */unsigned short) ((1147860711U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))), (var_9))))));
                                var_16 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((long long int) var_4))) ? ((~(((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_4])))) : (-6))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_1] [i_1] [i_2]) ? (((((/* implicit */_Bool) 3147106584U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-11))) : (2187575448828919999LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))) == (var_11)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (2656887938724676335ULL)))) ? (((/* implicit */unsigned int) ((1370358192) >> (((/* implicit */int) (signed char)1))))) : (1147860711U))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (unsigned short)43793)) : (((/* implicit */int) arr_1 [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((((/* implicit */int) arr_3 [i_0])) + (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (var_6)))))) ? (((/* implicit */long long int) ((arr_7 [i_1 + 1] [i_2] [4ULL] [i_2]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_7 [i_1 + 1] [i_1] [i_1] [i_1]))))) : (((((/* implicit */_Bool) (short)12262)) ? (var_0) : (((/* implicit */long long int) var_10))))));
                }
            } 
        } 
    } 
    var_18 ^= max((((((/* implicit */_Bool) 1264859060)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (var_4))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) < (var_3))))) : (max((var_4), (((/* implicit */unsigned long long int) var_7)))))));
    var_19 = var_11;
}
