/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213229
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_4 [i_0 + 3] [i_0]), (((/* implicit */unsigned short) (signed char)79)))))))), (min((arr_0 [i_0 + 3]), (((/* implicit */unsigned int) (unsigned short)44425))))));
                    var_19 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) arr_1 [i_0 - 1])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            {
                arr_13 [i_3] [i_4] = ((/* implicit */int) 2523985974567485883LL);
                arr_14 [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) min((((/* implicit */int) (unsigned char)118)), (1983921292))))), (2147483647)));
                arr_15 [i_4] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (-2523985974567485896LL));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_5 = 3; i_5 < 20; i_5 += 4) 
    {
        var_20 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_5 - 1]))));
        arr_18 [i_5] = ((((/* implicit */_Bool) (unsigned char)109)) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)172))))));
        arr_19 [i_5] = ((/* implicit */short) (-(((/* implicit */int) arr_16 [i_5 - 3]))));
        var_21 = (((-(((/* implicit */int) (_Bool)1)))) >= (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_16 [i_5 + 1])))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 3; i_6 < 20; i_6 += 3) 
    {
        arr_23 [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) : (var_4))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        /* LoopSeq 3 */
        for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            var_22 = ((/* implicit */short) var_1);
            arr_27 [i_6 - 3] [i_6 - 3] [i_6] = ((/* implicit */int) ((unsigned int) ((signed char) (_Bool)0)));
        }
        for (short i_8 = 2; i_8 < 19; i_8 += 4) 
        {
            var_23 = arr_16 [i_6];
            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)41815))));
        }
        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            var_25 = ((/* implicit */int) var_15);
            var_26 = (i_6 % 2 == zero) ? (((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)0)) ? (arr_31 [i_6 - 3] [i_9]) : (358402102))) >> (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6] [i_6]))) : (131071U))) - (4294942522U)))))) : (((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)0)) ? (arr_31 [i_6 - 3] [i_9]) : (358402102))) >> (((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6] [i_6]))) : (131071U))) - (4294942522U))) - (12663U))))));
            arr_33 [i_6] [i_6] = ((/* implicit */int) ((unsigned long long int) 9786777167740549253ULL));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 2; i_10 < 20; i_10 += 2) 
        {
            for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                for (unsigned int i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)218)) * (((/* implicit */int) (unsigned short)65529))))) || (((/* implicit */_Bool) (signed char)-70))));
                        /* LoopSeq 1 */
                        for (long long int i_13 = 1; i_13 < 20; i_13 += 4) 
                        {
                            var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_6])) ? (arr_41 [i_6 - 3] [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6 - 1] [i_10 + 1])))));
                            var_29 *= ((/* implicit */unsigned short) 1424261942);
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) 1061981629066596217LL))));
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (~(arr_36 [i_13 - 1] [i_13] [i_10 - 1] [i_6 - 1]))))));
                        }
                    }
                } 
            } 
        } 
        arr_43 [i_6] = (signed char)-70;
    }
    var_32 = ((/* implicit */signed char) min(((+(((/* implicit */int) var_14)))), (((/* implicit */int) var_3))));
}
