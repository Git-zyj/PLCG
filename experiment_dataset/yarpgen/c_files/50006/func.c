/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50006
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_11 *= ((/* implicit */unsigned short) (_Bool)1);
                        var_12 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)37195)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned short)28341))))))));
                        var_13 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_4)) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1] [i_2])))), (min((((((((/* implicit */int) (signed char)-83)) + (2147483647))) << (((((/* implicit */int) (unsigned short)28331)) - (28331))))), ((+(((/* implicit */int) (_Bool)1))))))));
                        var_14 += ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
                        arr_12 [i_2] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((arr_3 [i_0] [i_0] [i_0]) - (2551722776U)))))) : (var_0)))));
                    }
                } 
            } 
        } 
        var_15 += max((max((min((var_9), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) ((_Bool) (_Bool)1))))), (((/* implicit */unsigned int) min((min((((/* implicit */short) (_Bool)1)), (var_6))), (((/* implicit */short) (_Bool)1))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_16 *= ((/* implicit */unsigned int) min(((-(((((/* implicit */_Bool) 11510627538809298721ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)185)))))), (((/* implicit */int) min(((signed char)-46), (((/* implicit */signed char) (_Bool)1)))))));
        arr_15 [i_4] |= ((/* implicit */_Bool) ((short) (-(((arr_5 [i_4] [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)31923))))))));
    }
    for (unsigned short i_5 = 3; i_5 < 15; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_25 [i_6] [10U] [i_7] [i_8] [i_7] = ((/* implicit */unsigned int) arr_7 [i_5] [i_7] [i_6]);
                        var_17 += ((/* implicit */unsigned int) min((((unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_20 [i_6])) - (98)))))), (((unsigned long long int) ((var_10) >> (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        var_18 ^= ((/* implicit */_Bool) min((arr_13 [i_5 - 3]), (((/* implicit */unsigned short) arr_20 [i_5]))));
    }
    for (signed char i_9 = 2; i_9 < 22; i_9 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            for (signed char i_11 = 1; i_11 < 22; i_11 += 3) 
            {
                for (signed char i_12 = 1; i_12 < 22; i_12 += 3) 
                {
                    {
                        arr_36 [i_9] [i_10] [i_11] [i_12] [i_11 - 1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_31 [i_9] [i_11] [i_11])))) ? ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_9))))) : (((unsigned int) arr_30 [i_12 + 2] [i_11 + 1] [i_9 - 1]))));
                        arr_37 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (signed char)9)), (var_0))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_34 [i_9 - 1] [i_12 + 2] [i_11] [i_11])))))))) && (min((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_10)))), (arr_32 [i_9] [i_10] [i_11 + 1])))));
                        var_19 *= ((/* implicit */short) arr_26 [i_9 + 2] [i_12]);
                        var_20 = ((/* implicit */short) min((var_20), ((short)-27716)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 1) 
        {
            for (unsigned char i_14 = 2; i_14 < 23; i_14 += 2) 
            {
                {
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_1))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (max((min((arr_26 [i_9 - 2] [i_9]), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) (-(var_0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_31 [2U] [i_9] [16U]), (((/* implicit */unsigned int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (6936116534900252896ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58402))))))))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned int i_15 = 3; i_15 < 12; i_15 += 2) 
    {
        for (signed char i_16 = 2; i_16 < 12; i_16 += 3) 
        {
            for (short i_17 = 0; i_17 < 13; i_17 += 1) 
            {
                {
                    var_23 += ((/* implicit */signed char) var_6);
                    var_24 = ((/* implicit */short) ((signed char) (+(var_9))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_18 = 1; i_18 < 16; i_18 += 3) 
    {
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
        {
            {
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min(((~(arr_52 [i_19] [i_19] [i_19 - 1]))), (((/* implicit */unsigned int) arr_49 [12U])))) : (min((arr_28 [i_18 + 1] [i_18]), (arr_3 [i_18] [i_18] [(_Bool)1]))))))));
                arr_53 [i_18] = var_10;
            }
        } 
    } 
}
