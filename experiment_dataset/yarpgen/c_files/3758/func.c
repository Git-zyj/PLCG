/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3758
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(unsigned char)6])))))));
        var_12 = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) var_2)))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) (~(((/* implicit */int) arr_3 [i_1 - 1])))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_13 += ((/* implicit */_Bool) arr_8 [14] [i_2]);
            var_14 = ((/* implicit */unsigned char) ((arr_4 [i_1 + 3]) >= (arr_4 [i_1 + 4])));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                var_15 = ((/* implicit */unsigned int) ((arr_7 [i_1 + 4]) != (arr_7 [i_1 + 1])));
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    arr_15 [i_1] [i_1 + 3] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((signed char) (unsigned short)57344));
                    arr_16 [i_1 + 2] [i_2] [i_1] [i_4 + 1] [i_4 + 1] [i_2] = ((/* implicit */signed char) arr_10 [i_1 + 1] [i_1 + 2] [i_1]);
                    var_16 *= arr_4 [3LL];
                    var_17 = ((/* implicit */_Bool) (~(((unsigned int) arr_11 [i_1] [i_2] [i_3] [i_4 + 1]))));
                }
                arr_17 [i_1] = ((/* implicit */signed char) arr_13 [i_1] [(short)16] [i_1]);
                var_18 = ((short) arr_3 [i_3]);
                var_19 = ((/* implicit */short) arr_13 [i_3] [i_3] [i_1]);
            }
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 16; i_5 += 1) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_6))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(arr_22 [i_1 + 3] [i_1 + 3] [i_1 + 1] [i_1] [i_1 + 1] [(_Bool)1]))))));
                            arr_28 [i_1] [i_1] [i_5] [i_6] [8ULL] = ((/* implicit */unsigned char) var_1);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            var_22 = ((/* implicit */short) var_5);
            arr_31 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) arr_27 [(_Bool)1] [i_8] [i_1] [i_8] [i_8]));
        }
    }
    /* vectorizable */
    for (long long int i_9 = 1; i_9 < 13; i_9 += 3) /* same iter space */
    {
        arr_36 [i_9 + 2] = ((/* implicit */unsigned long long int) (+(arr_13 [i_9 + 1] [i_9 + 1] [(unsigned short)12])));
        arr_37 [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
        arr_38 [(unsigned short)4] [(unsigned short)4] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_9))))));
    }
    var_23 = (~(min((22ULL), ((~(22ULL))))));
    var_24 = ((/* implicit */short) (~(((/* implicit */int) var_7))));
}
