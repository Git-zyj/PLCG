/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200835
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((var_1), (((/* implicit */int) arr_6 [16] [(short)2]))))))) ? (max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27794)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (unsigned short)65531))))) || (((/* implicit */_Bool) arr_0 [i_1] [i_2 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_11 [i_3] [i_1] [i_2 + 1] [i_3] [i_4] = ((/* implicit */unsigned int) min((arr_5 [i_0 + 1] [i_0 + 1] [i_0] [i_0]), (((/* implicit */int) (unsigned short)17))));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4] = min(((unsigned short)4), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_2 [i_0 - 1] [i_3])))) || (((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_6 [i_4] [i_1])))))))));
                                arr_13 [i_0 + 2] [13ULL] [(unsigned short)16] [i_3] [i_3] [13ULL] [13ULL] = (!(((((((/* implicit */_Bool) arr_5 [i_4] [(short)8] [(short)8] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 1] [7U]))) : (3248949025972043053LL))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (-2147483643) : (((/* implicit */int) (unsigned short)32767))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0 + 2] [i_0 + 2] [i_2 + 1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (arr_4 [i_0] [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_10)) : (var_13))))))));
                    var_18 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_11) : (3248949025972043047LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)17726))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_3 [i_0 + 2] [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_1)))) : (var_5))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_8)))))));
}
