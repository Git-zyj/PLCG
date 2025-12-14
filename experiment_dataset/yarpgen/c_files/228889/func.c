/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228889
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */int) (unsigned short)65535);
                            arr_13 [i_0] [(unsigned short)0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_11 [i_3] [i_2] [i_1] [i_1] [i_0] [(unsigned short)1])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_4)))) * (((/* implicit */int) ((1443624262) >= (1443624266))))));
                            arr_14 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((-759678791) | (((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) arr_3 [i_2] [i_3]))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_4 = 1; i_4 < 14; i_4 += 4) 
                            {
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_14)));
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_16 [i_2] [i_1] [i_4 - 1] [i_4 - 1] [i_0])) : (((/* implicit */int) var_10)))))));
                            }
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) -7044233595210988082LL)) || (((/* implicit */_Bool) (short)-19090))));
                var_20 = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((((((((/* implicit */int) arr_16 [i_1] [(unsigned short)6] [i_1] [i_0] [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_16 [(unsigned short)1] [i_1] [i_1] [i_1] [i_1])) + (3034))))) | (max((((/* implicit */int) (unsigned char)75)), (((((/* implicit */_Bool) (short)-25170)) ? (((/* implicit */int) arr_12 [(short)11] [(short)11] [(unsigned short)8] [i_1])) : (1443624262)))))))) : (((/* implicit */unsigned short) ((((((((/* implicit */int) arr_16 [i_1] [(unsigned short)6] [i_1] [i_0] [i_1])) + (2147483647))) >> (((((((/* implicit */int) arr_16 [(unsigned short)1] [i_1] [i_1] [i_1] [i_1])) + (3034))) + (349))))) | (max((((/* implicit */int) (unsigned char)75)), (((((/* implicit */_Bool) (short)-25170)) ? (((/* implicit */int) arr_12 [(short)11] [(short)11] [(unsigned short)8] [i_1])) : (1443624262))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) >= (var_14))))))) ? ((+((~(-4))))) : ((+(((/* implicit */int) (short)7168))))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned short)39022))));
}
