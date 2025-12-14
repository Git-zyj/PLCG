/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46189
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_3))))), (max((var_0), ((signed char)-6)))))) >= (((/* implicit */int) ((((/* implicit */_Bool) min((var_11), ((short)-21743)))) && (((/* implicit */_Bool) max((var_2), (((/* implicit */int) (signed char)-3)))))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [(short)13] [i_2] [i_2] [15] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) (short)21743)))), (((/* implicit */int) max((((/* implicit */short) var_9)), ((short)21747))))))), (max((((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (var_10)))), (min((1573559852U), (((/* implicit */unsigned int) (short)-21747))))))));
                            var_14 = ((/* implicit */int) max((((/* implicit */unsigned int) max((min((((/* implicit */short) var_0)), ((short)-21743))), (max((((/* implicit */short) var_0)), (arr_0 [i_0] [i_0])))))), (max((min((((/* implicit */unsigned int) var_12)), (arr_1 [(unsigned char)8] [i_3]))), (((/* implicit */unsigned int) max((arr_10 [(signed char)16] [i_3] [i_3] [i_3] [1]), ((unsigned char)228))))))));
                        }
                    } 
                } 
                arr_12 [(unsigned char)6] [(short)6] &= ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) max((((/* implicit */unsigned char) (signed char)16)), ((unsigned char)212)))), (max((((/* implicit */short) arr_6 [i_0] [2U])), ((short)9575)))))) & (max((min((var_10), (((/* implicit */int) var_12)))), (((/* implicit */int) min((((/* implicit */short) var_12)), (arr_0 [(unsigned short)18] [(signed char)14]))))))));
                var_15 = ((/* implicit */int) min((min((((/* implicit */unsigned int) ((var_10) / (((/* implicit */int) var_5))))), (min((2721407427U), (((/* implicit */unsigned int) (short)-22246)))))), (((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)28), (((/* implicit */unsigned char) (signed char)16)))))) + (min((arr_8 [i_0] [i_1] [i_1 - 1] [i_0]), (arr_1 [i_0] [i_1])))))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */int) max((max(((unsigned char)0), ((unsigned char)33))), (((/* implicit */unsigned char) ((((/* implicit */int) (short)22658)) != (((/* implicit */int) (short)21742)))))))) & (min((((((arr_3 [(unsigned short)6]) + (2147483647))) << (((((/* implicit */int) (unsigned short)13499)) - (13499))))), (((/* implicit */int) min((arr_7 [i_1 - 1] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) var_4)))))))));
                arr_13 [(short)1] [i_0] = ((/* implicit */unsigned int) max((((max((((/* implicit */int) var_0)), (var_10))) / (max((665664543), (((/* implicit */int) var_11)))))), (((((min((arr_3 [i_0]), (((/* implicit */int) var_0)))) + (2147483647))) << (((((/* implicit */int) max(((short)30128), ((short)-16310)))) - (30128)))))));
            }
        } 
    } 
    var_17 = ((1798981410) & (((/* implicit */int) (unsigned char)28)));
}
