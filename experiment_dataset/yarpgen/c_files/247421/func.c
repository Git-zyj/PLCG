/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247421
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
    var_13 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))) | (max((((/* implicit */unsigned long long int) var_1)), (var_3))))), (((2047ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_14 -= ((/* implicit */long long int) var_1);
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_1] [5] [(unsigned short)15])) - ((-(((/* implicit */int) ((unsigned char) arr_4 [(unsigned short)2] [(unsigned short)2] [(unsigned char)13] [i_0])))))));
                }
            } 
        } 
        arr_6 [i_0] [i_0] = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) ((signed char) var_4))))), (((((/* implicit */int) ((_Bool) (unsigned short)65535))) != (((/* implicit */int) ((((/* implicit */int) (short)32752)) <= (((/* implicit */int) (unsigned short)65522)))))))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_3])) || (arr_5 [i_0] [i_0 - 1] [i_0 + 1])))))) - (max((2047ULL), (((/* implicit */unsigned long long int) ((unsigned char) 9007199254740991LL))))))))));
                        arr_14 [(signed char)15] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) ((min((min((var_3), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_4] [i_4])))), (((/* implicit */unsigned long long int) ((var_12) / (((/* implicit */long long int) var_6))))))) + (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0 + 3])))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        var_17 ^= ((/* implicit */_Bool) ((int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_6])) || (((/* implicit */_Bool) var_6))))))));
        var_18 = ((/* implicit */int) (((((-(368488946486788392LL))) + (9223372036854775807LL))) << (((((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_16 [i_6])))))) - (1)))));
        arr_17 [i_6] [i_6] |= ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) ^ (16901252775712645043ULL)));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 1; i_7 < 23; i_7 += 2) 
        {
            arr_21 [i_7] [i_7] = ((/* implicit */unsigned char) ((unsigned short) 35184372088831LL));
            var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((int) arr_16 [i_6])) + ((-(1277195401)))))), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) * (var_8)))));
        }
    }
    /* LoopSeq 4 */
    for (short i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        arr_26 [1LL] = ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
        arr_27 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((unsigned short) arr_15 [i_8])))) * (((/* implicit */int) ((unsigned short) var_1)))));
        var_20 = ((/* implicit */unsigned char) arr_20 [i_8] [i_8]);
        var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_10)) | (arr_18 [i_8])))))));
        var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17))) < (7984333588190972007ULL)))))));
    }
    for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 1) 
    {
        arr_30 [i_9] = min((((/* implicit */long long int) ((short) (unsigned short)10408))), (((((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9] [i_9]))) % (var_12))) + (((/* implicit */long long int) ((/* implicit */int) var_4))))));
        var_23 ^= ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_4)))))), (((((((/* implicit */int) arr_0 [i_9 + 1])) & (((/* implicit */int) var_4)))) | (((/* implicit */int) var_10))))));
    }
    for (int i_10 = 1; i_10 < 9; i_10 += 2) 
    {
        var_24 = ((/* implicit */signed char) (-(((int) var_10))));
        /* LoopNest 3 */
        for (unsigned char i_11 = 1; i_11 < 9; i_11 += 4) 
        {
            for (long long int i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    {
                        var_25 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)1573)) >> (((18446744073709551615ULL) - (18446744073709551611ULL)))));
                        arr_40 [i_12] [i_11] [i_12] [i_13] = ((/* implicit */unsigned int) var_0);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_16 [i_10])))))));
        arr_41 [2LL] = ((/* implicit */unsigned char) ((short) ((unsigned short) max((arr_38 [i_10] [i_10] [i_10] [(unsigned short)2]), (((/* implicit */unsigned char) arr_34 [i_10] [(unsigned char)0] [i_10]))))));
    }
    for (int i_14 = 0; i_14 < 21; i_14 += 3) 
    {
        arr_44 [(short)14] [i_14] = ((/* implicit */unsigned short) (+(min((((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_14] [i_14] [i_14]))) * (arr_20 [i_14] [i_14]))), (((/* implicit */long long int) ((var_1) - (((/* implicit */int) arr_43 [i_14])))))))));
        var_27 = ((/* implicit */unsigned int) (-(((var_1) / (((/* implicit */int) arr_43 [i_14]))))));
    }
}
