/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205643
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
    var_17 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) / (var_10)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))), (var_7)));
    var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_11)), (var_13)))) : ((~(var_2)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50206)))));
    var_19 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_3)), (((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) * (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_8))))), (var_8)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_20 += min((((/* implicit */unsigned int) (!(((2862394970U) > (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))), (min((arr_1 [(_Bool)0]), (arr_1 [(short)16]))));
                                var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))), (min((arr_11 [i_0] [i_2] [i_4 + 1] [i_4 - 1] [i_4] [i_0]), (((/* implicit */int) arr_4 [i_0 + 1] [i_4 - 1] [i_4 - 1]))))));
                                var_22 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)50206))))) ? (((1432572325U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1]))))))) * (2862394970U)));
                                var_23 &= ((/* implicit */_Bool) (unsigned short)41459);
                            }
                        } 
                    } 
                    var_24 ^= (~(((/* implicit */int) ((arr_5 [(unsigned char)6] [i_1 - 1] [(unsigned char)6]) != (arr_5 [i_0] [i_1] [(short)12])))));
                }
            } 
        } 
    } 
}
