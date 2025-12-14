/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36038
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
    var_12 = var_8;
    var_13 = ((/* implicit */int) var_7);
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */int) (unsigned short)17238)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_0))))))) && ((!((!(var_5)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) min((var_15), (min((((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) (unsigned short)15244))), (arr_1 [i_0] [i_0])))), (max((arr_0 [i_0]), (arr_0 [i_0])))))));
        arr_2 [i_0] &= ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)18610)))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
        {
            var_16 += ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_4 [i_0])) / (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
            var_17 = ((/* implicit */signed char) -818261966);
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((4006453910U), (((/* implicit */unsigned int) (-(arr_3 [i_0] [i_1] [(short)22]))))))) ? (max((((/* implicit */int) arr_7 [i_0])), (((((/* implicit */_Bool) (unsigned short)50292)) ? (((/* implicit */int) arr_5 [i_2] [i_1] [4ULL])) : (((/* implicit */int) arr_8 [(signed char)11] [(signed char)11] [i_2 - 1])))))) : (((/* implicit */int) arr_10 [17ULL] [8] [8] [i_3]))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) max((max((((((/* implicit */int) (unsigned short)8605)) / (((/* implicit */int) arr_11 [(_Bool)1] [i_1] [i_2] [i_3] [i_4])))), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_5 [i_0] [i_3] [i_0])))))), (((/* implicit */int) arr_10 [13] [i_2] [13] [i_4]))));
                            arr_14 [i_4] [i_3] [i_2 + 1] [i_1] [i_0] = ((signed char) ((((/* implicit */_Bool) (~(arr_3 [(signed char)1] [i_1] [i_2 + 1])))) ? (((/* implicit */int) ((_Bool) arr_13 [(unsigned char)6] [(signed char)16]))) : (((/* implicit */int) ((unsigned short) arr_8 [i_1] [(unsigned short)4] [i_4])))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            arr_17 [13ULL] [i_0] [i_1] [i_2] [i_3] [9] = ((/* implicit */int) max(((unsigned short)27), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_4 [i_1])))))))));
                            arr_18 [i_5] [i_1] [i_2] [i_0] [i_5] [i_3] [i_2] = ((/* implicit */_Bool) max((max((arr_16 [i_1] [i_1] [i_1] [i_3] [i_5] [8LL] [i_2 - 1]), (((/* implicit */unsigned long long int) min((arr_10 [i_5] [i_2 - 1] [i_2 - 1] [i_1]), (arr_11 [i_0] [i_1] [i_2] [i_3] [i_0])))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (short)4)))))))));
                        }
                        arr_19 [i_0] [i_1] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0]))))));
                    }
                } 
            } 
        }
        for (int i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
        {
            arr_22 [i_0] [i_6] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_21 [(_Bool)1] [i_6] [(_Bool)1]))))))));
            var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) min((arr_6 [(short)12] [(short)12]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) min((arr_20 [i_0] [i_6]), (((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) ((short) arr_13 [i_6] [i_0])))))));
        }
        for (short i_7 = 1; i_7 < 24; i_7 += 2) 
        {
            arr_25 [i_7] [i_0] &= ((/* implicit */unsigned char) arr_13 [21ULL] [21ULL]);
            arr_26 [i_7] [16ULL] [i_7] = ((/* implicit */unsigned char) ((unsigned short) max(((unsigned short)18615), (((/* implicit */unsigned short) (_Bool)1)))));
            var_21 = ((/* implicit */_Bool) ((signed char) ((signed char) arr_15 [(unsigned char)2] [i_7 - 1])));
        }
        /* LoopSeq 3 */
        for (unsigned short i_8 = 3; i_8 < 22; i_8 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                arr_32 [i_9] [i_8] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)46926)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0]))))))))));
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max(((~(arr_16 [17] [17] [i_8 - 2] [i_8 + 2] [i_8] [i_8] [i_8 + 1]))), (min((min((arr_28 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0])))))))));
                            var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((min((arr_0 [i_0]), (arr_33 [i_0] [i_8] [i_8] [i_10]))), (((arr_3 [i_0] [i_0] [i_10]) << (((arr_16 [i_9] [i_10] [i_0] [i_10] [i_9] [i_8] [i_0]) - (5744494063300188704ULL)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_9] [(unsigned char)3] [(unsigned char)3] [3])) ? (68169720922112ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_11] [i_8] [i_8 + 1] [i_10])))))) ? (max((arr_6 [i_9] [i_9]), (((/* implicit */unsigned long long int) arr_0 [i_10])))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_8] [(signed char)7])), (arr_3 [i_8] [i_9] [i_8]))))))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50292))))) ? (((unsigned long long int) arr_12 [i_0] [(_Bool)1] [(_Bool)1] [(unsigned char)10] [i_11] [i_11] [i_9])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15244)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_11] [(unsigned short)2] [i_11] [i_11] [(short)7] [i_11] [i_11]))) : (arr_23 [i_0] [i_0])))))))))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (-(arr_31 [i_0] [i_8 - 2] [i_10] [i_11]))))));
                            arr_37 [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) (~((-((-(arr_35 [i_0] [i_8] [i_9] [i_0] [i_11])))))));
                        }
                    } 
                } 
            }
            arr_38 [i_8] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)141))) ? (min((((long long int) arr_15 [i_0] [i_0])), (((/* implicit */long long int) 78816260)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_8 - 1] [(_Bool)1]))))));
        }
        /* vectorizable */
        for (unsigned char i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((_Bool) arr_30 [(unsigned char)13] [(_Bool)1] [i_0])))));
            var_27 = ((/* implicit */signed char) (+(((/* implicit */int) ((short) arr_21 [(_Bool)1] [(_Bool)1] [i_12])))));
            arr_43 [i_12] [i_12] [i_12] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_15 [i_12] [i_12]))))));
            var_28 = ((/* implicit */short) (-(((/* implicit */int) arr_27 [i_0]))));
        }
        for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_7 [i_13])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_7 [i_13])))));
            var_30 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_11 [i_0] [i_13] [i_0] [i_13] [i_13]))))))));
        }
        arr_48 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_31 [8] [i_0] [(signed char)13] [i_0]))) ? (((/* implicit */long long int) (+(arr_44 [i_0] [i_0])))) : (((long long int) arr_39 [i_0] [i_0]))))), ((+(min((((/* implicit */unsigned long long int) arr_27 [i_0])), (arr_6 [i_0] [i_0])))))));
    }
}
