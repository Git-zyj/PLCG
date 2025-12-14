/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225483
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_18))));
        var_21 = ((/* implicit */unsigned long long int) (signed char)-30);
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_22 += ((/* implicit */signed char) ((arr_4 [i_1 - 1]) << (((arr_4 [i_1 + 1]) - (4093173695173978683ULL)))));
        var_23 = ((/* implicit */unsigned char) ((int) (signed char)-18));
        /* LoopSeq 3 */
        for (signed char i_2 = 4; i_2 < 12; i_2 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) (~(arr_9 [i_1 - 2] [3] [i_2 - 3])));
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_5 + 1]))));
                            arr_17 [i_1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2 - 2] [i_2 + 1] [i_2 - 1]))) : (var_1)));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (((/* implicit */int) arr_6 [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1 - 1]))));
        }
        for (signed char i_6 = 4; i_6 < 12; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                arr_23 [i_1] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_16))))) >> (((12582087859341470190ULL) - (12582087859341470161ULL)))));
                var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (((/* implicit */unsigned long long int) (-(arr_9 [4U] [i_6] [i_7])))) : (arr_4 [i_1])));
                var_28 += ((/* implicit */unsigned short) ((signed char) ((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6] [i_6]))))));
                var_29 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)52029)) & (((/* implicit */int) (unsigned short)13507))));
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1] [i_1]))) - (var_17)))) ? (((((/* implicit */_Bool) var_0)) ? (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) arr_3 [i_1 - 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6 + 1] [i_6 + 2] [i_6 - 2])))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                arr_26 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2218281519U)) ? (((/* implicit */unsigned int) arr_3 [i_6 - 3])) : (var_9)));
                var_31 = ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
                var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) arr_24 [i_8] [i_8] [i_1 - 2] [i_1 - 2]))));
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_6] [2] [i_8] [i_6] [i_1 - 2] [i_1 - 2])))))));
            }
            arr_27 [i_1] [i_1] [i_6] = ((/* implicit */_Bool) (-(arr_12 [i_6 - 3] [i_1 - 1] [i_1])));
            var_34 = ((/* implicit */short) ((arr_9 [i_6 - 3] [i_6 + 1] [i_1 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6 - 1] [i_6 - 3] [i_1 - 2])))));
            var_35 = ((/* implicit */signed char) var_17);
        }
        for (signed char i_9 = 4; i_9 < 12; i_9 += 1) /* same iter space */
        {
            var_36 |= ((/* implicit */unsigned char) -2063926000564959044LL);
            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2477875643U)) ? (var_1) : (((arr_4 [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
            /* LoopNest 3 */
            for (unsigned int i_10 = 1; i_10 < 13; i_10 += 4) 
            {
                for (signed char i_11 = 3; i_11 < 12; i_11 += 3) 
                {
                    for (unsigned int i_12 = 1; i_12 < 12; i_12 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned char) arr_19 [i_10] [i_12]);
                            var_39 = ((/* implicit */int) var_19);
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (long long int i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
    {
        var_40 = (+(((/* implicit */int) ((short) var_4))));
        var_41 ^= ((((((int) arr_38 [i_13])) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62063))) < (1360874916U)))));
        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_13])) ? (arr_38 [i_13]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139)))));
    }
    for (long long int i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
    {
        arr_42 [i_14] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) 9409400558726341069ULL)) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) var_7)), (arr_39 [i_14])))))))));
        var_43 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(arr_41 [i_14])))) & (3002155183U)));
        arr_43 [i_14] [i_14] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)66)) ? (8995565059456548273ULL) : (((/* implicit */unsigned long long int) 9077124098449111175LL)))));
        var_44 = ((/* implicit */unsigned int) arr_38 [i_14]);
    }
    var_45 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_18))));
    var_46 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((var_10) ? (((/* implicit */int) (unsigned short)18918)) : (((/* implicit */int) var_6))))))), ((~(((8995565059456548273ULL) >> (((((/* implicit */int) (unsigned char)66)) - (65)))))))));
}
