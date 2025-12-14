/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190845
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
    var_15 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : (var_3))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) var_3))), (((((/* implicit */_Bool) (short)5781)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1 - 1] [i_0]))));
                    var_17 = ((/* implicit */unsigned int) ((short) ((int) var_13)));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */short) max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)14))));
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        /* LoopSeq 4 */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            arr_14 [i_3] [i_4] = ((/* implicit */unsigned int) ((((long long int) max((((/* implicit */unsigned char) arr_11 [i_3])), ((unsigned char)2)))) >> (((/* implicit */int) arr_12 [5U] [i_3] [i_4]))));
            /* LoopSeq 1 */
            for (short i_5 = 2; i_5 < 22; i_5 += 1) 
            {
                arr_17 [i_3] [i_3] [17ULL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_3] [9U] [i_3] [i_5 + 2])) ? (((/* implicit */int) arr_15 [i_3] [(signed char)12] [i_4] [i_5 + 2])) : (((/* implicit */int) arr_12 [i_3] [i_4] [(signed char)20]))))) * (((unsigned int) arr_12 [i_5 + 2] [i_5 - 1] [i_5 + 1]))));
                arr_18 [i_5] = ((/* implicit */signed char) var_13);
                var_18 = ((/* implicit */short) ((((((/* implicit */int) max((var_12), (((/* implicit */short) var_7))))) < ((+(((/* implicit */int) arr_15 [i_4] [(short)3] [i_4] [i_3])))))) ? (((/* implicit */int) arr_12 [i_5] [i_4] [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_3]))))))))));
                arr_19 [(short)7] [i_4] [i_4] [i_5 + 1] = ((/* implicit */_Bool) var_12);
                var_19 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) arr_15 [i_5 - 2] [i_5 + 2] [i_5 + 1] [i_5 + 1])) != (((/* implicit */int) arr_15 [i_5 + 1] [i_5 - 1] [i_5 + 2] [i_5 - 2])))));
            }
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) arr_22 [i_3] [5]);
            var_21 = ((/* implicit */unsigned int) ((unsigned char) arr_23 [i_6] [i_3]));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_28 [i_3] = arr_15 [i_7] [i_7] [i_7] [i_3];
            arr_29 [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
            arr_30 [i_3] = ((/* implicit */int) ((signed char) max((arr_12 [i_3] [i_7] [i_7]), (arr_12 [12U] [i_3] [i_7]))));
            var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_24 [i_3] [i_7] [i_7])) ? (arr_24 [i_3] [i_7] [i_7]) : (arr_24 [i_3] [i_3] [13]))) ^ ((~(arr_24 [i_3] [i_3] [i_3])))));
            arr_31 [i_3] = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))), (((unsigned int) arr_25 [i_7]))));
        }
        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((long long int) arr_16 [i_3] [i_3] [i_3]))) ? (((arr_32 [i_3] [i_3]) ^ (((/* implicit */long long int) 1519833119U)))) : (((/* implicit */long long int) ((arr_25 [i_3]) & (((/* implicit */int) var_8))))))) & (((/* implicit */long long int) ((/* implicit */int) (short)32752)))));
            var_24 = ((/* implicit */signed char) ((unsigned long long int) var_0));
        }
        var_25 = ((/* implicit */unsigned int) ((unsigned long long int) var_2));
    }
    /* vectorizable */
    for (unsigned int i_9 = 1; i_9 < 15; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_10 = 3; i_10 < 15; i_10 += 2) 
        {
            for (unsigned short i_11 = 1; i_11 < 15; i_11 += 3) 
            {
                {
                    arr_42 [i_9] [i_9] = ((/* implicit */short) ((unsigned int) arr_33 [i_9 - 1]));
                    var_26 = ((/* implicit */signed char) arr_24 [i_9] [i_10 - 1] [i_9]);
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 4; i_12 < 16; i_12 += 1) 
                    {
                        arr_45 [(unsigned short)3] [(unsigned short)3] [i_9] [i_12] = ((/* implicit */unsigned short) ((int) arr_16 [i_10 - 1] [i_11 + 1] [i_12 - 2]));
                        var_27 = ((/* implicit */short) arr_44 [i_9] [i_10] [2] [i_12] [i_12]);
                        var_28 = ((arr_36 [i_9 + 1]) < (arr_36 [i_9 - 1]));
                    }
                    arr_46 [i_9 + 2] [i_9 + 2] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) arr_13 [i_9]))));
                    arr_47 [i_9] [(short)12] [i_9] [i_9] = ((/* implicit */unsigned int) var_2);
                }
            } 
        } 
        arr_48 [i_9] = ((/* implicit */_Bool) ((unsigned long long int) arr_34 [i_9 + 1] [i_9 - 1]));
        var_29 = ((/* implicit */unsigned int) var_6);
    }
    var_30 = ((/* implicit */unsigned long long int) var_13);
    var_31 = ((/* implicit */int) var_8);
    var_32 = ((/* implicit */unsigned int) var_7);
}
