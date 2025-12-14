/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219382
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) (+(((/* implicit */int) (signed char)1))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-12)) ? (var_13) : (((/* implicit */long long int) 1478538460U))));
        arr_3 [i_0] = ((/* implicit */signed char) ((arr_0 [i_0 + 4]) * (arr_0 [i_0 + 3])));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = var_10;
        arr_8 [i_1] [i_1] = ((/* implicit */short) (((~(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))) : (var_2))))) / (((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    arr_16 [i_1] [i_2] = ((/* implicit */unsigned char) max(((-(1125899906842623ULL))), (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)138)))));
                    var_20 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned char)141)))) <= (((/* implicit */int) arr_14 [i_3] [i_2]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        arr_19 [i_1] [(signed char)9] [6U] [i_4] [8ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-12))));
                        var_21 = ((/* implicit */unsigned long long int) 1342525434U);
                    }
                }
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            arr_27 [8LL] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_6]))) : (arr_24 [i_6])))))) ^ (max((((unsigned long long int) (unsigned char)115)), (((/* implicit */unsigned long long int) arr_23 [4U] [i_6]))))));
            arr_28 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (unsigned char)107))));
            arr_29 [(short)0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_5] [i_6] [i_5])) && (((/* implicit */_Bool) ((unsigned char) arr_26 [i_5] [3U] [i_5])))));
        }
        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            arr_32 [i_5] [i_7] [i_5] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) arr_24 [i_7])), (max((((/* implicit */unsigned long long int) arr_11 [i_5])), (arr_5 [i_5] [i_5]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147))) > (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147))) : (3563234800U))))))));
            arr_33 [i_5] = ((/* implicit */unsigned int) arr_0 [i_5]);
        }
        var_22 += ((/* implicit */unsigned int) max((max((arr_5 [i_5] [i_5]), (((/* implicit */unsigned long long int) (unsigned char)141)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_5] [i_5] [(unsigned char)2])))))));
        arr_34 [i_5] = ((/* implicit */unsigned long long int) (short)-26961);
        arr_35 [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_17 [i_5] [i_5] [i_5] [i_5]), (arr_17 [i_5] [i_5] [i_5] [i_5]))))));
    }
    /* vectorizable */
    for (signed char i_8 = 2; i_8 < 22; i_8 += 3) 
    {
        var_23 = ((/* implicit */short) (+(var_16)));
        arr_38 [i_8] |= ((/* implicit */unsigned int) (unsigned char)255);
    }
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)189)) >= (((/* implicit */int) (unsigned char)150))));
}
