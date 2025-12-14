/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50172
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) 9416912638849852034ULL);
                arr_5 [i_0] = arr_3 [i_0] [i_0] [i_0];
                arr_6 [19ULL] [i_1] = ((/* implicit */unsigned int) max((72048797944905728LL), (((/* implicit */long long int) (unsigned char)96))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [(signed char)10] [(signed char)10] [(short)3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))) > (((((/* implicit */long long int) 2080374784U)) / (arr_0 [i_0])))));
                                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1])) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) -72048797944905719LL)))))) : ((-(((/* implicit */int) (unsigned short)12))))));
                                arr_19 [i_3] = max((((((/* implicit */_Bool) ((int) 72048797944905722LL))) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22))))), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0])) ? (arr_7 [i_2] [i_1] [i_0] [i_0]) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) -2121814515)) ? (arr_8 [(short)17] [i_1]) : (((/* implicit */unsigned long long int) 2214592522U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_14 [i_0] [(short)10] [i_0] [20U] [8U]), (((/* implicit */signed char) var_14)))))))), (min((arr_2 [i_0] [i_1] [i_2]), (arr_8 [i_2] [i_1])))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max(((-(((/* implicit */int) (signed char)23)))), (var_18)));
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    {
                        arr_32 [i_5] [i_6] [(unsigned char)6] [i_6] = ((/* implicit */int) max((((/* implicit */long long int) ((signed char) arr_13 [i_5] [i_6] [i_5 - 1] [i_8]))), ((-(-72048797944905719LL)))));
                        arr_33 [i_7] [(signed char)8] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((max((((/* implicit */long long int) arr_11 [i_5] [i_5] [i_5 - 2] [i_5 + 1] [i_5])), (var_15))) / (((/* implicit */long long int) ((/* implicit */int) max((arr_11 [i_5] [(signed char)3] [i_5] [i_8] [i_5 - 1]), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) || (var_13))))))))));
                    }
                } 
            } 
        } 
        arr_34 [i_5] = ((/* implicit */_Bool) 66977792);
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            arr_37 [i_5] = (~(((/* implicit */int) ((((/* implicit */_Bool) (short)-18194)) || (((/* implicit */_Bool) (-2147483647 - 1)))))));
            arr_38 [i_5] [i_5] [i_5] = ((/* implicit */signed char) min((-66977779), (((/* implicit */int) (_Bool)1))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 3; i_10 < 10; i_10 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            for (unsigned int i_12 = 1; i_12 < 10; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 2; i_13 < 11; i_13 += 2) 
                {
                    {
                        arr_48 [i_10 - 1] [i_11] [i_11] [i_13] [7] [i_11] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-64))));
                        arr_49 [i_10] [i_11] [5] [i_13 - 1] = ((/* implicit */unsigned char) ((short) -1791979252541959363LL));
                    }
                } 
            } 
        } 
        arr_50 [i_10] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_22 [i_10 + 1] [i_10 - 1]))));
        arr_51 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_10 - 3] [22] [i_10 - 1] [i_10 - 1] [i_10 - 3])) | (arr_30 [i_10 + 1] [i_10] [0LL] [i_10] [i_10 - 1])));
        arr_52 [i_10 - 1] = ((/* implicit */unsigned long long int) ((arr_10 [i_10 - 2]) / (((/* implicit */int) arr_42 [5ULL] [i_10 + 1] [i_10]))));
        /* LoopSeq 2 */
        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
        {
            arr_56 [i_14] [i_10] = ((/* implicit */long long int) var_5);
            /* LoopNest 3 */
            for (unsigned int i_15 = 1; i_15 < 9; i_15 += 1) 
            {
                for (long long int i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    for (int i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        {
                            arr_66 [i_17] [i_10] [i_14] [i_14] [i_10] = ((/* implicit */unsigned short) ((signed char) var_3));
                            arr_67 [i_17] [i_16] [i_14] [i_14] [i_14] [i_14] [i_10] = ((/* implicit */int) ((((/* implicit */int) arr_3 [i_15 - 1] [i_15 + 1] [i_15 + 3])) > (((/* implicit */int) arr_63 [i_15 + 1] [i_15 + 2] [i_15 + 3] [i_15 + 3] [i_10 - 3]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_18 = 0; i_18 < 12; i_18 += 1) /* same iter space */
        {
            arr_71 [i_10 + 2] = ((/* implicit */signed char) arr_46 [i_18] [i_18] [i_18] [i_18] [i_10 + 1] [i_10 + 1]);
            arr_72 [i_10] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_65 [i_10 - 2] [i_10 - 2] [i_10 - 1] [i_10 + 2] [i_10])) ? (arr_21 [i_10 - 1] [i_18]) : (arr_21 [i_10 - 2] [i_18])));
        }
    }
    var_21 = ((/* implicit */short) (-(((/* implicit */int) var_13))));
}
