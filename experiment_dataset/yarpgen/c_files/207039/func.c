/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207039
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
    var_12 &= ((/* implicit */unsigned int) var_3);
    var_13 ^= ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) var_0);
        arr_2 [i_0] [i_0] = (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (-(min((arr_3 [i_1 + 1] [i_0]), (arr_3 [i_0] [i_0])))));
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
        }
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) ((((11272626020066306263ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2]))))))));
            var_17 *= ((/* implicit */signed char) ((arr_1 [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) >= (var_6)))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_3] [i_3])) : (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (unsigned char)16)))))))));
                        arr_17 [i_2] = ((/* implicit */_Bool) var_7);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 3; i_5 < 16; i_5 += 1) 
            {
                var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_5] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58681)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_11))))) : (((2118054806846403554LL) + (var_4)))))), (max((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_5])) ? (var_2) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_2])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_5])))))))));
                var_20 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_1 [i_2])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned long long int) arr_1 [i_5 - 3])))) <= (((/* implicit */unsigned long long int) ((int) (unsigned short)6857)))));
            }
        }
    }
}
