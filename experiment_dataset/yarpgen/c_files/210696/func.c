/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210696
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (int i_3 = 2; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned char) var_10))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-104))) * (var_8))))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 - 1] [i_3 - 1] [i_3] [i_3] [i_3]))))))));
                        arr_9 [i_2] = ((/* implicit */int) ((long long int) (!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_0)))))));
                        arr_10 [i_2] [i_2] [(_Bool)1] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_6 [(signed char)2] [i_0] [i_0] [i_1 + 3]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (var_9) : (((/* implicit */long long int) var_11))))) ? (1436691134U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_3 [i_1 + 1] [i_1 + 2])))));
                    }
                } 
            } 
        } 
        var_16 = ((((/* implicit */int) var_12)) * (((((/* implicit */int) var_5)) / ((-2147483647 - 1)))));
    }
    for (int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 12; i_8 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)178)) ? (min((((/* implicit */unsigned int) ((short) var_14))), (((((/* implicit */_Bool) -1349014005)) ? (var_8) : (((/* implicit */unsigned int) 7)))))) : (((unsigned int) (unsigned char)141))));
                                var_18 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (4194304U)))), (((var_9) + (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_8 - 2] [i_8 - 2] [(short)7] [i_8] [i_8 - 2] [i_5])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 3; i_9 < 12; i_9 += 4) /* same iter space */
                    {
                        arr_27 [i_5] [7LL] [i_5] = ((/* implicit */unsigned short) arr_23 [i_4] [i_9 - 3] [i_6] [i_9] [i_6] [i_5]);
                        arr_28 [i_4] [i_5] [i_4] [i_5] |= ((/* implicit */unsigned short) (+(-7438034985841490840LL)));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (min((((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) (short)-6433)), (4692100731486305896LL)))))), (((unsigned long long int) var_12))))));
                        arr_29 [(short)0] [i_5] [(unsigned char)8] [2U] = ((/* implicit */short) 7812180367943250594LL);
                    }
                    for (unsigned char i_10 = 3; i_10 < 12; i_10 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((signed char) arr_25 [i_5] [i_6] [7LL] [i_5]))), (min((var_1), (((/* implicit */unsigned long long int) arr_25 [i_5] [i_10 - 2] [i_10 + 1] [i_10]))))));
                        arr_33 [i_6] [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (short)16022)))))) ? (((/* implicit */int) (short)-31872)) : (max((((/* implicit */int) (unsigned char)162)), (var_3)))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            for (signed char i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_8)), (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93))) / (1436691134U)))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (var_6)))))));
                    arr_38 [i_4] = ((/* implicit */unsigned long long int) 1099511365632LL);
                    var_22 = ((/* implicit */unsigned int) var_0);
                    arr_39 [(short)12] [(short)12] [i_12] [i_12] = ((/* implicit */unsigned char) ((max((((/* implicit */int) arr_21 [i_4] [i_11] [i_12] [i_11] [(signed char)4] [i_4])), (1073741823))) >= (((/* implicit */int) ((signed char) 2174519727U)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_13 = 3; i_13 < 10; i_13 += 4) 
    {
        arr_42 [i_13] [9] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_13])) && (((/* implicit */_Bool) arr_7 [i_13] [i_13] [(short)2] [i_13] [i_13])))))) != (var_9)));
        /* LoopNest 3 */
        for (unsigned int i_14 = 0; i_14 < 11; i_14 += 4) 
        {
            for (unsigned char i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                for (unsigned char i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((arr_47 [i_13 - 2] [i_13 + 1] [i_13 + 1]) / (((/* implicit */int) var_12)))))));
                        var_24 = ((/* implicit */signed char) ((1349014004) - (-1)));
                    }
                } 
            } 
        } 
        arr_52 [i_13] &= ((/* implicit */long long int) ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_13 - 1] [12U])))));
    }
    var_25 = var_1;
    /* LoopSeq 1 */
    for (long long int i_17 = 0; i_17 < 18; i_17 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_18 = 1; i_18 < 16; i_18 += 1) 
        {
            arr_60 [i_18] [i_17] [i_18] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)7))));
            var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 9223372036854775807LL))) * (((/* implicit */int) ((signed char) -9223372036854775788LL)))));
        }
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) -7812180367943250600LL))));
    }
}
