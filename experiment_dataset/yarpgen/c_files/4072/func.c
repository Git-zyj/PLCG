/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4072
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
    for (short i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) arr_3 [i_2]);
                            arr_15 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_10 [i_0 - 2] [i_0 + 2] [i_0] [i_0 + 1])), (var_1))) >> (((((((/* implicit */unsigned long long int) arr_6 [i_0 + 2])) - (arr_13 [i_3]))) - (4064328748628382770ULL)))));
                            arr_16 [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((-1486420357) & (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_3 - 1])) ? (((/* implicit */int) var_8)) : (-1486420347)))));
                            var_12 = ((/* implicit */long long int) arr_4 [i_0] [5LL]);
                        }
                    } 
                } 
                var_13 *= ((/* implicit */signed char) (((+(arr_5 [i_0 - 1] [i_1 + 1] [i_1 + 1]))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_11 [6ULL] [9ULL] [i_0 - 1] [8LL] [i_0] [i_0])) : (((/* implicit */int) arr_10 [(unsigned char)1] [i_1] [2ULL] [0U]))))) ? ((+(var_11))) : (((/* implicit */int) arr_0 [i_0])))))));
                var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) var_8)), (arr_10 [i_1 + 1] [1ULL] [i_1 - 1] [(unsigned short)1])))) / (1486420327)));
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned int) ((short) var_1));
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) var_9);
                    var_17 = ((/* implicit */unsigned short) var_7);
                    arr_23 [i_4] [i_5] [i_5] [i_4] = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4]))))), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), (var_10)))) && (((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_5] [(unsigned char)13])))))));
                }
            } 
        } 
    } 
}
