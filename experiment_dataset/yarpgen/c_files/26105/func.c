/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26105
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_14 = ((/* implicit */int) max((var_14), ((-(((/* implicit */int) arr_4 [i_0]))))));
                    arr_7 [i_1] [i_1] = ((/* implicit */int) arr_1 [i_1]);
                    var_15 = ((402918604) >> (((((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_1 + 1])) + (110))));
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [i_1 + 1]))) ? (((/* implicit */int) arr_1 [3])) : ((~(((/* implicit */int) var_8))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) + ((~(((/* implicit */int) var_11))))));
                                var_18 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]))) != (((var_10) - (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                                var_19 = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) var_8)))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 2) 
                {
                    arr_14 [i_1] = ((/* implicit */int) (~(((unsigned long long int) var_0))));
                    var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) && (var_13))) ? ((~(var_5))) : (((/* implicit */unsigned long long int) ((int) arr_13 [i_0] [i_0] [i_0 - 3] [i_5 - 1])))));
                }
                var_21 = ((/* implicit */unsigned char) arr_12 [i_0 - 2] [i_0 - 2] [i_0 + 1]);
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_6 = 2; i_6 < 23; i_6 += 1) 
    {
        var_22 = ((/* implicit */signed char) arr_16 [i_6] [3U]);
        var_23 = ((/* implicit */_Bool) ((int) var_9));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 2) 
    {
        arr_20 [i_7] [i_7] = ((/* implicit */int) arr_0 [i_7] [i_7]);
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_19 [i_7]))));
        var_25 = ((/* implicit */short) (~((~(var_9)))));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 9; i_8 += 3) 
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((short) (unsigned short)33676))) : (((/* implicit */int) var_3))));
        var_27 ^= ((/* implicit */_Bool) var_4);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 1) 
            {
                {
                    arr_30 [i_10] [i_10] = ((/* implicit */short) (-(((/* implicit */int) arr_12 [i_10 - 2] [i_10 - 2] [i_10 - 1]))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 3; i_11 < 9; i_11 += 1) 
                    {
                        for (signed char i_12 = 1; i_12 < 9; i_12 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) arr_16 [16ULL] [i_12]);
                                arr_37 [i_8] [i_10] [8ULL] [i_10] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 2859604469U)) / (var_6)));
                                var_29 = ((/* implicit */_Bool) ((long long int) var_2));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 = ((var_10) >= (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_8 + 1] [i_8 - 1]))));
    }
    for (long long int i_13 = 0; i_13 < 20; i_13 += 1) 
    {
        var_31 = ((/* implicit */unsigned short) var_11);
        var_32 = ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_17 [(signed char)1]))))), (max((arr_17 [i_13]), (arr_17 [i_13])))));
        arr_40 [i_13] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) arr_39 [i_13])) + (var_5))), (((/* implicit */unsigned long long int) arr_38 [i_13]))));
        var_33 ^= ((/* implicit */_Bool) arr_38 [i_13]);
    }
}
