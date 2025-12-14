/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221429
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
    var_13 = max((((((/* implicit */long long int) ((/* implicit */int) var_0))) & (max((var_12), (((/* implicit */long long int) var_9)))))), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_7)))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) & (var_12)))) : (var_8)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_15 = ((((((/* implicit */_Bool) arr_5 [i_4] [i_3] [i_1 + 1])) ? (arr_5 [i_0] [i_1 - 1] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) / (((arr_5 [i_0] [i_1] [i_2 + 1]) / (arr_5 [i_1] [i_1] [i_4]))));
                                var_16 += ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [(unsigned short)17] [i_1] [i_2 + 1] [i_2 - 3] [i_3 - 1] [i_4]))) : (var_10))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3 - 1])) && (((/* implicit */_Bool) var_7))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            arr_20 [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_14 [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1])) << (((min((((/* implicit */long long int) arr_14 [i_0] [i_1] [i_5] [23LL])), (arr_1 [i_0]))) + (5035970363845146204LL))))) << (((arr_6 [i_0] [i_1] [i_0]) + (1526274864479086808LL)))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_7 [i_0] [i_1] [i_5] [i_5] [i_6]))))) ? ((~(var_8))) : (max((var_12), (((/* implicit */long long int) arr_17 [i_0] [i_1 + 1] [(unsigned short)2])))))))))));
                            arr_21 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_13 [i_0] [i_1] [i_5] [i_6]))))) / (arr_8 [i_0] [i_1] [i_5] [i_6])))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((unsigned short) arr_2 [22LL] [i_0] [i_0])))) ^ (((/* implicit */int) ((unsigned char) ((long long int) var_11))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
