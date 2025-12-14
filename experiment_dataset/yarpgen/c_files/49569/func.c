/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49569
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
    for (long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) (~(min((-1548258341), (var_5)))));
                    arr_8 [i_0] = ((/* implicit */unsigned short) var_11);
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_13 [i_4] [i_3] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_18))));
                                arr_14 [(signed char)4] [i_3] [24] [i_1] [i_0] [i_0] = ((/* implicit */int) (!(((((/* implicit */int) arr_0 [i_1 + 2])) <= (((/* implicit */int) ((short) arr_3 [i_0])))))));
                                var_19 = ((/* implicit */signed char) ((((((/* implicit */int) (short)-27044)) <= (arr_3 [i_4]))) && ((!(((/* implicit */_Bool) ((long long int) -1941443000)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                arr_19 [(unsigned char)19] [(unsigned char)19] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_5 [i_2 - 2] [i_2 + 2] [i_2 + 2] [i_2 + 2]))))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_12 [i_0] [i_0] [(signed char)4] [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) arr_9 [i_5]))))) ? ((+(var_10))) : (((/* implicit */long long int) ((unsigned int) arr_2 [(unsigned short)18] [17U])))))) || (max(((!(((/* implicit */_Bool) arr_12 [i_0] [(short)24] [i_2] [i_5] [(unsigned short)10])))), (((((/* implicit */_Bool) arr_11 [i_6] [(unsigned short)2] [(unsigned short)2])) || (((/* implicit */_Bool) 211106232532992LL))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 24; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            {
                                arr_25 [i_8] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((arr_21 [i_7 - 1] [i_1] [i_2] [i_1] [i_8] [i_1 + 2]) << (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                                var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((2249142820U) >= (((/* implicit */unsigned int) max((((/* implicit */int) arr_16 [i_0] [i_0])), (arr_9 [i_0]))))))), ((((~(8877809073362494002ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_14);
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_13))));
}
