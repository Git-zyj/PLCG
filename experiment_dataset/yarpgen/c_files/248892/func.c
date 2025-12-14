/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248892
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
    var_13 = var_0;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_14 = (i_0 % 2 == zero) ? ((((-(((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [(_Bool)1]) : (6391206))))) >> (((min(((+(var_3))), (arr_2 [i_0] [i_1]))) - (1600295490U))))) : ((((-(((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [(_Bool)1]) : (6391206))))) >> (((((min(((+(var_3))), (arr_2 [i_0] [i_1]))) - (1600295490U))) - (561989000U)))));
                arr_4 [(unsigned short)3] [i_0] [20ULL] = ((/* implicit */unsigned int) ((min((((var_11) < (6391226))), ((!(var_2))))) ? (((/* implicit */long long int) min((var_12), (-1)))) : (min((min((arr_1 [4] [4]), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) arr_3 [(unsigned short)17]))))));
            }
        } 
    } 
    var_15 = var_6;
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (long long int i_4 = 4; i_4 < 6; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_16 = 4294967295U;
                                var_17 = ((/* implicit */unsigned short) ((-26) + (((/* implicit */int) arr_13 [i_4 + 2] [i_4 - 3] [i_4 - 2] [0]))));
                            }
                        } 
                    } 
                    arr_16 [(unsigned short)9] = ((/* implicit */unsigned int) (unsigned char)40);
                }
            } 
        } 
        arr_17 [0U] [(unsigned char)6] = ((/* implicit */unsigned int) arr_6 [8U]);
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            for (unsigned short i_8 = 1; i_8 < 9; i_8 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned int) var_5);
                    var_19 += ((/* implicit */long long int) arr_11 [7LL]);
                    arr_23 [4] [i_7] [(unsigned short)4] = ((/* implicit */long long int) ((4294967295U) - (((/* implicit */unsigned int) arr_5 [3]))));
                    var_20 += ((/* implicit */unsigned long long int) ((int) arr_8 [i_8 - 1]));
                    arr_24 [i_7] [1] [2] = ((/* implicit */unsigned short) ((int) ((unsigned char) arr_6 [9])));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                for (int i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    {
                        var_21 += ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) -2)))))));
                        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4294967282U) / (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */int) arr_6 [i_2])) : (arr_7 [i_2] [(unsigned char)5] [i_2])));
                    }
                } 
            } 
        } 
        var_23 ^= ((/* implicit */_Bool) 8191U);
    }
    var_24 = ((((/* implicit */int) var_9)) >> ((((-(var_3))) - (2132682763U))));
}
