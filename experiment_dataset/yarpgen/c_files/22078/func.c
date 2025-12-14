/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22078
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)3525)) << (((((/* implicit */int) var_9)) + (112))))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)124))))))) : (((long long int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) (((-(min((arr_4 [i_0] [i_1]), (((/* implicit */long long int) (_Bool)0)))))) - (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-3517)), (min((((/* implicit */unsigned short) var_8)), ((unsigned short)3431)))))))));
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)12909), (((/* implicit */unsigned short) var_8))))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)123))) : (arr_0 [i_1 + 1]))) : ((+(arr_0 [i_1 - 2])))));
                var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-3538))))) ? (((/* implicit */unsigned int) min(((-2147483647 - 1)), (((/* implicit */int) var_8))))) : (var_6)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (4036775877845558236ULL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) min(((signed char)-116), (var_8)))) : (((((/* implicit */int) var_0)) * (((/* implicit */int) (short)3539))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_1 - 3]))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (10925865576283009208ULL) : (((/* implicit */unsigned long long int) arr_4 [i_1 - 2] [i_1]))));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_1 - 2] [i_1] [i_2 + 1])) / (((/* implicit */int) arr_2 [i_0] [i_1 + 1]))));
                }
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    var_16 |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 - 3] [i_1 - 3] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 3])))) - (((/* implicit */int) min((arr_9 [i_1 - 1] [i_1 - 3] [i_1 + 1] [i_1 - 3]), (var_3))))));
                    arr_10 [i_1] [i_1] = (short)3551;
                    var_17 = ((/* implicit */short) ((long long int) (~(arr_8 [i_0] [i_1 - 2] [i_1] [i_3]))));
                    arr_11 [i_0] [i_1 - 1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (213729868U))), (max((var_2), (((/* implicit */unsigned int) arr_9 [i_0] [i_1 - 3] [i_3] [i_0]))))))) ? (((/* implicit */int) (unsigned char)193)) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))));
                }
            }
        } 
    } 
}
