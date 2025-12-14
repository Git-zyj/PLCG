/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242297
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((arr_7 [i_0] [i_2] [i_0] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_2 [(unsigned char)12]))))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_4 [(unsigned char)10] [i_2] [(unsigned char)10])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))))))));
                    var_19 += ((/* implicit */unsigned short) 2199023190016ULL);
                }
            } 
        } 
    } 
    var_20 = ((((/* implicit */_Bool) 564788676)) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)13885)), (var_4)))), (var_12))) : (((/* implicit */unsigned long long int) (+(var_2)))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)254)) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)-12641))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (unsigned short)51637))));
        var_23 = ((/* implicit */unsigned long long int) arr_9 [i_3]);
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            var_24 -= ((/* implicit */signed char) -1846403535);
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_3 [(_Bool)1]))));
            /* LoopSeq 2 */
            for (unsigned int i_5 = 1; i_5 < 16; i_5 += 1) /* same iter space */
            {
                arr_16 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */int) arr_7 [i_3] [4LL] [i_4] [i_5]);
                var_26 = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_11 [i_5]))))));
                var_27 = 4294967295U;
                arr_17 [i_3] [i_4] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5 - 1] [16ULL] [i_5 - 1]))) * (arr_15 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])));
            }
            for (unsigned int i_6 = 1; i_6 < 16; i_6 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    var_28 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_13 [i_3] [i_4])) ? (arr_8 [(unsigned char)9] [i_4] [i_6] [i_7]) : (((/* implicit */unsigned long long int) 15LL)))));
                    var_29 = ((/* implicit */long long int) ((unsigned char) (unsigned short)11));
                    arr_23 [(short)8] |= arr_10 [i_6 + 1] [i_3];
                    var_30 = ((/* implicit */int) min((var_30), ((-(((/* implicit */int) arr_3 [12LL]))))));
                    var_31 = ((/* implicit */unsigned long long int) (unsigned short)13899);
                }
                for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
                {
                    arr_28 [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8896)) ? (((/* implicit */int) (unsigned short)13885)) : (((/* implicit */int) arr_22 [i_3] [i_4] [i_6] [i_8] [7LL]))))) ? (arr_7 [i_6] [i_6] [i_6] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [(unsigned short)3] [i_6] [i_4])))))));
                    var_32 -= (!(((/* implicit */_Bool) arr_4 [(unsigned char)14] [6] [i_8])));
                }
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */long long int) arr_24 [i_6] [i_3] [i_6] [i_6 + 1] [i_4] [i_6]);
                    var_34 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_12))) && (((/* implicit */_Bool) arr_19 [i_3] [(unsigned char)5]))));
                    var_35 += (unsigned short)35814;
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 3; i_10 < 16; i_10 += 2) 
                    {
                        arr_33 [i_10 - 1] [i_9] [i_6] [i_6] [i_6] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_10 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_3] [i_4] [i_6] [i_6] [i_9] [(_Bool)1]))) : (var_16)));
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_3])) ^ (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185))) : (arr_5 [6ULL] [i_6] [i_6 + 1]))))));
                        arr_34 [i_3] [i_3] [i_4] [i_6] [i_9] [(short)12] [i_6] = ((/* implicit */unsigned long long int) arr_20 [i_9] [1U] [i_9] [i_9] [i_9] [i_9]);
                    }
                }
                for (unsigned short i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
                {
                    var_37 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_10 [(unsigned char)14] [i_4])) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) arr_10 [i_3] [i_3]))))));
                    var_38 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_29 [i_3] [(short)6] [14] [i_3])))) ? (((/* implicit */int) ((unsigned short) 1U))) : ((+(((/* implicit */int) arr_21 [i_11] [(unsigned char)2] [i_6] [i_11]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        var_39 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (-1846403535) : (((/* implicit */int) arr_9 [i_3])))))));
                        arr_40 [i_3] [4] [i_6] [i_11] [i_12] |= ((/* implicit */short) arr_19 [i_3] [i_3]);
                        arr_41 [i_3] [i_11] [i_6] [i_12] [i_6] [i_11] [i_12] = arr_37 [i_3] [i_6];
                    }
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [3ULL] [i_3] [i_6] [i_6 - 1])) ? (((/* implicit */int) arr_36 [i_3] [i_4] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_36 [i_3] [i_4] [i_6] [i_6 + 1]))));
                }
                var_41 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_39 [i_4] [i_6] [i_6] [i_3] [(unsigned char)5] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                arr_42 [i_6] [i_4] [i_6] = (unsigned char)137;
            }
        }
    }
}
