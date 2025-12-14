/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48615
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-29101)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-127)))), (((/* implicit */int) ((short) var_3)))))) ? (((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_0 [i_0]))) != (((/* implicit */int) arr_2 [i_0]))))) : ((~(((((/* implicit */int) (signed char)121)) << (((((/* implicit */int) (unsigned char)244)) - (243)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [(short)6] [i_2] = ((/* implicit */signed char) (!((_Bool)1)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)65535))));
                            arr_13 [i_2] [i_3] [i_2] [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(short)0] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (arr_7 [i_0] [i_2] [i_3])))) ? (arr_7 [i_2] [i_2] [i_0]) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (short)14871))))));
                            arr_14 [(unsigned char)7] [i_2] [i_2] [i_2] [(unsigned char)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)9]))) + (arr_7 [i_0] [i_2] [i_2])))) ? (((/* implicit */int) ((unsigned short) arr_1 [(unsigned short)14]))) : (((/* implicit */int) ((short) var_13)))));
                        }
                        arr_15 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((arr_11 [i_2] [i_1] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_3] [i_2])))));
                        var_21 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)65535))));
                    }
                    arr_16 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned short) max((arr_10 [i_0] [i_0] [i_2] [i_2]), (((/* implicit */unsigned int) var_5))))));
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */signed char) var_4)), (arr_5 [i_0] [(short)19] [i_0]))))));
    }
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) var_17)))) : (((/* implicit */int) max((var_12), (((/* implicit */short) var_16)))))))) ? (((/* implicit */int) max((((((/* implicit */int) var_17)) < (((/* implicit */int) var_5)))), (((((/* implicit */int) var_5)) >= (((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((var_8), (var_9)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))))))));
    var_23 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)4957))))), (max((((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))), (((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_1))))));
}
