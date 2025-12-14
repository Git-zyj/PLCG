/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189582
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = min((arr_1 [i_0]), ((signed char)-70));
        var_14 ^= ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)6])) ? (((((/* implicit */_Bool) (short)-13)) ? (((/* implicit */int) arr_0 [i_0] [(short)18])) : (((/* implicit */int) arr_0 [12ULL] [(unsigned char)16])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [2U] [2U]))))))) < (((((/* implicit */_Bool) (short)29950)) ? (((/* implicit */int) arr_1 [(signed char)10])) : (((/* implicit */int) (signed char)82))))));
        var_15 = ((/* implicit */unsigned char) ((unsigned short) arr_0 [i_0] [i_0]));
        arr_3 [(signed char)0] |= (signed char)-54;
    }
    /* LoopSeq 2 */
    for (unsigned int i_1 = 2; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_9 [i_1] [i_2] = ((/* implicit */signed char) arr_8 [i_1]);
            var_16 = arr_1 [i_1];
        }
        var_17 = ((/* implicit */short) (+(((unsigned long long int) arr_7 [i_1 - 2] [i_1 - 2]))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_3]))));
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_4]))) / (arr_14 [i_4]))))))));
            /* LoopSeq 3 */
            for (short i_5 = 2; i_5 < 18; i_5 += 3) 
            {
                var_19 = ((/* implicit */signed char) (unsigned char)60);
                var_20 = ((/* implicit */short) arr_10 [i_5]);
                var_21 = ((/* implicit */long long int) var_1);
            }
            for (unsigned char i_6 = 2; i_6 < 18; i_6 += 2) 
            {
                var_22 = ((/* implicit */short) max((var_22), (arr_16 [i_4] [i_6 + 1])));
                arr_22 [i_3] [i_3] [5U] = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) arr_16 [i_3] [i_3])))));
            }
            for (unsigned int i_7 = 3; i_7 < 19; i_7 += 1) 
            {
                var_23 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (arr_18 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81))) : (arr_19 [i_4] [i_4] [i_4] [i_4]))))));
                arr_27 [i_3] [3U] [(_Bool)1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (!(var_1)))), (((((/* implicit */_Bool) arr_17 [i_3])) ? (((/* implicit */int) arr_20 [i_3] [i_7 - 2])) : (((/* implicit */int) arr_17 [i_3]))))))) ? (((/* implicit */unsigned long long int) arr_25 [i_3] [(unsigned char)5] [(short)6])) : (((((/* implicit */_Bool) arr_26 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_4] [i_3]))) : (2477749440862822483ULL)))));
            }
        }
        for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            arr_32 [i_3] = ((/* implicit */unsigned short) arr_29 [i_3] [i_3] [i_3]);
            var_24 = ((/* implicit */long long int) (!(((((((/* implicit */_Bool) arr_30 [i_8])) ? (((/* implicit */int) arr_26 [i_3] [i_3])) : (((/* implicit */int) arr_20 [i_3] [i_3])))) != (((/* implicit */int) var_6))))));
            var_25 ^= ((/* implicit */short) (-(((/* implicit */int) var_6))));
        }
        var_26 = ((/* implicit */short) ((unsigned char) arr_30 [i_3]));
    }
}
