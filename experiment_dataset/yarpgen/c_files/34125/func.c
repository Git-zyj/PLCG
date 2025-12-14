/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34125
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
    var_14 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */long long int) arr_3 [i_1] [(unsigned char)8])) < (((((/* implicit */_Bool) var_5)) ? (var_12) : (-4888529633829545778LL)))))), (((((/* implicit */_Bool) 1439152925)) ? (((/* implicit */long long int) arr_3 [i_1] [i_1])) : (var_9)))));
                var_16 = ((/* implicit */unsigned char) 1150669704793161728LL);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_17 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)19)) % (((((/* implicit */_Bool) 8865400194093026973LL)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_1 [11LL]))))))) ? (((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [6LL] [6LL]) : (((/* implicit */int) arr_1 [i_0])))) + (2147483647))) << (((((arr_0 [(unsigned char)1]) + (865339411))) - (9)))))) : (((((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238)))))) ? (arr_8 [i_1] [(unsigned char)10] [i_2] [i_3] [i_0]) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [9LL] [i_1] [i_2])) / (((/* implicit */int) (unsigned char)79))))))));
                            arr_9 [i_0] [i_1] [i_2] [4LL] &= ((/* implicit */unsigned char) max((max((max((arr_8 [i_3] [1LL] [i_3] [i_3] [i_3]), (((/* implicit */long long int) var_7)))), (arr_8 [i_0] [i_0] [(unsigned char)9] [i_0] [i_0]))), (((((/* implicit */_Bool) ((arr_6 [i_0] [i_1] [(unsigned char)6] [i_2] [(unsigned char)0]) - (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231)))))));
                            var_18 = max((((((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (arr_2 [i_0]) : (((/* implicit */long long int) arr_3 [i_0] [i_1])))) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)5)) / (1851568181))))), (((/* implicit */long long int) max((arr_0 [i_0]), (arr_0 [i_0])))));
                            var_19 |= ((int) var_4);
                            arr_10 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */long long int) var_8))))))) ? (max(((-(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((((-3215376503203322306LL) + (9223372036854775807LL))) << (((((-5606267549400548437LL) + (5606267549400548454LL))) - (17LL))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [10LL] [10LL])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_2] [i_0] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
