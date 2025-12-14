/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203124
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
    var_15 = ((/* implicit */signed char) (+(((unsigned int) ((var_4) | (var_0))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            arr_6 [(unsigned char)6] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) ? (arr_5 [i_0] [i_1 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58003))))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 4294967282U)) : (arr_0 [i_2])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) % (arr_8 [(unsigned char)14] [i_2] [i_2] [i_0]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)54486)))))));
                    var_17 ^= ((/* implicit */unsigned short) ((unsigned long long int) arr_4 [i_0] [i_0] [i_1 + 2]));
                    arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(1520377545977601281ULL))))));
                    var_18 ^= 4294967290U;
                }
                arr_12 [i_1] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_0 [i_0])))));
                arr_13 [i_0] [i_0] = ((((int) arr_7 [i_0] [i_0] [i_1 + 2] [i_2])) % (((/* implicit */int) (unsigned short)768)));
                arr_14 [i_0] [i_0] [i_2] = arr_3 [i_0] [19];
                var_19 = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_0]);
            }
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                var_20 = var_11;
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0]))));
            }
        }
        var_22 = (~(min((arr_0 [i_0]), (arr_0 [i_0]))));
        var_23 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)153)), ((unsigned short)46525))))) : (18446744073709551609ULL))), (9410684607148950892ULL)));
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_9))));
    }
}
