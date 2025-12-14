/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32436
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
    var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_11))))))) ? (((/* implicit */int) (short)-27246)) : (((/* implicit */int) (unsigned short)10279))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_15))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8815996127380527054LL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (((((/* implicit */_Bool) (short)27237)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_17))))) : (var_16))))))));
                    var_21 = ((/* implicit */signed char) var_15);
                    var_22 = ((/* implicit */unsigned char) var_10);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) -8891125798451415636LL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) (~(var_3)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
