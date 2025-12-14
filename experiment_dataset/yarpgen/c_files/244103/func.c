/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244103
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) (unsigned char)137)) : (1271955558)));
                arr_5 [i_0] = ((/* implicit */unsigned char) (((+(max((arr_1 [i_0]), (((/* implicit */long long int) arr_2 [i_0])))))) / (1629461223464740618LL)));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_3 = 2; i_3 < 15; i_3 += 4) 
        {
            for (int i_4 = 1; i_4 < 16; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    {
                        arr_15 [(unsigned short)0] [i_2] [i_4] [i_5] [i_2] [6] = ((((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (unsigned char)20)))) * ((-(arr_14 [i_2] [i_3 - 1] [i_4] [i_4]))));
                        var_12 *= ((/* implicit */unsigned char) ((int) ((1915527211) <= (((/* implicit */int) arr_6 [i_2])))));
                        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3 - 2] [i_3 - 2] [i_4 - 1])) ? (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */long long int) arr_13 [i_4] [i_4] [i_4] [i_2] [i_3 + 1] [i_2])) : (var_0))) : (((/* implicit */long long int) arr_7 [i_3 + 1] [i_3 - 2]))));
                        arr_16 [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((arr_7 [i_2] [(signed char)7]) >> (((((/* implicit */int) (signed char)112)) - (89)))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */long long int) ((arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) - (((arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) >> (((((/* implicit */int) (unsigned short)11098)) - (11091)))))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) arr_12 [i_6] [4]);
            var_16 = ((((/* implicit */_Bool) arr_13 [i_2] [9] [i_6] [i_2] [i_2] [i_2])) ? (arr_11 [12LL]) : (((((/* implicit */_Bool) (unsigned char)133)) ? (var_5) : (((/* implicit */int) arr_6 [i_2])))));
        }
    }
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)11098)))), ((~(((/* implicit */int) (unsigned short)2206))))));
    var_18 = ((/* implicit */unsigned short) var_2);
}
