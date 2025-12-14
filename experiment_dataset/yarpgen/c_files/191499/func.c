/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191499
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 22; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [1])) | (((/* implicit */int) ((arr_7 [i_2 - 4] [i_2] [i_2] [i_1 + 1]) || (arr_7 [i_2 + 2] [i_2] [i_2] [(_Bool)1]))))));
                        var_21 = ((((/* implicit */_Bool) ((signed char) ((arr_2 [i_3] [i_2] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_3]))) : (var_17))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_0] [(_Bool)1] [(_Bool)1])) ? (var_13) : (((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [i_3]))))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_0]))))), ((+(arr_4 [i_0] [i_1 - 1] [i_2]))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (max((((/* implicit */unsigned long long int) (+(-7110372624172872555LL)))), (max((6371437615018582866ULL), (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) var_3))));
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (long long int i_5 = 1; i_5 < 23; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    {
                        arr_22 [i_0] [i_4] [i_6] [i_4] [i_4] [i_0] &= ((/* implicit */unsigned char) arr_11 [i_6] [i_5 + 1] [i_0] [i_0]);
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_4))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        var_23 = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) arr_1 [i_7])))));
        arr_26 [i_7] [i_7] |= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) arr_6 [(signed char)11] [(signed char)11] [(signed char)11] [15])) : (((/* implicit */int) arr_9 [i_7] [i_7]))))) || (arr_2 [i_7] [23] [i_7])))), (((((/* implicit */int) arr_2 [i_7] [i_7] [i_7])) >> (((/* implicit */int) arr_2 [i_7] [i_7] [i_7]))))));
        var_24 = ((/* implicit */_Bool) (short)15);
        var_25 = ((/* implicit */short) (~((((-(((/* implicit */int) (unsigned char)202)))) ^ (((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_7]))))));
    }
    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_6 [i_8] [i_8] [i_8] [i_8]))));
        arr_29 [i_8] [i_8] = ((long long int) (-(((/* implicit */int) (signed char)-118))));
        arr_30 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) 913498498)) ? (var_8) : ((~(-4428310082532395274LL)))));
    }
    var_27 |= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (-913498516) : (var_19)))), (var_7)))) ? (((/* implicit */unsigned long long int) ((unsigned int) 2256567214U))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)210)) - (var_18)))) & (max((var_17), (((/* implicit */unsigned long long int) var_6))))))));
}
