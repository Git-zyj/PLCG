/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47023
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
    var_13 = ((/* implicit */unsigned short) ((((var_11) / (((/* implicit */unsigned int) var_12)))) % (var_11)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_13 [i_1] [i_0]))) + (min((((/* implicit */int) (_Bool)0)), (arr_13 [i_0] [i_0])))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) arr_10 [i_4] [i_4] [i_2]))));
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */long long int) ((arr_13 [i_0] [i_4]) / (((((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_2] [i_0] [i_0])) ? (-2) : (((/* implicit */int) arr_1 [i_0 + 2]))))))) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)51))) + (-3677418138329807901LL))))))));
                                var_17 = arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 2];
                                arr_14 [i_0 - 1] [i_0] [i_2] [i_3] [i_4] = arr_13 [i_0] [i_0];
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) ((int) max((1944952167U), (((/* implicit */unsigned int) var_6)))));
                    var_19 = ((/* implicit */int) arr_3 [(_Bool)1]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_0);
    var_21 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-32)) : (((((/* implicit */int) var_2)) / (((/* implicit */int) var_3)))))));
}
