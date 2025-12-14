/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210102
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
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) var_12)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((arr_3 [i_0] [i_1] [i_2]) ? (((/* implicit */int) arr_2 [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_2] [i_0] [i_0] [i_2] = ((/* implicit */short) min((arr_5 [8U]), (((/* implicit */unsigned int) arr_2 [i_0] [i_1] [(_Bool)1]))));
                                var_20 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) arr_8 [i_0] [i_1] [i_2] [i_3] [i_4])));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((10792985330019402101ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_3] [i_1] [i_0]))))))) ? (max((((((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [i_2])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_4]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) < (2728168171U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7653758743690149514ULL)))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) < (((/* implicit */int) arr_3 [i_0] [i_1] [(_Bool)1])))))))) <= (arr_1 [i_2] [(short)13]))))));
                    var_23 ^= ((/* implicit */_Bool) (+((+(((((/* implicit */_Bool) 10792985330019402095ULL)) ? (((/* implicit */int) (short)-30244)) : (((/* implicit */int) (unsigned short)13))))))));
                }
            } 
        } 
    } 
}
