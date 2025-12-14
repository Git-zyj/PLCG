/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43772
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_10 &= 7ULL;
        arr_2 [i_0] [i_0] = ((/* implicit */int) 18446744073709551610ULL);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) 668111342U))));
                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (arr_5 [i_1] [i_1]))))));
                arr_15 [i_2] = ((/* implicit */_Bool) (+(arr_0 [i_2] [11])));
                arr_16 [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(short)0] [i_2])) ? (arr_0 [i_1] [i_3]) : (arr_0 [i_1] [i_1])));
                var_13 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_2])) ? (((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_3])) : ((~(((/* implicit */int) (unsigned short)11676))))));
            }
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (+(arr_0 [i_1] [i_2]))))));
            arr_17 [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_1] [i_1]);
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                var_15 = (unsigned short)36974;
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (unsigned int i_6 = 2; i_6 < 15; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) max((var_16), (var_1)));
                            arr_27 [i_1] [i_2] [i_4] [i_5] [(unsigned char)7] [i_2] [i_4] = ((/* implicit */unsigned short) var_7);
                            var_17 = ((/* implicit */int) arr_21 [i_2] [i_2]);
                            var_18 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_1] [i_6] [i_4] [i_4]))))) + (((/* implicit */int) ((arr_26 [i_2] [i_5] [i_4] [i_2] [i_2]) < (((/* implicit */int) (unsigned short)34444))))));
                        }
                    } 
                } 
            }
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_19 |= ((/* implicit */unsigned short) (+(arr_23 [i_1] [i_7] [i_7] [i_1] [i_7])));
            var_20 = ((/* implicit */unsigned long long int) (short)8);
            arr_30 [i_7] = ((/* implicit */unsigned char) arr_0 [i_7] [i_1]);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                arr_35 [i_9] [i_8] [i_1] = ((/* implicit */unsigned short) arr_9 [i_9]);
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(arr_3 [i_1] [i_8]))))));
                /* LoopNest 2 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (short i_11 = 3; i_11 < 15; i_11 += 2) 
                    {
                        {
                            arr_40 [i_8] [i_8] [i_8] [i_1] = ((/* implicit */unsigned short) var_0);
                            var_22 &= ((/* implicit */unsigned int) (+(-544413773)));
                        }
                    } 
                } 
                var_23 = ((((/* implicit */_Bool) arr_24 [i_1] [(unsigned short)8] [i_9] [i_9] [i_8] [i_1] [i_1])) ? (arr_23 [i_1] [i_1] [i_1] [i_1] [i_9]) : (((/* implicit */unsigned long long int) arr_0 [i_9] [i_8])));
                arr_41 [i_8] [i_8] [i_9] = ((/* implicit */int) ((_Bool) (short)-8));
            }
            var_24 = ((/* implicit */unsigned short) ((arr_7 [i_1] [(unsigned short)1] [i_8]) / (arr_7 [i_1] [i_1] [i_8])));
        }
        /* LoopSeq 1 */
        for (int i_12 = 0; i_12 < 16; i_12 += 3) 
        {
            arr_45 [i_1] [i_1] [i_12] = ((/* implicit */unsigned char) (+(var_3)));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 2; i_13 < 15; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    {
                        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_13 - 2] [i_13 + 1] [i_13 - 2] [i_13 - 2] [i_13 - 1] [i_13 - 2] [i_13 - 2]))) <= (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_13])) ? (arr_20 [i_1] [i_12] [i_13] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_14] [i_1])))))));
                        var_26 -= ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_22 [i_1] [i_12] [i_1] [i_14] [i_12])))) == (((/* implicit */int) var_4))));
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((((/* implicit */_Bool) arr_32 [i_1] [(unsigned short)1] [i_13 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_32 [4ULL] [7ULL] [i_13 + 1])))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        arr_53 [(short)6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) (!(arr_12 [i_15] [i_15] [i_15]))))))) <= (arr_24 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [(_Bool)1])));
        arr_54 [(unsigned char)10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_15] [i_15]))))), (arr_38 [i_15] [10U] [i_15] [4ULL] [i_15])))) % (4038092603U)));
    }
    var_29 = ((/* implicit */unsigned int) var_4);
    var_30 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (var_3)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) var_8)));
}
