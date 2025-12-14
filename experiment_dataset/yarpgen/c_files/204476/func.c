/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204476
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_16 &= ((/* implicit */unsigned short) var_1);
                    arr_9 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) >= (min((arr_1 [i_0]), (1696510931U)))))), (((((((/* implicit */_Bool) (unsigned short)58461)) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >> (((3117414333U) - (3117414324U)))))) : (arr_7 [i_0] [i_1] [i_1] [14U])))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [(short)9])) ? (((((var_8) != (arr_2 [i_0] [i_0] [i_2]))) ? (((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_1]) + (((/* implicit */long long int) var_8))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2])) : (14991593386241227148ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_0]), (((/* implicit */unsigned int) var_15))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (var_0) : (arr_0 [i_0]))) : (arr_0 [i_0]))))));
                    arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_1])))) % ((+(arr_5 [i_0] [i_1])))));
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) var_2)), (max((var_1), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_2])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (arr_6 [i_0] [i_1]) : (arr_6 [i_0] [i_0])))))))));
                }
            } 
        } 
        var_19 ^= ((/* implicit */unsigned short) ((int) ((arr_2 [i_0] [i_0] [i_0]) != (((/* implicit */unsigned int) 342950073)))));
        var_20 = ((/* implicit */unsigned int) min((((/* implicit */short) var_12)), (var_4)));
    }
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            {
                var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) arr_11 [i_3] [i_4]))))) ? (((/* implicit */long long int) ((3002444841U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (var_2)))) ? (((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3])) ? (var_1) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)127)), (var_9)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_3] [i_4] [i_4])))))));
                var_22 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7079))))) == (((((/* implicit */int) arr_11 [i_3] [i_4])) * ((-(((/* implicit */int) arr_11 [i_3] [i_3]))))))));
            }
        } 
    } 
    var_23 = (+(min((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_4))))), ((-(((/* implicit */int) var_12)))))));
}
