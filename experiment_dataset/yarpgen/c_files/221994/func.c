/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221994
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
                    {
                        var_11 += ((/* implicit */unsigned char) (+(arr_3 [i_0])));
                        var_12 = ((/* implicit */signed char) arr_7 [i_3]);
                        var_13 = ((/* implicit */long long int) arr_3 [i_2]);
                        arr_9 [i_2] = ((/* implicit */signed char) ((unsigned int) var_6));
                        var_14 = ((/* implicit */unsigned char) arr_6 [(short)12] [i_1] [i_1] [i_1]);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)13011)) == (929068314))))))))));
                        var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (((long long int) (unsigned short)52525))))));
                        var_17 = ((/* implicit */unsigned char) (signed char)14);
                        arr_12 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_1))));
                        var_18 = ((/* implicit */unsigned char) arr_2 [i_1] [i_2] [i_4]);
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((arr_7 [i_2]) >> (((-1LL) + (28LL))))))));
                        var_20 -= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -10LL)) ? (((/* implicit */int) (unsigned short)13016)) : (((/* implicit */int) var_7))))) : (arr_1 [i_5]));
                        var_21 = ((/* implicit */signed char) 2562005718429406649LL);
                        arr_15 [i_0] [i_1] = 2562005718429406649LL;
                    }
                    var_22 = var_9;
                }
            } 
        } 
        var_23 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((-6700870221946830419LL) > (((/* implicit */long long int) ((/* implicit */int) var_2))))))) != (((/* implicit */int) ((var_8) <= (((/* implicit */unsigned long long int) -19LL)))))));
    }
    var_24 = ((/* implicit */unsigned int) (short)-1);
}
