/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207930
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
    var_13 = ((/* implicit */long long int) (short)7441);
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)63382)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) ((((var_7) < (arr_3 [i_0] [i_0]))) ? (((/* implicit */int) max((var_2), (((/* implicit */short) var_12))))) : ((~(((/* implicit */int) var_5))))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)4900)) % (((/* implicit */int) arr_1 [i_0] [(short)19])))) % (((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), ((unsigned short)2153)))))))) : (((((/* implicit */_Bool) ((arr_4 [i_1] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_0 [i_1])))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned char) var_8))))))))));
                var_15 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max(((unsigned short)63382), (((/* implicit */unsigned short) var_2))))) : (((/* implicit */int) var_3)));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4])) * (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_4 [i_0] [i_3])))))));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_3] [i_4])) ? (arr_3 [i_0] [i_1]) : (((arr_4 [i_2] [i_4]) ? (arr_3 [i_4] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_3] [i_2] [i_0])))))));
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
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5])) ? ((~(var_7))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2153)) ? (((/* implicit */int) (short)18529)) : (((/* implicit */int) (_Bool)0)))))))));
                    arr_24 [i_5] [i_6] = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (arr_23 [i_5] [i_5] [i_5] [i_5])))) ? (arr_17 [i_5]) : (max((arr_23 [i_5] [i_5] [i_5] [i_5]), (((/* implicit */long long int) var_2)))))), (((/* implicit */long long int) (unsigned char)103))));
                    var_18 = ((/* implicit */unsigned int) (short)18535);
                }
            } 
        } 
    } 
}
