/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34147
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
    var_15 = ((/* implicit */int) (unsigned char)241);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] = arr_3 [i_0] [i_0 + 2];
            arr_6 [i_0 + 4] [i_0 + 4] [0LL] = ((/* implicit */unsigned short) ((arr_2 [i_0 - 1] [i_1 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        }
        var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-21868))) != (arr_1 [i_0 + 2] [i_0 + 2])));
        arr_7 [i_0] [3LL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 + 3])))))));
        arr_8 [i_0] [i_0] = ((/* implicit */short) 8211233933799358088ULL);
    }
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        arr_12 [7U] [i_2 - 1] = ((/* implicit */int) ((((var_11) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))))) != ((-(var_7)))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 - 1])) ? (arr_10 [i_2 - 1]) : (arr_10 [i_2 + 1])));
        arr_13 [i_2] [8] = ((arr_4 [i_2 - 1]) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_19 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_3 - 1] [i_4] [(signed char)20])) ? (((/* implicit */int) arr_17 [i_3 + 3] [i_3 + 3] [i_4 - 1])) : (((/* implicit */int) var_10))));
            var_18 = ((/* implicit */signed char) arr_15 [i_3]);
            var_19 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3])) ? (var_7) : (((/* implicit */long long int) arr_16 [i_3] [i_4])))));
        }
        arr_20 [4U] = ((/* implicit */unsigned char) var_3);
        /* LoopSeq 2 */
        for (long long int i_5 = 2; i_5 < 21; i_5 += 1) 
        {
            arr_25 [i_3] [i_3 + 1] [i_5] = var_11;
            var_20 = ((/* implicit */int) var_9);
            var_21 = ((((/* implicit */unsigned int) var_6)) / (arr_14 [i_3 + 3]));
        }
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_7 = 1; i_7 < 22; i_7 += 2) 
            {
                for (unsigned char i_8 = 1; i_8 < 21; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        {
                            arr_35 [i_8] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_4)) - (((/* implicit */int) arr_23 [i_7] [i_7]))))));
                            var_22 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_32 [(signed char)7] [i_8] [i_7 + 1] [i_3])) : (-1871694325)))) : ((~(-4470565429505218164LL))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) ((long long int) arr_30 [i_3 + 1] [i_3 + 2] [i_3]));
            arr_36 [5U] [5U] = ((/* implicit */short) ((unsigned int) arr_22 [i_6]));
        }
        arr_37 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((arr_16 [i_3 - 1] [i_3 - 1]) << (((-225595826) + (225595853)))));
    }
    /* LoopSeq 1 */
    for (short i_10 = 0; i_10 < 10; i_10 += 2) 
    {
        arr_41 [i_10] [i_10] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) -225595826)))))));
        arr_42 [i_10] [i_10] = ((/* implicit */int) (short)-27852);
        arr_43 [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)121))));
    }
    var_24 = ((/* implicit */long long int) ((((/* implicit */int) (short)27849)) >= (((/* implicit */int) (_Bool)1))));
}
