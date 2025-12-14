/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216663
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_13 = (+(((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_0] [i_3]))))) | (max((3520238010647090134ULL), (((/* implicit */unsigned long long int) (short)25018)))))));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_1)))) ? (min((max((arr_7 [i_0] [i_0] [i_0] [i_3]), (arr_9 [i_0] [i_0] [i_0] [i_3] [i_0]))), (((/* implicit */unsigned long long int) max((1912523426), (((/* implicit */int) arr_3 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) arr_1 [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 2; i_5 < 9; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            {
                var_16 = max((max((((((/* implicit */_Bool) arr_15 [i_5] [10] [9U])) ? (((/* implicit */unsigned long long int) 3360133446U)) : (7893186582703423257ULL))), (((/* implicit */unsigned long long int) max((arr_5 [1LL] [1LL]), (((/* implicit */long long int) arr_10 [i_5] [i_5 - 1] [i_5] [5LL]))))))), (((/* implicit */unsigned long long int) ((signed char) arr_0 [i_5]))));
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (((~(arr_7 [i_5] [i_5] [i_5 - 1] [i_5 - 1]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(var_7)))) & (((((/* implicit */_Bool) (unsigned short)25570)) ? (var_6) : (((/* implicit */long long int) arr_13 [i_5] [i_5]))))))))))));
                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5 + 2] [i_5 + 1] [i_5])) ? (((/* implicit */int) arr_4 [i_5 + 2] [i_5 + 2] [i_5])) : (((/* implicit */int) var_9)))))));
                var_19 = var_10;
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5 - 2] [i_5 - 2] [i_5] [i_7]))) | (var_4)));
                    var_21 = ((/* implicit */_Bool) var_5);
                    arr_19 [i_6] [i_6] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (arr_6 [8ULL] [14] [i_6] [2ULL])))) ? (((2003576800627230148ULL) * (var_4))) : (var_10)));
                }
            }
        } 
    } 
}
