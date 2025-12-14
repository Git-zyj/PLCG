/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241286
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_4] = ((((/* implicit */int) arr_14 [i_2] [i_1] [(unsigned short)10] [5] [i_0] [i_0 - 1] [i_2])) | (((int) min((((/* implicit */unsigned char) arr_6 [i_1] [i_0] [i_2])), ((unsigned char)38)))));
                                var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_2 [i_0 - 2])))));
                                arr_16 [i_0] [i_0] = ((/* implicit */_Bool) (-(min((var_12), (((/* implicit */int) arr_2 [i_0 - 1]))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((arr_4 [i_0] [(unsigned short)6]) <= (((/* implicit */int) (unsigned short)8363)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) max((var_12), (((/* implicit */int) (_Bool)0))))) : ((~(var_5)))))) ? ((-(((/* implicit */int) var_1)))) : (((((((/* implicit */int) (unsigned short)8363)) != (var_15))) ? (((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */int) (unsigned short)57151)))) : (((((/* implicit */_Bool) (unsigned short)57173)) ? (((/* implicit */int) (unsigned short)57172)) : (var_3)))))));
    var_21 = ((/* implicit */_Bool) var_4);
    var_22 = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */int) var_13)), (var_11))));
}
