/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42538
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
    var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (-1672028214) : (((/* implicit */int) var_1))))), (var_7)))));
    var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!((!(((/* implicit */_Bool) var_1))))))), (var_5)));
    var_14 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (min((((1428324528U) + (((/* implicit */unsigned int) var_6)))), (max((var_7), (var_2)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [4ULL] [i_2] [i_2] [4ULL] = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 3893808427U))) && (((/* implicit */_Bool) var_2))))), (max((((/* implicit */int) (unsigned short)59887)), (((-1) + (((/* implicit */int) (unsigned short)0))))))));
                        var_15 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [(_Bool)1] [i_2] [(_Bool)1])) ? (var_9) : (1428324520U)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-68))))) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (var_2) : (((/* implicit */unsigned int) var_3)))))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)45)) ? (var_6) : (((/* implicit */int) var_10)))))))));
                    }
                    var_16 = (i_2 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) 1428324520U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2147483647) >> (((arr_6 [i_2]) - (3608714317U)))))) ? (((((/* implicit */int) arr_3 [(_Bool)1] [i_1])) * (((/* implicit */int) (signed char)-11)))) : (((/* implicit */int) min((var_1), (var_1))))))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_1 - 2] [i_1 - 4] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_1 - 2] [i_1 - 4] [i_2]))) : (var_9)))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) 1428324520U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2147483647) >> (((((arr_6 [i_2]) - (3608714317U))) - (3956649315U)))))) ? (((((/* implicit */int) arr_3 [(_Bool)1] [i_1])) * (((/* implicit */int) (signed char)-11)))) : (((/* implicit */int) min((var_1), (var_1))))))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_1 - 2] [i_1 - 4] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_1 - 2] [i_1 - 4] [i_2]))) : (var_9))))));
                    arr_12 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_1 [i_1 + 2] [i_1 + 2]))))));
                }
            } 
        } 
    } 
}
