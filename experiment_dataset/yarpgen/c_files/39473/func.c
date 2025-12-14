/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39473
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
    var_14 &= ((/* implicit */_Bool) var_4);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) max((arr_0 [i_0]), (arr_0 [i_0])));
        var_16 = ((/* implicit */unsigned int) (unsigned short)42866);
    }
    /* LoopSeq 2 */
    for (int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_8 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_0)) : (var_6)))) && (((/* implicit */_Bool) var_11)));
        var_17 = ((/* implicit */signed char) (+((+(-64)))));
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            arr_11 [i_1] [3LL] = ((/* implicit */_Bool) (+(((unsigned long long int) min((arr_0 [i_1]), (((/* implicit */int) (short)30316)))))));
            arr_12 [(_Bool)1] [i_2] [(unsigned short)1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-106)), ((~(((unsigned int) (signed char)-96))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((((/* implicit */int) var_0)) & (arr_3 [i_1]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) (signed char)124))))))))));
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((long long int) min((((signed char) var_9)), ((signed char)111)))))));
            /* LoopNest 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    {
                        var_20 = ((/* implicit */signed char) var_6);
                        var_21 |= max((((/* implicit */int) ((short) arr_15 [i_1] [i_3]))), (max((arr_0 [i_3]), (((/* implicit */int) ((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))))));
                        var_22 = ((/* implicit */long long int) ((2510671757U) % (((/* implicit */unsigned int) 2023126514))));
                        arr_22 [i_5] [i_1] = ((/* implicit */int) arr_7 [i_1]);
                        arr_23 [i_1] [(signed char)7] [i_4] [i_5] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((var_12), (var_11)))) || (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_17 [i_1] [i_1])))))), (((_Bool) 2325639893U))));
                    }
                } 
            } 
            arr_24 [i_1] = min((((/* implicit */unsigned int) (unsigned short)56702)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-44))) : (var_8))));
        }
        for (signed char i_6 = 1; i_6 < 11; i_6 += 1) 
        {
            arr_28 [i_1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_6 + 2]) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2325639881U))))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_0))))) : (arr_16 [i_6 + 2] [i_6 + 3] [i_6])));
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                for (int i_8 = 1; i_8 < 13; i_8 += 2) 
                {
                    {
                        arr_33 [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) arr_19 [i_1] [(_Bool)1] [5] [i_1] [i_8])) : ((((_Bool)1) ? (((/* implicit */int) arr_19 [i_6 + 2] [i_6] [i_6 + 3] [i_6 + 1] [i_6 - 1])) : (((/* implicit */int) ((_Bool) (signed char)-36)))))));
                        arr_34 [i_1] [i_6] [i_1] [i_7] [i_8] [i_8] = ((/* implicit */long long int) ((((_Bool) ((((/* implicit */_Bool) (short)-26024)) ? (((/* implicit */int) arr_26 [(_Bool)1])) : (arr_0 [9])))) && (((/* implicit */_Bool) arr_19 [9] [i_8] [1U] [9] [i_7]))));
                        arr_35 [i_6] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_1] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (var_9)))), (min((((/* implicit */long long int) var_2)), (8751729599903256386LL)))))) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) arr_26 [i_7]))));
                    }
                } 
            } 
            arr_36 [i_6] [(short)6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (min((((unsigned int) arr_7 [i_6])), (((/* implicit */unsigned int) max((var_3), (arr_27 [i_1] [i_6])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_19 [i_1] [i_6] [4ULL] [i_6] [(signed char)5])) : (((/* implicit */int) arr_19 [i_1] [i_6] [i_1] [i_6] [10]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_6])) ? (8751729599903256377LL) : (((/* implicit */long long int) arr_3 [16U])))))))))));
        }
        for (signed char i_9 = 2; i_9 < 12; i_9 += 3) 
        {
            var_23 = ((/* implicit */long long int) arr_3 [i_1]);
            arr_41 [i_9] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [(signed char)11] [8LL] [8LL]))))) || (((/* implicit */_Bool) ((signed char) arr_2 [i_9])))))) != (((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_1])))) && (((/* implicit */_Bool) min((var_6), (((/* implicit */int) arr_26 [(signed char)0]))))))))));
            arr_42 [(short)5] |= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_30 [i_1] [i_9] [(short)12])) ? (var_6) : (var_6))), (((/* implicit */int) ((signed char) 2072244349)))));
        }
    }
    for (unsigned long long int i_10 = 3; i_10 < 15; i_10 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) ((signed char) min((((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((arr_1 [i_10]) >= (((/* implicit */int) arr_45 [i_10] [i_10]))))))));
        arr_47 [12] [i_10] = ((unsigned char) (~(((/* implicit */int) (unsigned char)255))));
        arr_48 [i_10] [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) var_11)))));
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((unsigned short) (+(arr_43 [i_10 - 1])))))));
        arr_49 [(short)7] = ((/* implicit */unsigned short) max((((int) min((((/* implicit */int) var_13)), (arr_0 [i_10])))), (((min((((/* implicit */int) (signed char)105)), (var_4))) / (arr_43 [i_10])))));
    }
    var_26 = var_4;
}
