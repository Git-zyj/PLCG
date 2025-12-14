/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205735
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_1])))) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_1]))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (max((max((((/* implicit */unsigned long long int) arr_10 [2ULL] [i_1] [i_1] [i_3] [14ULL])), (arr_9 [(unsigned short)12] [(unsigned short)12] [(signed char)4] [(unsigned short)12]))), (min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_2])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_0)))))))));
                                arr_12 [(unsigned short)5] [i_1] [i_4] [i_1] [(signed char)18] = ((/* implicit */long long int) max((min(((unsigned short)2), ((unsigned short)65532))), (min((arr_11 [i_4] [i_1]), (((/* implicit */unsigned short) arr_10 [(unsigned short)19] [i_1] [(unsigned short)19] [i_3] [i_4]))))));
                                var_16 = ((/* implicit */signed char) min((min((var_6), (arr_7 [i_0] [i_3] [i_4]))), (min((arr_7 [i_1] [(signed char)0] [i_4]), (arr_7 [i_3] [i_1] [i_0])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 3; i_6 < 15; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((arr_1 [i_6 - 3]), (min((arr_2 [i_6 - 2] [i_6 - 1] [i_6 + 1]), (arr_7 [i_6 - 1] [i_6 - 3] [i_6 - 2]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 2; i_8 < 15; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((arr_2 [i_8 - 1] [i_6 + 1] [(unsigned short)0]), (max((arr_2 [i_8 + 1] [i_6 + 1] [(signed char)20]), (var_3)))));
                                arr_24 [i_5] [i_9] = ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) var_2)), (arr_8 [i_6 - 1] [i_7] [i_6 - 1] [i_8 + 1] [i_8 + 1] [i_7])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) arr_8 [i_5] [i_6 - 3] [i_5] [(_Bool)0] [i_5] [i_7]);
                    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) var_9)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_10);
}
