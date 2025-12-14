/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54194
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-5311242126677625591LL)))))) ? (var_3) : (-1189402982)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) ((arr_4 [i_0] [i_1 - 3]) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                            var_13 = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (short i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) max(((short)32767), (((/* implicit */short) (unsigned char)22)))))));
                                var_15 = arr_5 [i_0] [(unsigned short)18] [i_5 + 1] [(short)15];
                                var_16 *= ((/* implicit */short) ((((((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_17 [i_6] [i_5 - 1] [i_4] [i_1] [i_0] [(_Bool)1])) : (((/* implicit */int) (unsigned char)11)))) + (2147483647))) << (((((min((((long long int) (unsigned char)22)), (((/* implicit */long long int) arr_13 [(short)2] [i_1 - 2] [i_1] [i_1])))) + (99LL))) - (25LL)))));
                                arr_19 [i_6] [2U] [i_1] [i_4] [i_1] [2U] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_4] [i_1])) : (((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_17 [i_0] [(unsigned short)1] [i_0] [i_4] [i_5] [(unsigned char)4])) : (((/* implicit */int) arr_9 [i_0])))))));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_6] [i_5]))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_0] = ((/* implicit */_Bool) (unsigned char)233);
            }
        } 
    } 
}
