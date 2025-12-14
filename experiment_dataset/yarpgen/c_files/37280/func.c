/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37280
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
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)16440)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ^ (((/* implicit */unsigned long long int) ((int) var_11))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) (((+(((unsigned long long int) arr_0 [i_0] [i_0])))) >> (((((/* implicit */unsigned long long int) ((arr_4 [i_0 - 1]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16440)))))) - (max((17778392225019419673ULL), (((/* implicit */unsigned long long int) arr_6 [(unsigned short)0] [i_1] [(unsigned char)11]))))))));
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)53763)), (-1129173433811266749LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) arr_0 [i_0] [(_Bool)1]))))) ? (max((((/* implicit */long long int) ((1877363888U) << (((((/* implicit */int) (unsigned short)16449)) - (16422)))))), (arr_2 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 3])) : (((/* implicit */int) arr_3 [i_0 + 2])))))));
                    arr_8 [i_0] = ((/* implicit */unsigned int) (unsigned short)49086);
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) ((arr_0 [i_0] [i_0]) && (((/* implicit */_Bool) arr_3 [i_0]))))), (3U)))), ((+(min((arr_4 [i_0]), (((/* implicit */long long int) 1877363888U))))))));
        var_15 = (((-(arr_5 [i_0] [i_0 + 2]))) << (((/* implicit */int) ((668351848690131943ULL) == (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0 + 1]))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 13; i_3 += 1) 
        {
            for (long long int i_4 = 2; i_4 < 13; i_4 += 2) 
            {
                {
                    arr_17 [i_0] [i_4 + 1] [i_3 - 1] [i_0] = ((/* implicit */_Bool) ((signed char) (~(3247509083U))));
                    var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */int) arr_3 [i_0])) : (-723719979)))))), (arr_15 [i_4] [i_0 + 2] [i_0 + 2])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            for (signed char i_6 = 1; i_6 < 11; i_6 += 2) 
            {
                {
                    arr_23 [i_0] [i_0] = ((/* implicit */short) (((-(((/* implicit */int) arr_12 [i_0 + 1] [i_0])))) ^ ((+(((/* implicit */int) arr_12 [i_0 + 3] [i_0]))))));
                    arr_24 [i_5] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned short)49086)), (arr_1 [i_0])));
                    var_17 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((signed char) arr_21 [i_0]))) ? ((~(668351848690131942ULL))) : (((/* implicit */unsigned long long int) (~(arr_5 [i_0] [i_0]))))))));
                    arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */int) (unsigned short)92)), (min((arr_11 [i_0 + 2]), (arr_11 [i_5]))))), (((/* implicit */int) max((((/* implicit */short) arr_10 [i_0] [i_5] [i_6 - 1])), ((short)12193))))));
                }
            } 
        } 
    }
    for (short i_7 = 2; i_7 < 13; i_7 += 3) 
    {
        arr_30 [i_7] = ((/* implicit */short) (-((((!(((/* implicit */_Bool) (unsigned short)16440)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) == (arr_29 [i_7]))))) : (((arr_28 [i_7] [i_7]) % (arr_28 [(signed char)2] [i_7 + 3])))))));
        var_18 = ((/* implicit */_Bool) (-(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16440))) >= (arr_26 [(unsigned short)3] [i_7])))) + (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11772)) && (((/* implicit */_Bool) arr_27 [(short)2])))))))));
        arr_31 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(31U)))) ? (arr_26 [i_7 - 2] [i_7 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_26 [i_7] [i_7]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49086)))))))))) ^ (((unsigned long long int) ((int) 1877363888U)))));
    }
    for (int i_8 = 1; i_8 < 15; i_8 += 4) 
    {
        arr_34 [i_8] = ((/* implicit */unsigned char) var_5);
        arr_35 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_8])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)119))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_26 [i_8] [i_8 + 1]) < (arr_29 [(unsigned char)11]))))) : (3247509083U)))) : (arr_26 [16ULL] [i_8 - 1])));
        arr_36 [(unsigned char)10] = ((/* implicit */long long int) (+(((/* implicit */int) ((arr_29 [i_8 + 1]) < (((/* implicit */long long int) ((/* implicit */int) ((arr_28 [i_8] [i_8]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))))));
    }
    var_19 = ((/* implicit */unsigned long long int) (signed char)82);
}
