/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196655
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
    var_10 = ((/* implicit */long long int) min(((-(var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (unsigned short)13187)) ? (587119102U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) | (arr_2 [i_1] [i_2] [i_2])))))) / (((((arr_2 [i_0] [i_0] [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_3]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))));
                            var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((587119102U), (587119102U)))) ? (((/* implicit */int) min((var_6), (min((((/* implicit */unsigned char) (signed char)96)), (arr_3 [i_0] [i_0])))))) : (min(((((_Bool)1) ? (((/* implicit */int) arr_3 [i_3] [i_3])) : (((/* implicit */int) arr_10 [i_3] [i_3] [i_2])))), ((-(((/* implicit */int) arr_5 [i_0]))))))));
                        }
                    } 
                } 
                var_13 *= ((/* implicit */unsigned int) arr_8 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5]);
                var_14 = (-(min((((arr_1 [14U]) + (arr_4 [i_0] [i_1] [i_1] [i_1]))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)70))) / (arr_1 [i_0]))))));
                arr_11 [i_1] [(_Bool)1] [i_1] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_5 [i_0])), ((unsigned char)43)))), ((-(arr_2 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_15 = var_0;
}
