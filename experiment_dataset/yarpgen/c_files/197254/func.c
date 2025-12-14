/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197254
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(14059307325151586624ULL))))))) : (((((/* implicit */int) var_11)) - (((/* implicit */int) var_9))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_12);
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned char) (-(((int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [(signed char)2] [2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                arr_11 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_1]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) 98643533U)) : (arr_10 [i_1])))));
                arr_12 [i_1] [i_1] [(short)8] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)65))));
            }
            var_14 = ((/* implicit */unsigned int) (!((_Bool)1)));
        }
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_15 = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_0] [i_0 - 2]))));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        {
                            arr_23 [i_0 - 2] [i_3] [i_0 - 2] [i_0 - 2] [i_6] = ((/* implicit */unsigned short) ((4196323740U) << (((((((/* implicit */unsigned long long int) ((arr_6 [i_6] [i_5]) | (((/* implicit */long long int) 4196323718U))))) & (max((((/* implicit */unsigned long long int) var_8)), (var_4))))) - (1623059977938289786ULL)))));
                            arr_24 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_20 [i_0 + 1] [i_0 - 2] [i_0 - 3])) ? (var_4) : (arr_20 [i_0 - 3] [i_0 - 2] [i_0 + 1]))), (((/* implicit */unsigned long long int) var_7))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (min((((arr_25 [i_0 - 1] [i_7]) ^ (arr_25 [i_0 + 2] [i_7]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0 - 3] [10])) && (((/* implicit */_Bool) arr_25 [i_0 - 1] [i_7])))))))));
            var_17 = max((arr_20 [i_0] [4U] [(short)6]), (((/* implicit */unsigned long long int) var_10)));
            arr_29 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((short) var_3)));
        }
        var_18 = ((/* implicit */_Bool) var_4);
        arr_30 [i_0 + 1] = ((/* implicit */_Bool) (-(arr_0 [i_0] [i_0 + 1])));
    }
    for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((signed char) ((arr_0 [i_8 - 1] [i_8 - 1]) < (((/* implicit */unsigned int) arr_8 [i_8 + 1] [i_8 - 2])))));
        arr_34 [i_8] [i_8] = ((/* implicit */_Bool) var_3);
    }
}
