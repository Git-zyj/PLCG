/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44890
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
    var_16 = ((/* implicit */long long int) var_8);
    var_17 = ((/* implicit */int) ((((/* implicit */long long int) var_2)) / (((min((var_12), (((/* implicit */long long int) (short)22970)))) & (var_9)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_13))));
                    arr_7 [i_0] [(_Bool)1] [i_2] [(_Bool)1] = ((/* implicit */_Bool) min((((((/* implicit */int) ((short) var_7))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))), (((-967028949) ^ (((/* implicit */int) (unsigned char)80))))));
                    var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((min((var_15), (((/* implicit */long long int) arr_6 [(unsigned short)4] [i_1] [(unsigned short)4])))), (((/* implicit */long long int) arr_5 [i_2] [i_0]))))), (min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_9))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_7);
                }
                for (short i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-25114))));
                    arr_13 [i_1] [i_3] = ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_10)), (var_12))), (((/* implicit */long long int) var_1))))) ? (((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_0))))) / ((~(var_15))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_3 - 1]) : (arr_1 [i_3 - 1])))));
                }
                /* vectorizable */
                for (short i_4 = 3; i_4 < 12; i_4 += 2) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) ((var_1) ^ (arr_1 [i_0])));
                    var_20 ^= ((/* implicit */short) var_11);
                }
                for (short i_5 = 3; i_5 < 12; i_5 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (short)-1)) + ((+(((/* implicit */int) arr_5 [i_0] [i_0]))))))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_9), (min((min((var_12), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) arr_0 [i_5 + 2]))))));
                    var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_19 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */short) var_5)))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    arr_22 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) (-(var_2)));
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((short) var_1)))));
                    arr_23 [i_0] = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0]);
                }
            }
        } 
    } 
}
