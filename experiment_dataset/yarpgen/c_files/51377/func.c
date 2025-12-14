/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51377
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
    var_19 = ((/* implicit */unsigned int) (!((!((!(((/* implicit */_Bool) var_1))))))));
    var_20 = ((/* implicit */signed char) (-((~(var_12)))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-126)) <= (((/* implicit */int) (signed char)125))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)126))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])))))) > (arr_4 [i_0] [i_0] [i_0])))) + (((/* implicit */int) arr_3 [(signed char)0] [i_1]))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0])) > (((/* implicit */int) arr_5 [i_0] [i_1])))))) <= (arr_2 [i_0] [i_0] [9ULL]))))) + (arr_2 [i_1] [i_1] [4U])));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                arr_9 [i_2] [i_1] [i_0] = ((/* implicit */int) (~(((arr_7 [i_2] [i_1] [i_2]) / (arr_4 [i_0] [i_1] [i_0])))));
                arr_10 [i_0] [i_2] [i_2] = ((/* implicit */int) (~(arr_8 [9LL] [i_1] [i_1] [10ULL])));
                arr_11 [i_0] [i_2] [(signed char)1] = ((/* implicit */long long int) arr_7 [i_2] [i_1] [i_2]);
            }
            arr_12 [(signed char)3] [i_1] [i_1] = ((/* implicit */long long int) arr_1 [i_0]);
            arr_13 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((arr_8 [i_1] [i_1] [i_0] [i_0]) > (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_1])))))))));
        }
        for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            arr_16 [i_3] = ((/* implicit */unsigned int) arr_5 [i_0] [i_3]);
            var_23 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
            arr_17 [i_0] [i_3] = ((/* implicit */unsigned long long int) (-(arr_8 [i_0] [i_3] [i_0] [i_0])));
            arr_18 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_3] [i_0]))));
        }
        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            arr_21 [i_0] [i_4] [i_0] = ((/* implicit */long long int) (~((((+(((/* implicit */int) arr_1 [7])))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4])) && (((/* implicit */_Bool) arr_4 [i_0] [i_4] [i_0])))))))));
            arr_22 [(short)1] [i_4] = ((/* implicit */long long int) (((~((~(arr_20 [i_0] [i_4]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_4] [8U])))));
        }
        arr_23 [1] = ((/* implicit */int) ((11299966195013170675ULL) + (((/* implicit */unsigned long long int) 7449218551917223768LL))));
        /* LoopSeq 4 */
        for (int i_5 = 3; i_5 < 10; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 9; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    {
                        arr_30 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_6] [1U] [i_6] [i_6])) && ((!((!(((/* implicit */_Bool) arr_0 [i_0]))))))));
                        var_24 = ((/* implicit */unsigned short) arr_15 [i_6] [i_6 - 3] [i_7]);
                        arr_31 [i_0] [i_0] [i_6] [i_0] [i_6 + 2] [i_6] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [9]))))));
                        arr_32 [(_Bool)1] [i_5 - 2] [(unsigned char)1] [i_6 - 2] [i_7] [i_6] = (~(((/* implicit */int) ((((((/* implicit */int) arr_5 [(signed char)8] [i_6 - 2])) / (((/* implicit */int) arr_5 [i_6] [i_7])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_6] [i_5 + 1] [i_6 - 1] [i_7])))))))));
                    }
                } 
            } 
            arr_33 [i_5] [i_5] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2909576467U)))))));
        }
        for (int i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            arr_36 [i_0] [(short)4] = ((/* implicit */int) (-(arr_20 [i_0] [i_8])));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_41 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_14 [9U] [i_8] [i_9])) * (((((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_34 [i_0])))) - ((-(((/* implicit */int) arr_35 [i_0] [1]))))))));
                        arr_42 [i_10] [i_10] [i_0] [i_0] [i_10] [i_0] = ((/* implicit */unsigned short) ((((arr_28 [i_10] [i_8] [i_9] [2U]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_34 [7ULL])) > (((/* implicit */int) arr_0 [i_0])))))))) + (((/* implicit */unsigned long long int) (-(arr_8 [i_0] [i_8] [i_0] [i_10]))))));
                        arr_43 [i_0] [i_0] [i_8] [i_0] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_10] [i_10] [i_9]))))) - (((arr_28 [i_10] [7] [i_10] [i_10]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_8])))))))));
                        var_25 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) -1745818019)) / ((-(2909576467U))))) / (((/* implicit */unsigned int) (+(((arr_37 [i_8] [i_9] [i_9]) - (((/* implicit */int) arr_35 [i_8] [i_10])))))))));
                        arr_44 [i_10] [i_10] [i_10] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (((-(arr_28 [i_10] [i_8] [i_9] [i_10]))) <= (((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_8] [i_0] [i_10]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [3LL])))))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_11 = 1; i_11 < 8; i_11 += 1) 
        {
            arr_48 [i_11] [i_11 + 1] [i_11 + 3] = ((((/* implicit */unsigned long long int) ((arr_46 [i_11]) + (arr_46 [i_11])))) <= ((-(arr_4 [i_0] [i_11 + 1] [i_11 - 1]))));
            /* LoopSeq 2 */
            for (unsigned char i_12 = 3; i_12 < 7; i_12 += 2) 
            {
                arr_52 [i_0] [i_0] [i_0] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [i_0]))))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) - (arr_46 [i_11])))));
                arr_53 [i_11] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_50 [i_12] [i_11] [5LL])))))));
                var_26 = (-((-(arr_20 [i_0] [i_11]))));
            }
            for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                arr_57 [i_11] [i_11] [i_13] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [10ULL] [i_13]))) / (arr_20 [i_0] [i_13])))));
                var_27 = ((/* implicit */unsigned char) arr_50 [i_0] [i_11] [i_13]);
            }
            var_28 = ((/* implicit */unsigned short) arr_51 [i_0] [i_11 - 1] [i_11 + 3] [i_11]);
            arr_58 [i_11] [i_11] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))));
        }
        /* vectorizable */
        for (unsigned short i_14 = 4; i_14 < 9; i_14 += 3) 
        {
            arr_62 [(unsigned short)5] [i_14 + 2] [i_14] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1]))) / (arr_46 [i_14])))));
            var_29 = ((/* implicit */long long int) arr_61 [i_14 + 2]);
        }
    }
    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 2) 
    {
        var_30 = ((/* implicit */long long int) arr_65 [i_15] [i_15]);
        var_31 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_63 [i_15]))))));
    }
}
