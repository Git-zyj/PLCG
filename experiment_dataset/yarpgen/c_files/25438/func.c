/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25438
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 1557035086)))) || ((_Bool)1)))) != (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((((/* implicit */_Bool) 2147482624)) && (((/* implicit */_Bool) var_3))))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        arr_3 [i_0] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_0 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_1] = ((/* implicit */unsigned char) (+(((arr_6 [i_1] [i_1]) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) == (var_0))))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2 + 3] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32763)) | ((~(-1557035073)))));
                        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((-1234948545) + (2147483647))) >> (((/* implicit */int) (!((!(((/* implicit */_Bool) var_9))))))))))));
                        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) ((arr_6 [i_0] [i_3 + 1]) && (((/* implicit */_Bool) var_8))))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_3 - 1] [i_3 - 1] [(short)13]))))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                var_13 = ((/* implicit */long long int) ((signed char) arr_17 [i_0] [21U] [i_0] [i_1]));
                var_14 += ((/* implicit */int) arr_12 [i_0] [i_4] [i_4] [i_0]);
            }
            for (short i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                var_15 = ((((((/* implicit */_Bool) var_5)) ? (arr_10 [i_0] [i_0] [(signed char)8] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) | (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0] [i_5]))))));
                var_16 *= ((/* implicit */_Bool) arr_19 [i_1] [i_0]);
                var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_5] [i_1])))))) * (((((unsigned int) arr_18 [i_1] [i_1] [i_1])) - (((/* implicit */unsigned int) 480371822))))));
                arr_21 [i_1] = ((/* implicit */short) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(short)20]))) ^ (arr_5 [7] [i_1] [i_0]))));
            }
            var_18 ^= ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))) + (arr_10 [i_0] [i_1] [(signed char)6] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
        }
        for (long long int i_6 = 2; i_6 < 22; i_6 += 1) 
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) -1234948528)) || (((/* implicit */_Bool) (unsigned char)251)))) || (((/* implicit */_Bool) arr_11 [i_6 - 2] [i_6 + 1]))))) * (((((/* implicit */int) arr_13 [i_6 + 1] [(_Bool)1] [i_6 - 2] [i_6] [i_0])) + (((/* implicit */int) arr_18 [i_6 + 1] [i_6] [i_6]))))));
            var_20 |= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_22 [i_0] [i_6]))));
            arr_26 [i_6] = ((/* implicit */unsigned char) (!(((arr_17 [i_6] [i_6 - 2] [i_6 - 2] [i_6]) > (arr_17 [i_6] [i_6 + 1] [i_6 + 1] [i_6])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_30 [i_0] [5] [i_6] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
                arr_31 [i_6] = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_6] [(_Bool)1]))))) ^ (((arr_10 [i_0] [i_6] [i_7] [i_6]) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6])))))));
            }
        }
        for (int i_8 = 2; i_8 < 22; i_8 += 1) 
        {
            arr_35 [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
            arr_36 [i_8] = ((/* implicit */unsigned short) (~((~(((((/* implicit */long long int) ((/* implicit */int) var_5))) | (arr_19 [i_0] [i_8])))))));
            var_21 = ((/* implicit */_Bool) ((-1557035087) + (((/* implicit */int) (unsigned char)0))));
            arr_37 [i_0] [i_8 - 2] &= ((/* implicit */unsigned short) var_1);
        }
    }
    for (int i_9 = 4; i_9 < 12; i_9 += 3) 
    {
        var_22 = ((/* implicit */short) var_7);
        /* LoopSeq 2 */
        for (unsigned short i_10 = 3; i_10 < 11; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        {
                            arr_50 [i_9] [i_9] [i_9] [i_9] [i_9 + 1] [i_9 - 3] [i_9] = var_5;
                            arr_51 [5] [i_12] [i_9] [i_10] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)87)) + (((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) - (((((/* implicit */int) var_3)) % (((/* implicit */int) var_1))))))));
                        }
                    } 
                } 
            } 
            arr_52 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (short)-1708);
        }
        /* vectorizable */
        for (signed char i_14 = 0; i_14 < 13; i_14 += 4) 
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (arr_14 [i_9 - 3] [i_9 - 3])));
            arr_55 [i_9] [i_14] [i_9] = ((/* implicit */unsigned short) (~(-1234948545)));
            /* LoopNest 3 */
            for (long long int i_15 = 1; i_15 < 10; i_15 += 1) 
            {
                for (long long int i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    for (int i_17 = 1; i_17 < 12; i_17 += 3) 
                    {
                        {
                            arr_64 [i_9] [i_9] [i_15] [i_16] [(unsigned char)6] [i_14] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_9))) << ((~(((/* implicit */int) var_3))))));
                            var_24 = ((/* implicit */int) var_2);
                        }
                    } 
                } 
            } 
        }
        var_25 = (+((((~(((/* implicit */int) arr_32 [i_9] [14LL])))) & (((((/* implicit */int) arr_38 [i_9 - 2] [i_9])) ^ (((/* implicit */int) (signed char)-81)))))));
    }
    var_26 = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_3)) & ((~(((/* implicit */int) (unsigned short)65527))))))));
    var_27 = ((/* implicit */signed char) (((-(((/* implicit */int) var_4)))) != (((/* implicit */int) var_5))));
}
