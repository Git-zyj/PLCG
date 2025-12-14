/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234340
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        arr_4 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)56))));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (signed char i_3 = 3; i_3 < 7; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) arr_12 [i_3 + 1] [i_3 - 2] [i_3 - 2])))));
                        var_18 = ((((arr_6 [i_1] [i_3 + 1]) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_10 [5U] [i_3 + 3] [5U])))));
                        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [i_3 - 3] [i_3] [i_3 - 3])) || (((/* implicit */_Bool) (-2147483647 - 1))))) || (((((/* implicit */_Bool) (signed char)-16)) || (((/* implicit */_Bool) arr_10 [i_3 + 2] [i_3 - 2] [i_3 - 2]))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) + (((arr_10 [2] [i_1] [i_1]) - (((/* implicit */long long int) var_2))))));
                        var_21 = ((/* implicit */short) (-(((/* implicit */int) ((signed char) 18446744073709551590ULL)))));
                        arr_21 [i_1] [i_5] = ((/* implicit */unsigned long long int) arr_5 [i_3 + 2] [i_3 - 3]);
                    }
                    arr_22 [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_1] [i_3] [i_2] [i_3]))))) ? (max((((/* implicit */unsigned int) (unsigned short)22)), (arr_12 [i_1] [i_2] [i_3]))) : (((/* implicit */unsigned int) (-2147483647 - 1))))), (((/* implicit */unsigned int) (unsigned char)205))));
                    var_22 = ((/* implicit */int) max(((+(arr_18 [5ULL] [5ULL] [5ULL] [5U] [i_3 - 3]))), (((/* implicit */unsigned long long int) var_10))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) var_7))), (((((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (unsigned char)64)))) & (min((-1), (((/* implicit */int) (unsigned char)59))))))));
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24)) ? (((((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned long long int) var_4)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65525)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)13)), ((unsigned short)65502)))))));
}
