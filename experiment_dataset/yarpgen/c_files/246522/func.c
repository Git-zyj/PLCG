/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246522
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) >> (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_7))))))) && (((((/* implicit */int) var_7)) != (((/* implicit */int) var_6))))));
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (arr_3 [i_1 + 1])))) <= (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_0))))))))));
            arr_7 [(_Bool)1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) < (arr_4 [i_0] [11ULL] [i_1 + 1])))) != (((arr_5 [i_0] [i_0] [i_1 + 1]) / (arr_5 [i_0] [i_0] [i_1 + 1])))));
        }
        arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) * (arr_3 [i_0])))));
    }
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (((_Bool)1) && ((_Bool)1))))));
        arr_12 [i_2] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) var_6)) + (98)))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))) | (15108292123088251129ULL)))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 3; i_3 < 17; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_18 [i_3 + 3] [i_3] [i_3 + 3] [i_3 - 3]))))) == (((((/* implicit */int) arr_18 [i_3 + 1] [i_3] [i_3 - 3] [i_3 + 2])) + (var_5)))));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((var_3) & (((/* implicit */unsigned long long int) arr_14 [i_4])))) - (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)13)) ^ (((/* implicit */int) (signed char)120)))) - (((/* implicit */int) ((arr_10 [i_4]) != (((/* implicit */unsigned long long int) arr_13 [i_3 + 1])))))))))))));
                    var_17 = ((/* implicit */unsigned short) ((((390708057) & (((/* implicit */int) var_12)))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483647)) >= (18446744073709551614ULL))))));
                    arr_20 [i_3] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (_Bool)1))))) & (((/* implicit */int) ((((/* implicit */int) var_7)) >= (arr_9 [i_3 + 3] [i_3 + 3]))))));
                    arr_21 [i_2] [i_3] [i_2] [i_4] = ((((((/* implicit */int) (signed char)-1)) == (var_4))) && (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (15108292123088251133ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-4)) == (((/* implicit */int) var_12))))))))));
                }
            } 
        } 
    }
}
