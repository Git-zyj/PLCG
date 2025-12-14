/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207664
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
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) ((((var_4) ? (((((/* implicit */unsigned long long int) var_0)) * (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_1] [i_1])))))) * (var_1))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (unsigned char)111)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-14546)))))) != (((var_1) + (var_7)))))) : (var_0)));
            }
        } 
    } 
    var_11 ^= ((((var_7) | (((/* implicit */unsigned long long int) var_0)))) << (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_2))) && (((_Bool) var_9))))));
    var_12 = ((/* implicit */unsigned char) (~(var_6)));
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_13 = ((((unsigned long long int) arr_3 [i_2])) << (((((((/* implicit */_Bool) arr_1 [(signed char)2])) ? (((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))) : (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_5 [(unsigned short)3] [i_2] [18])) : (((/* implicit */int) var_4))))))) - (18446744073709551532ULL))));
        var_14 = arr_7 [i_2] [5ULL];
        /* LoopSeq 1 */
        for (int i_3 = 3; i_3 < 12; i_3 += 3) 
        {
            arr_13 [(short)1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_8 [(signed char)11] [i_3]))))) : (arr_12 [i_3 - 1])));
            arr_14 [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((unsigned int) ((_Bool) (short)-14546)))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_15 = ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [3] [i_3 - 3]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 3) 
                        {
                            var_16 = ((/* implicit */short) var_5);
                            arr_23 [i_5] [i_2] [(_Bool)1] [(_Bool)1] [i_2] [i_5] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_2))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_2] [i_3] [i_5] [(_Bool)1] [0ULL])) && (((/* implicit */_Bool) var_0))))));
                        }
                    }
                } 
            } 
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_8 = 3; i_8 < 10; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) arr_7 [i_7] [i_7]);
                                arr_39 [i_7] [11ULL] [i_7] [i_7] [i_11] [(unsigned char)7] = ((/* implicit */int) arr_38 [i_7] [i_7] [i_7] [(unsigned char)3] [(_Bool)1] [i_11 - 1] [i_11]);
                                var_18 = ((/* implicit */unsigned long long int) var_8);
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned char)0])) ? ((+(((/* implicit */int) arr_10 [i_7] [i_7] [i_9])))) : (((((/* implicit */int) var_8)) / (((/* implicit */int) var_5))))))) ? (((((/* implicit */int) arr_1 [i_7])) - (arr_20 [i_8 + 2] [i_10 + 1] [i_7] [i_11 - 1] [i_11]))) : (((/* implicit */int) ((_Bool) var_6)))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_9])) * (((/* implicit */int) arr_4 [i_9]))))) ? (((((/* implicit */int) arr_4 [i_9])) / (((/* implicit */int) arr_4 [i_9])))) : (((((/* implicit */int) arr_4 [i_9])) / (((/* implicit */int) arr_4 [i_9]))))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((arr_12 [i_7]) * (arr_12 [i_7]))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)49850)) << (((((/* implicit */int) (short)14545)) - (14543)))))))))));
        var_22 += var_2;
    }
}
