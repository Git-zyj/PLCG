/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28022
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
    var_10 -= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_11 &= (~((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_6)) : (max((((/* implicit */int) var_7)), ((-2147483647 - 1)))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) max((var_12), ((!(((/* implicit */_Bool) (~(arr_9 [i_4] [i_4] [i_4 + 1] [i_4] [i_4 + 1]))))))));
                                arr_12 [(short)20] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_9 [i_4 + 1] [i_4 - 2] [i_4] [i_4 - 1] [i_4 - 1])), (2305842459457880064ULL))), ((~(2305842459457880064ULL)))));
                            }
                        } 
                    } 
                } 
                arr_13 [(short)6] [i_0] = ((/* implicit */_Bool) max(((-(2305842459457880064ULL))), (((/* implicit */unsigned long long int) arr_2 [19ULL] [i_0]))));
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            {
                                var_13 *= ((/* implicit */short) min((((((/* implicit */long long int) -1568366215)) * (-1LL))), (((/* implicit */long long int) (~(arr_0 [i_1] [i_6]))))));
                                arr_20 [i_6] [i_6] [i_0] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5]))))) / (((/* implicit */int) ((short) arr_15 [i_0])))));
                            }
                        } 
                    } 
                    arr_21 [i_0] = ((/* implicit */unsigned int) (-(2305842459457880064ULL)));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_26 [i_0] [i_0] [(_Bool)1] [i_8] = ((/* implicit */int) ((unsigned long long int) arr_14 [i_0] [i_1] [i_8]));
                    var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? (arr_25 [(_Bool)1] [i_1] [6U] [6U]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    var_15 = ((/* implicit */unsigned int) (short)19395);
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1] [i_9])) > (((/* implicit */int) (short)-19405))));
                }
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_15 [(_Bool)1]))));
            }
        } 
    } 
}
