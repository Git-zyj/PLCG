/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46953
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
    var_20 = ((/* implicit */signed char) var_7);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_5 [i_0] [i_0] &= ((/* implicit */unsigned short) (-(min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) < (var_12))))), ((-((-(((/* implicit */int) arr_7 [i_1]))))))));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((short) (-((-(((/* implicit */int) (short)-1))))))))));
        arr_8 [i_1] = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_7 [i_1])))), (((((/* implicit */int) arr_7 [i_1])) >> (((/* implicit */int) arr_7 [i_1]))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) (-(min((((((/* implicit */unsigned int) ((/* implicit */int) (short)-3))) % (arr_10 [(_Bool)1]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((var_0) - (2148547891U))))))))));
        var_24 = ((/* implicit */unsigned long long int) (!(arr_9 [i_2])));
        arr_12 [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_2]);
        var_25 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_6 [i_2] [i_2])))) ? (((max((arr_10 [i_2]), (((/* implicit */unsigned int) arr_7 [i_2])))) & (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-3), (((/* implicit */short) arr_9 [i_2])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2]))))))));
        arr_13 [i_2] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_9 [i_2])))), (((/* implicit */int) ((_Bool) arr_9 [i_2])))));
    }
    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        var_26 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_3]))));
        /* LoopSeq 2 */
        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) arr_15 [i_5]))));
                var_28 *= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_20 [i_3] [i_5] [i_3] [i_3])))) ? (((/* implicit */int) arr_16 [i_4 - 1] [i_4 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_5] [i_3])))))));
                arr_22 [i_3] [i_3] [i_4 - 3] [i_5] = ((/* implicit */unsigned char) ((((arr_16 [(unsigned char)1] [i_4 - 3]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_7 [i_4])))) ^ (arr_21 [i_4 + 1] [i_3])));
            }
            var_29 = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_16 [i_3] [i_3])))), (((((/* implicit */int) arr_16 [i_3] [i_4])) - (((/* implicit */int) arr_16 [i_3] [i_4 - 2]))))));
            /* LoopNest 3 */
            for (unsigned int i_6 = 4; i_6 < 18; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) (~(arr_17 [i_3])));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_29 [i_3] [i_4] [i_3] [i_6] [(signed char)0] [i_7] [(signed char)0])) ^ (((/* implicit */int) arr_16 [i_3] [i_4 - 2]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_9 = 3; i_9 < 18; i_9 += 4) /* same iter space */
        {
            var_32 = ((/* implicit */short) ((long long int) max((arr_19 [(short)13] [i_9] [i_3]), (((/* implicit */long long int) arr_25 [i_9 - 2] [i_9 - 3])))));
            var_33 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_28 [i_9] [i_9 - 2] [i_9] [(unsigned short)8] [i_3] [i_3]))))));
        }
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                {
                    arr_37 [i_3] [(_Bool)1] [(_Bool)1] [i_3] = ((/* implicit */signed char) arr_28 [i_3] [i_3] [i_10] [i_3] [i_3] [i_11]);
                    arr_38 [i_3] [i_3] = ((/* implicit */signed char) ((((unsigned int) arr_25 [i_11] [i_11])) >> (((((((/* implicit */_Bool) arr_28 [i_3] [i_11] [i_11] [i_10] [i_10] [(_Bool)1])) ? (((/* implicit */int) arr_28 [i_10] [i_10] [i_11] [8LL] [i_3] [i_10])) : (((/* implicit */int) (short)-3)))) + (15422)))));
                    arr_39 [i_3] [i_3] [i_11] [i_11] = ((/* implicit */signed char) arr_28 [i_10] [(_Bool)1] [18ULL] [15ULL] [i_10] [i_3]);
                }
            } 
        } 
        arr_40 [i_3] [i_3] = ((/* implicit */long long int) min((((/* implicit */short) (!(arr_7 [i_3])))), (((short) (-(arr_25 [i_3] [i_3]))))));
        var_34 = ((/* implicit */_Bool) arr_25 [i_3] [i_3]);
    }
}
