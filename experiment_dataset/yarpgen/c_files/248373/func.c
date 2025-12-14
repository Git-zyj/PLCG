/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248373
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
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */long long int) 3737949400U)) | (var_1)))))))));
    var_18 = ((/* implicit */unsigned long long int) ((int) ((unsigned short) var_8)));
    var_19 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_1 + 1]))));
                var_21 = ((/* implicit */_Bool) (unsigned char)227);
                var_22 = ((/* implicit */int) ((unsigned short) max((((((/* implicit */_Bool) arr_4 [15LL] [i_1])) ? (((/* implicit */int) (unsigned short)32994)) : (1294889863))), ((-(((/* implicit */int) (unsigned char)246)))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_14 [i_2] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((short) (+(var_12))));
                                var_23 = ((/* implicit */signed char) (+((~(((((/* implicit */int) arr_4 [i_1] [i_1])) | (1294889863)))))));
                                var_24 = ((/* implicit */short) arr_13 [i_1 + 2] [i_3] [(_Bool)1] [i_3] [(signed char)9] [i_4] [i_4 - 2]);
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */short) var_3);
            }
        } 
    } 
}
