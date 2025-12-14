/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53178
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2831617200U))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            var_11 = ((/* implicit */unsigned int) ((long long int) (+(2147483632))));
                            arr_15 [i_0] [i_4] [i_2] [i_3] [i_4] [i_4] [i_4 + 1] = ((((/* implicit */_Bool) 8387584U)) ? (-1) : (((/* implicit */int) ((((/* implicit */_Bool) 4286579712U)) || (((/* implicit */_Bool) (unsigned char)37))))));
                            var_12 -= ((/* implicit */long long int) 8387584U);
                        }
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)3705)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_1] [i_1])))));
                        var_13 -= ((/* implicit */long long int) 306765700U);
                    }
                } 
            } 
        } 
    }
    var_14 = ((/* implicit */_Bool) ((long long int) (unsigned short)8436));
    var_15 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            {
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)12288)), (216358512U)))) ? (((/* implicit */long long int) (((-(8387591U))) - (arr_14 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])))) : ((+(min((arr_19 [i_6]), (((/* implicit */long long int) arr_1 [i_5] [(short)2]))))))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)0)) ? (1067376656) : (((/* implicit */int) (short)-3691)))) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (arr_18 [i_5]))))))) ? (443332122U) : (((((/* implicit */_Bool) (~(arr_18 [(unsigned char)16])))) ? (((/* implicit */unsigned int) arr_6 [i_5] [i_5] [i_5])) : (((((/* implicit */_Bool) arr_9 [i_5])) ? (arr_8 [i_6] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1670))))))))))));
            }
        } 
    } 
}
