/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213596
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
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) arr_3 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) max((min((((/* implicit */unsigned char) (signed char)29)), ((unsigned char)240))), (max((arr_0 [i_0]), (((/* implicit */unsigned char) (signed char)0)))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4153544087U)) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)3), ((short)-1))))) : (((arr_7 [i_1] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16)))))))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_4 = 1; i_4 < 17; i_4 += 3) /* same iter space */
                    {
                        var_17 *= ((/* implicit */unsigned char) (~((-(((/* implicit */int) (unsigned char)233))))));
                        var_18 -= ((((/* implicit */_Bool) max((81366227U), (141423209U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [10] [i_3 - 1] [i_4 - 1]))))) : (((((((/* implicit */int) arr_2 [i_1 + 3] [i_3 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_1 + 3] [i_3 - 1])) + (6772))))));
                        arr_18 [i_1 - 1] [i_2] [(unsigned short)0] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) ? (4153544087U) : (141423218U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -742491443)))))))) + (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (4118203355870139972ULL))) - (((/* implicit */unsigned long long int) var_0))))));
                        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
                    }
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 17; i_5 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1 - 1] [8ULL] [i_1 + 3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_13 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 1]))))));
                        arr_21 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (+((~(((/* implicit */int) (_Bool)1))))));
                    }
                    var_21 *= ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_15 [i_1] [i_1])))) || (((/* implicit */_Bool) ((17433020821523242649ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))))))))), (max((var_8), (arr_11 [(short)12] [i_1 + 1])))));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))) % (7674381571747643653ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-28137))))) : ((~(((/* implicit */int) var_12))))))) < (max((((/* implicit */unsigned int) ((520093696) * (((/* implicit */int) (signed char)-1))))), (min((var_13), (((/* implicit */unsigned int) (signed char)123))))))));
    }
}
