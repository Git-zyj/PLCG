/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3068
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
    var_13 = min((1306394419U), (((/* implicit */unsigned int) var_11)));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((((/* implicit */int) var_2)) ^ (((/* implicit */int) (_Bool)1))))))) % (var_10)));
    var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)0)) : (473867641)));
    var_16 = ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) (_Bool)1)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                {
                    arr_8 [(short)7] [i_1 - 1] [i_2] = ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))) >> (((1306394419U) - (1306394415U))))) % (((/* implicit */int) (_Bool)1)));
                    var_17 = ((/* implicit */unsigned int) ((((_Bool) ((3) / (((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (18446744073709551608ULL)));
                    arr_9 [i_2] [(short)8] [8ULL] [i_0] = ((var_5) >> (((/* implicit */int) (unsigned char)14)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_2))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_10);
                                arr_18 [i_0] [i_1 + 1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (_Bool)1))))))));
                                arr_19 [i_0] [i_1] [i_2 - 2] [i_1] [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
