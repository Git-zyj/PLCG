/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247485
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_7))))), (((short) var_2)))))) & (((((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [i_1] [i_1] [i_0])))) + (((var_11) * (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                arr_6 [i_1] = ((/* implicit */long long int) ((unsigned char) ((signed char) arr_5 [i_1] [i_1])));
                var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) * (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65532)) ? (arr_5 [i_0] [(unsigned short)14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) || (((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned char) var_8))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_11);
    /* LoopSeq 1 */
    for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) (!(var_10)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 3; i_3 < 16; i_3 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((var_0) & (6U))) : (((unsigned int) 8U))));
            arr_16 [i_3] = ((/* implicit */int) ((signed char) var_15));
        }
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (int i_5 = 1; i_5 < 16; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        arr_24 [i_2] [i_4] [i_5] [i_6] [i_5] [i_2 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28789)) | (((/* implicit */int) var_4))))) ? (((unsigned int) (~(var_11)))) : (((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))))));
                        arr_25 [16ULL] [i_4] [i_5 + 1] = ((((/* implicit */_Bool) ((((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) var_6)) - (1))))) + (((/* implicit */int) (!(var_10))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_12))))));
                    }
                    arr_26 [i_4 + 1] [i_5] = ((/* implicit */signed char) var_6);
                    var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 + 1] [i_4]))) == (((((/* implicit */_Bool) 2460819155U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3))) : (2311654068U)))));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_23 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1])) || (((/* implicit */_Bool) arr_20 [i_2 - 1])))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) arr_20 [i_2 - 1])) - (25325)))))) : (((var_2) ? (arr_23 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (arr_15 [i_2 + 1])))));
    }
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((1834148119U) * (min((5U), (((/* implicit */unsigned int) (unsigned short)39880))))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (max((((/* implicit */unsigned int) var_6)), (31U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    var_23 = ((/* implicit */unsigned int) var_11);
}
