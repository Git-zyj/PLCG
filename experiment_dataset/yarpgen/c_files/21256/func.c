/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21256
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) arr_2 [i_0] [15U]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */signed char) var_8);
                    arr_8 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))))), ((~(var_1)))))));
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) min((((int) var_13)), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(_Bool)1] [i_0] [i_0])))))));
        /* LoopSeq 3 */
        for (signed char i_3 = 2; i_3 < 14; i_3 += 3) /* same iter space */
        {
            arr_11 [i_0] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_3 - 2]))));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                arr_14 [i_3] [i_3] = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) < (6ULL)))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) arr_6 [i_0] [i_3] [i_6]);
                            arr_20 [(unsigned short)11] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_3 - 1] [14ULL] [(short)14] [i_6] [(short)14] [i_6])) ? (arr_18 [i_3] [i_3 + 2] [1] [i_5] [i_6] [i_4] [i_6]) : (arr_18 [i_3] [i_3 + 3] [i_4] [i_5] [i_6] [i_0] [i_4])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_3 + 2] [i_3 + 2] [i_5] [i_4] [i_6] [i_5])) ? (arr_18 [i_3] [i_3 - 2] [i_4] [i_5] [i_3 - 2] [i_5] [2LL]) : (((/* implicit */unsigned long long int) var_2)))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5017772017476087577LL)) ? (arr_13 [i_3] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215)))));
                            var_19 = max((max((((/* implicit */long long int) arr_12 [i_0] [i_3 + 2] [i_3 + 1])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_4 [i_0] [i_3]))))), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        {
                            var_20 = (i_3 % 2 == 0) ? (((/* implicit */signed char) ((var_9) << ((((~(arr_21 [i_3] [i_3] [i_4]))) - (16622206357106292062ULL)))))) : (((/* implicit */signed char) ((var_9) << ((((((~(arr_21 [i_3] [i_3] [i_4]))) - (16622206357106292062ULL))) - (12445166181666636004ULL))))));
                            var_21 = ((/* implicit */unsigned long long int) arr_24 [i_0] [i_3] [i_4] [i_0] [i_3]);
                            arr_27 [7LL] [i_0] [i_3 + 1] [7LL] [i_0] [i_7] [i_3] = ((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */unsigned long long int) 1112267373U)) : (15626550289284077608ULL));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) min(((-(arr_3 [i_3 + 3]))), (((((/* implicit */_Bool) arr_3 [i_3 + 3])) ? (arr_5 [i_3 + 1] [i_3]) : (arr_5 [i_3 + 1] [i_3])))));
            }
        }
        for (signed char i_9 = 2; i_9 < 14; i_9 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) arr_26 [i_0] [i_9] [i_0] [i_9] [i_9 - 2] [i_9]);
            arr_30 [i_0] [i_9] [(unsigned char)9] = ((/* implicit */unsigned short) (-((+(arr_15 [7U] [7U] [i_9 - 2])))));
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    for (unsigned short i_12 = 3; i_12 < 15; i_12 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) var_2);
                            arr_40 [i_0] [i_9] [i_9] [3ULL] [i_11] [i_11] [i_12] = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_11] [i_10] [i_10] [i_9] [i_11])))));
                            var_25 = ((/* implicit */_Bool) var_7);
                        }
                    } 
                } 
            } 
            arr_41 [4ULL] [i_9] [i_9] = ((/* implicit */int) arr_37 [i_9] [i_9] [i_9] [i_0] [i_0]);
            arr_42 [i_0] [i_0] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((arr_36 [i_0] [i_0] [i_9 + 2]) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) - (89)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-16506)))))) < (var_9))))) : (max((arr_18 [14] [14] [14] [i_9] [i_0] [i_9 + 2] [14]), (((((/* implicit */_Bool) arr_17 [i_0] [(unsigned char)12] [i_0] [i_0] [i_9])) ? (((/* implicit */unsigned long long int) arr_37 [i_0] [i_0] [12U] [i_0] [i_0])) : (arr_18 [(unsigned char)6] [i_9] [i_9] [i_9] [(signed char)4] [i_9] [i_9])))))));
        }
        for (signed char i_13 = 2; i_13 < 14; i_13 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                for (int i_15 = 3; i_15 < 16; i_15 += 4) 
                {
                    {
                        arr_54 [i_13] = ((/* implicit */signed char) arr_33 [i_15] [(signed char)5]);
                        arr_55 [i_0] [i_13] [i_13] [i_13] = ((/* implicit */signed char) var_11);
                        arr_56 [i_13] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_21 [i_13] [i_13 + 1] [i_15 - 1])) ? (arr_21 [i_13] [i_13 - 1] [i_15 + 1]) : (arr_21 [i_13] [i_13 - 1] [i_15 - 3])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_16 = 0; i_16 < 17; i_16 += 2) 
            {
                for (long long int i_17 = 2; i_17 < 15; i_17 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) max((((/* implicit */int) ((7254199121938396832ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76)))))), ((+(((/* implicit */int) arr_43 [i_13] [i_17 + 2]))))));
                        arr_62 [i_0] [i_13] [i_16] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13070414239378525716ULL)) ? (12480009633396379070ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_0])))))) ? (((/* implicit */unsigned int) arr_49 [i_13] [10U] [10U] [i_17])) : (((arr_2 [i_13] [i_13]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)22))))))));
                    }
                } 
            } 
            arr_63 [i_13] [i_13 + 1] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_13] [i_13 + 2] [i_13] [i_13])) / (((/* implicit */int) arr_31 [i_13] [i_13 + 1] [i_13] [i_0]))))) ? (((unsigned int) 16207048303485141442ULL)) : (((arr_44 [i_13]) / (arr_44 [i_13])))));
            arr_64 [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((arr_28 [(short)7]), (((/* implicit */unsigned short) arr_16 [i_0] [i_13] [i_13] [i_13] [i_13]))))))) / (arr_19 [i_0] [i_13] [i_13] [(unsigned char)1] [i_13])));
        }
    }
    var_27 = ((/* implicit */unsigned int) ((unsigned long long int) var_13));
}
