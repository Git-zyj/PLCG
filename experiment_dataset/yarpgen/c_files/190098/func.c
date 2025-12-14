/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190098
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
    var_20 = min(((-(((/* implicit */int) (!(((/* implicit */_Bool) 2097151))))))), ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) var_0);
                arr_4 [i_0] [i_1] = arr_2 [i_0] [i_1] [i_0];
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_22 = ((((var_16) <= (((((/* implicit */int) arr_1 [i_0])) / (var_16))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_3 - 1] [i_3 - 1] [6LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)171)))))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))));
                                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) arr_5 [i_2] [i_3 - 1] [i_1] [i_3 - 1])) / ((-2147483647 - 1)))) : (((/* implicit */int) (unsigned char)66))));
                                arr_15 [(_Bool)1] [i_1] [i_1] [i_2] [i_2] [i_3 - 1] [i_1] = ((-2097152) - (-891926032));
                                arr_16 [i_3] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [4LL])) % (((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [12U] [i_2] [11LL] [i_1])), ((unsigned short)2016))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */unsigned short) var_17);
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) (unsigned short)41272);
}
