/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53208
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0 - 2]))) ? (arr_2 [i_0 + 1]) : ((~(arr_2 [i_0 - 2])))));
                                var_14 = ((/* implicit */_Bool) arr_1 [i_0]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 2; i_6 < 17; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 17; i_7 += 2) 
                        {
                            {
                                arr_23 [i_1] [i_1] [10] [11] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_1] [i_0 - 1] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_18 [i_0 - 1] [i_7 - 2] [i_1])))) : (arr_20 [i_0] [i_1] [i_5] [i_6] [i_7])));
                                var_15 += ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */long long int) (short)21)), (var_8)))) ? (var_5) : (((/* implicit */long long int) 3145728)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_6)))))) + (arr_19 [(unsigned short)8] [i_7 - 1] [i_7 - 2] [i_7 + 1] [i_7]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned short) var_4)), (((unsigned short) var_9))));
    var_17 = max((((/* implicit */int) var_2)), ((((-(((/* implicit */int) var_11)))) * (((/* implicit */int) ((var_8) < (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
}
