/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204184
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((17762337024198951314ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1]))))));
            var_18 ^= ((((/* implicit */_Bool) ((arr_1 [i_0] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_2));
            var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1]))))));
            var_20 |= ((/* implicit */long long int) ((_Bool) arr_1 [i_0] [i_1]));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_5 [i_0] [i_1] [i_2])))) ? (((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) var_17)))) : (((/* implicit */int) arr_0 [i_1]))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */int) arr_9 [i_2] [19ULL] [(unsigned short)18] [i_1])) : (((/* implicit */int) var_3))));
                var_23 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0]);
                var_24 = ((/* implicit */unsigned short) arr_3 [i_0] [i_2]);
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    for (unsigned short i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */short) arr_5 [i_2] [i_2] [i_1]);
                            var_26 -= ((/* implicit */short) ((arr_5 [i_1] [i_2] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                        }
                    } 
                } 
            }
            for (unsigned int i_5 = 3; i_5 < 19; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    var_27 = ((/* implicit */unsigned int) 17762337024198951293ULL);
                    arr_18 [i_0] [i_0] [i_0] [i_6] |= ((/* implicit */unsigned long long int) arr_12 [i_5 - 2] [i_5 - 1] [i_1] [i_5 + 1] [i_1] [i_5 - 2] [i_5 - 1]);
                    var_28 = ((/* implicit */unsigned short) var_8);
                    var_29 = var_0;
                }
                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_5 - 1] [i_5 + 1]))));
                var_30 ^= ((/* implicit */short) var_5);
            }
            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                var_31 *= ((((/* implicit */_Bool) (+(684407049510600322ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43331))) : (arr_8 [i_0] [i_1] [i_1]));
                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7] [i_1] [i_0] [i_0])) ? ((-(var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))));
                var_33 = ((/* implicit */unsigned int) (!(var_17)));
                arr_22 [i_0] [(unsigned char)7] [i_7] [i_7] = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_0]);
            }
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_8 = 2; i_8 < 14; i_8 += 2) 
    {
        arr_25 [i_8 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_8] [i_8 - 1] [i_8 - 2] [i_8] [i_8] [i_8 - 1])) ? (((((/* implicit */unsigned long long int) arr_3 [(_Bool)1] [i_8 - 1])) ^ (var_15))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 684407049510600322ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_3 [i_8 - 2] [i_8]))))));
        /* LoopSeq 2 */
        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_8])) ? (4345236687484297309LL) : (arr_20 [13LL] [i_10] [i_10])))) ? (arr_13 [i_8 + 1] [i_8] [i_11] [i_8] [i_9] [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_10]))))));
                        arr_36 [i_8 + 1] [i_9] [i_8 + 1] [i_9] [i_8 + 1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_8] [i_9] [(unsigned short)12])) - (((/* implicit */int) arr_23 [i_8 + 1]))));
                    }
                } 
            } 
            arr_37 [i_8] [i_8] [9ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_30 [i_9]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_11)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) arr_32 [i_8] [i_8] [i_8 - 1])) ? (((/* implicit */int) arr_14 [19ULL] [i_9] [i_9] [i_8])) : (((/* implicit */int) (unsigned short)32976))))));
            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_8 + 1] [i_8 - 1])) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))));
        }
        for (unsigned long long int i_12 = 2; i_12 < 14; i_12 += 2) 
        {
            arr_42 [(short)8] [4U] = ((/* implicit */_Bool) var_13);
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                var_36 = ((/* implicit */unsigned long long int) arr_30 [i_8]);
                var_37 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_38 [i_8])) / (684407049510600322ULL)));
            }
        }
    }
}
