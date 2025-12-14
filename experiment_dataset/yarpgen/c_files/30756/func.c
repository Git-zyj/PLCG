/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30756
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
    var_12 = ((/* implicit */signed char) var_2);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) var_7);
                    var_14 = (~((((+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))) | (((/* implicit */int) arr_0 [(_Bool)1])))));
                    var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned short) (signed char)-121))) ? (max((((/* implicit */int) var_2)), (var_10))) : (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 2] [i_2 - 1])))) % (((/* implicit */int) (signed char)-8))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_2 + 3] [i_2 + 1] [i_2 + 2])), (((long long int) arr_10 [i_1] [i_1] [10] [i_1] [(signed char)16] [i_1] [15]))))) || (((((/* implicit */int) (signed char)-26)) <= (arr_3 [i_2] [i_2 + 1] [(signed char)16])))));
                                arr_11 [i_0] [i_0] [i_2 + 1] [i_3] [i_4 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 2])) : (((/* implicit */int) (signed char)126))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_4 + 2] [i_4 - 1] [(unsigned short)2] [i_4])) || (((/* implicit */_Bool) arr_4 [i_4 - 1] [i_4 - 2] [i_4] [i_4 - 2])))))) : (max((((/* implicit */unsigned int) arr_4 [i_4 - 2] [i_4 + 2] [(signed char)16] [i_4])), (1176925609U)))));
                            }
                        } 
                    } 
                    arr_12 [i_2 - 1] [i_2 + 2] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned char) (signed char)119))) < (((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))))) ? ((~(((int) var_0)))) : (((/* implicit */int) var_0))));
}
