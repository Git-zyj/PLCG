/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/544
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_10))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    arr_10 [i_0 + 2] [i_0 + 2] [i_0] = ((/* implicit */signed char) var_1);
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) max((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4109732994U)))) & (549755813884LL))), (((/* implicit */long long int) 4109732994U)))))));
                    var_14 = (((~(((((/* implicit */int) arr_9 [i_0 + 3] [i_0 - 1])) >> (((var_8) - (8607383203266987069ULL))))))) | (((/* implicit */int) arr_3 [i_0])));
                }
                arr_11 [i_0] [i_0] = min((((/* implicit */unsigned int) ((((/* implicit */long long int) 4109732992U)) != (3287255280129108676LL)))), (((unsigned int) ((var_7) / (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (_Bool)1))));
        var_16 = ((/* implicit */unsigned int) ((unsigned short) max((arr_8 [i_3] [i_3] [i_3]), (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_5))))))));
    }
    for (long long int i_4 = 1; i_4 < 14; i_4 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) ((unsigned short) (~(arr_16 [i_4 + 1] [i_4 + 1]))));
        var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned short) var_6))), (max((((/* implicit */unsigned int) arr_17 [i_4 - 1])), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) * (arr_16 [13] [i_4])))))));
    }
    for (long long int i_5 = 1; i_5 < 14; i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 11; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    arr_28 [i_5] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_6 - 1])) * ((-(((/* implicit */int) arr_17 [i_6]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((((-(4185215051U))) + (((/* implicit */unsigned int) min((var_0), (var_7)))))));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        arr_31 [i_5] [i_7] [i_6] [i_5] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_22 [(unsigned char)12] [i_6 + 1] [(unsigned char)12]) : (4185215053U))));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (~(var_2))))));
                        var_20 *= ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_17 [i_5 - 1])), (arr_24 [i_5 + 1] [i_7]))), (((/* implicit */unsigned long long int) ((arr_19 [i_6 + 2] [i_5 + 1]) > (arr_19 [i_6 + 4] [i_5 - 1]))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (min((((((/* implicit */_Bool) 4185215051U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-14134)))), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-66)), (var_5)))))))));
                        arr_32 [0ULL] [i_5] = ((signed char) ((var_7) % (((/* implicit */int) max(((signed char)65), (((/* implicit */signed char) (_Bool)1)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 2; i_9 < 11; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            {
                                arr_39 [i_5] = ((/* implicit */signed char) max((var_5), (((/* implicit */unsigned short) ((signed char) var_7)))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_5))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_40 [i_5] = ((/* implicit */long long int) ((((1452090056U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61))))) * (((/* implicit */unsigned int) ((var_7) / (arr_19 [i_5 - 1] [i_5 - 1]))))));
    }
    for (long long int i_11 = 1; i_11 < 14; i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_12 = 3; i_12 < 13; i_12 += 2) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)112)) || (((/* implicit */_Bool) (unsigned short)16383))))), (min((4294967295U), (((/* implicit */unsigned int) -1))))));
                    var_24 = ((/* implicit */long long int) var_5);
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (((-(((/* implicit */int) arr_33 [i_14] [i_14])))) <= (((/* implicit */int) var_5)))))));
                                var_26 &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)27715)) ? (((/* implicit */int) ((var_2) >= (((/* implicit */long long int) arr_19 [(_Bool)1] [i_12 - 3]))))) : (((/* implicit */int) arr_29 [i_11] [i_11] [i_11 - 1] [i_11 + 1] [i_11 - 1] [(unsigned char)0]))))));
                                var_27 = var_0;
                                var_28 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (min((((((/* implicit */_Bool) arr_30 [5U] [i_11] [i_15] [5U] [1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)511))) : (var_4))), (min((((/* implicit */long long int) var_0)), (var_4)))))));
                            }
                        } 
                    } 
                    arr_55 [i_11] [i_11] [i_11] = ((/* implicit */int) min((min((var_2), (((/* implicit */long long int) arr_27 [2U])))), (((/* implicit */long long int) (-(63))))));
                }
            } 
        } 
        arr_56 [i_11 - 1] |= ((/* implicit */signed char) var_5);
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (+((-2147483647 - 1)))))));
        var_30 = ((/* implicit */long long int) min((var_30), (max((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) (unsigned short)65535)), (var_4)))))));
    }
}
