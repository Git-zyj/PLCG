/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248678
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
    var_11 = ((/* implicit */_Bool) ((long long int) var_7));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_0 + 2] [i_1] [i_0 + 2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0]))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_12 [i_0] [(short)3] [i_2] [i_0] = ((/* implicit */signed char) (-(min((max((((/* implicit */long long int) arr_11 [i_0 - 1] [(signed char)6])), (arr_5 [i_2] [i_2] [i_2 - 2]))), (((/* implicit */long long int) min((arr_10 [i_0] [i_1] [i_2] [i_3]), (arr_10 [(short)12] [i_1] [1U] [i_0]))))))));
                        arr_13 [i_3] [i_3] [i_3] [i_2] [4U] [(unsigned short)12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) arr_7 [i_3] [i_1] [i_0])))))))));
                    }
                    for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        arr_16 [i_0] [i_1] [i_4] [i_2] [i_4] = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (arr_3 [i_0 + 2])))))));
                        arr_17 [i_1] [i_1] [i_2] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) min((arr_8 [i_0] [i_0] [i_0]), (var_4))))));
                    }
                }
            } 
        } 
        arr_18 [i_0 + 2] = ((/* implicit */unsigned long long int) arr_4 [(unsigned short)14] [(signed char)2] [3U]);
        /* LoopSeq 1 */
        for (int i_5 = 2; i_5 < 12; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 12; i_8 += 2) 
                    {
                        {
                            arr_30 [i_0] [i_5] [i_6] [i_7] [i_8 + 3] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_19 [i_0]))))));
                            arr_31 [i_0 + 3] [i_8] [i_6] [(unsigned short)10] [i_8] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_8]))))), (var_2))), (max((arr_3 [i_0]), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_0)), (arr_24 [i_0] [i_0 + 2] [i_0 + 2] [i_7] [(short)12] [i_8]))))))));
                        }
                    } 
                } 
            } 
            arr_32 [i_5] = ((/* implicit */signed char) (+(arr_2 [i_5])));
            arr_33 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min(((~(((/* implicit */int) var_10)))), (((/* implicit */int) var_4))))), ((-((-(arr_22 [13LL] [i_0] [i_0])))))));
        }
        arr_34 [i_0] = ((/* implicit */short) max((((/* implicit */int) arr_24 [i_0] [i_0] [0LL] [0LL] [i_0] [i_0])), (max((((/* implicit */int) ((signed char) arr_4 [i_0] [i_0] [i_0 - 1]))), ((+(((/* implicit */int) var_1))))))));
    }
    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
    {
        arr_37 [i_9] [i_9] = ((/* implicit */short) (+(max((min((((/* implicit */unsigned long long int) arr_35 [i_9])), (var_3))), ((~(var_2)))))));
        arr_38 [i_9] = ((/* implicit */unsigned int) min((arr_35 [i_9]), (((/* implicit */short) var_0))));
    }
    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
    {
        arr_41 [i_10] [i_10] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_40 [i_10] [i_10])), ((~(((/* implicit */int) ((((/* implicit */int) arr_39 [i_10])) <= (((/* implicit */int) var_1)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            arr_46 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((_Bool) max((((/* implicit */short) arr_42 [i_11] [i_11] [i_10])), (arr_40 [i_10] [i_11]))));
            arr_47 [i_10] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_39 [7ULL]))))))))));
            arr_48 [i_10] [i_11] [15ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) var_7)))));
        }
        arr_49 [i_10] = (+(((((/* implicit */int) ((unsigned short) arr_43 [i_10]))) & (((((/* implicit */int) var_0)) | (((/* implicit */int) arr_40 [i_10] [i_10])))))));
        arr_50 [i_10] = ((/* implicit */_Bool) min((((max((var_2), (((/* implicit */unsigned long long int) arr_45 [(_Bool)1])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_1)))))))), ((+((-(var_2)))))));
    }
    for (signed char i_12 = 0; i_12 < 21; i_12 += 3) 
    {
        arr_55 [i_12] [i_12] = ((/* implicit */signed char) max(((-((+(((/* implicit */int) arr_54 [i_12] [i_12])))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_54 [(_Bool)1] [i_12])))))))));
        /* LoopNest 3 */
        for (short i_13 = 2; i_13 < 18; i_13 += 4) 
        {
            for (unsigned int i_14 = 2; i_14 < 20; i_14 += 3) 
            {
                for (signed char i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    {
                        arr_62 [i_15] [i_12] [i_12] [i_12] = (!(((/* implicit */_Bool) ((signed char) arr_54 [i_13] [i_13]))));
                        arr_63 [i_12] [i_13] [i_13] [i_15] [i_15] [i_15] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_59 [i_13 + 3] [i_14 - 1] [i_15]))));
                        arr_64 [i_13] = ((/* implicit */signed char) var_7);
                    }
                } 
            } 
        } 
    }
}
