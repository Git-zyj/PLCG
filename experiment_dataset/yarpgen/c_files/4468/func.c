/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4468
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) (signed char)-16))));
    var_17 = ((/* implicit */short) min((((((/* implicit */long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) (signed char)32))))) / ((-(-6164129179315962718LL))))), (((/* implicit */long long int) var_9))));
    var_18 -= ((/* implicit */signed char) var_5);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_19 -= ((/* implicit */int) (((-(((/* implicit */int) (signed char)32)))) > (-1500092935)));
                    var_20 -= ((/* implicit */short) (signed char)16);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) ((long long int) (signed char)0));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            for (unsigned char i_4 = 2; i_4 < 7; i_4 += 3) 
            {
                {
                    var_22 = ((/* implicit */int) (signed char)-87);
                    var_23 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)15335)) / (((/* implicit */int) arr_6 [i_0 + 1] [i_3 - 1] [i_3 + 1] [i_4 + 1]))));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) >= (((/* implicit */int) (signed char)-33)))))))), (min((((arr_16 [(unsigned short)5]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5]))))), (((/* implicit */unsigned int) arr_14 [i_5]))))));
        /* LoopNest 3 */
        for (signed char i_6 = 1; i_6 < 17; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    {
                        arr_26 [i_5] [15LL] [i_6] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) max(((signed char)-87), ((signed char)-80))))));
                        var_25 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5 + 1] [i_5 - 1] [i_6 + 1] [i_8] [i_8] [i_5]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_10 = 2; i_10 < 18; i_10 += 4) 
        {
            for (unsigned short i_11 = 3; i_11 < 19; i_11 += 4) 
            {
                for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    {
                        var_26 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))))))))) % (var_2)));
                        var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87))) | (93203221U))), (((/* implicit */unsigned int) var_5))))), ((~(var_6)))));
                        arr_36 [i_9] [i_10] [i_11] [i_12] [i_9] [i_11] = ((/* implicit */long long int) var_10);
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)61)), ((~(((/* implicit */int) (unsigned short)65521))))))) <= (arr_35 [i_9])));
        arr_37 [i_9] [i_9] = ((/* implicit */unsigned short) max((max((arr_35 [i_9]), (arr_35 [i_9]))), (max((arr_35 [i_9]), (((/* implicit */unsigned long long int) arr_31 [i_9] [i_9] [i_9]))))));
    }
    for (short i_13 = 1; i_13 < 15; i_13 += 4) 
    {
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) 70368744177663LL))));
        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_13 + 1] [(signed char)4]))))), (((arr_18 [i_13 + 1] [i_13 - 1]) / (arr_18 [i_13 - 1] [5]))))))));
        var_31 -= ((/* implicit */signed char) max((((/* implicit */short) ((((/* implicit */int) (unsigned short)4)) >= (((/* implicit */int) (unsigned short)50881))))), (min((arr_30 [2]), (arr_30 [6LL])))));
    }
}
