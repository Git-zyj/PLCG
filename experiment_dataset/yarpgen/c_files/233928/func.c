/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233928
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
    var_15 = ((/* implicit */unsigned int) var_3);
    var_16 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) max((var_4), (((/* implicit */short) var_9))))))) * (max((((/* implicit */int) ((((/* implicit */int) (short)25)) < (((/* implicit */int) var_9))))), ((~(((/* implicit */int) (signed char)-86))))))));
    var_17 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */signed char) var_7);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
        {
            arr_7 [i_0] [i_1] [(signed char)7] = ((/* implicit */short) ((unsigned int) (_Bool)1));
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(2928083744U)))))) ? (((/* implicit */int) (signed char)-120)) : (((((((/* implicit */int) min((var_6), (((/* implicit */short) var_8))))) + (2147483647))) << (((((/* implicit */int) arr_1 [i_0] [i_1])) - (10287)))))));
            arr_9 [i_0] = ((/* implicit */short) min((-690055029), (((/* implicit */int) (unsigned char)172))));
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) var_12))) < (((/* implicit */int) min((((/* implicit */short) var_7)), (var_6)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967291U)) ? (764346996518608423ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31)))))) ? ((((_Bool)1) ? (var_0) : (9U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
        {
            arr_14 [i_0] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned short)27898)), (5U)));
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                for (unsigned char i_4 = 2; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_19 [i_0] [(unsigned short)1] [(unsigned short)1] [i_4] = ((/* implicit */signed char) var_2);
                        arr_20 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) (!((_Bool)1)));
                        arr_21 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_2] [i_2])) ? (arr_6 [i_0] [i_2] [i_2]) : (arr_6 [i_0] [i_2] [i_3])))))), (max((((((/* implicit */_Bool) var_11)) ? (-9223372036854775804LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) ((unsigned int) (signed char)87)))))));
                        arr_22 [i_0] [i_2] [i_3] [i_4 - 2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_17 [i_3] [i_2] [i_3] [i_4 - 2] [i_3])) ? (arr_17 [i_0] [(short)3] [i_3] [i_4 - 2] [i_4]) : (arr_17 [i_0] [i_2] [i_0] [i_4 - 2] [(_Bool)1]))) >> ((((~(((/* implicit */int) (_Bool)1)))) + (20)))));
                    }
                } 
            } 
            arr_23 [i_0] [16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (1088298720) : (((/* implicit */int) (short)-14))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (616809734U)))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (var_2))))) : (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_11 [i_0] [i_2]))))));
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        arr_26 [i_5] [i_5] = ((/* implicit */unsigned short) arr_25 [i_5]);
        arr_27 [i_5] [i_5] = (-((((!(((/* implicit */_Bool) 1610612736U)))) ? (min((((/* implicit */unsigned int) var_3)), (4294967284U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)2), ((signed char)77))))))));
    }
    for (short i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        arr_30 [i_6] = ((/* implicit */_Bool) ((long long int) (unsigned short)54304));
        arr_31 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? ((~(((/* implicit */int) (short)4717)))) : (((((/* implicit */int) var_14)) ^ (arr_28 [i_6])))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_6]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 902941537982084740LL)) ? (((/* implicit */int) arr_25 [i_6])) : (((/* implicit */int) (signed char)-80))))) ? (((((/* implicit */_Bool) arr_28 [i_6])) ? (((/* implicit */unsigned long long int) -16LL)) : (650789641937836753ULL))) : (((/* implicit */unsigned long long int) arr_28 [i_6]))))));
        /* LoopNest 2 */
        for (signed char i_7 = 2; i_7 < 21; i_7 += 2) 
        {
            for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                {
                    arr_37 [(unsigned short)21] [21] = ((/* implicit */_Bool) ((signed char) ((var_8) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_7 + 2]))))));
                    arr_38 [16ULL] [i_7 + 1] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */short) var_14)), (var_6))))));
                    arr_39 [i_6] [i_7 + 1] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -20192088620746192LL)) ^ (8285962697767896252ULL)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                {
                    arr_46 [i_6] [i_9] = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_35 [i_6])) ^ ((~(((/* implicit */int) (unsigned short)36079)))))));
                    arr_47 [(_Bool)1] [i_9] [i_10] &= ((/* implicit */signed char) ((2147483647) | ((~(((var_7) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65531))))))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
                        {
                            {
                                arr_52 [i_6] [i_9] [i_9] = ((/* implicit */signed char) ((24U) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-1)) != (((/* implicit */int) (unsigned short)27231))))))));
                                arr_53 [i_6] [i_9] [i_6] [i_11] [i_9] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_10] [i_10] [i_12])) ? (((/* implicit */long long int) arr_45 [i_6] [i_9] [i_6])) : (13LL)))) <= (((unsigned long long int) ((((/* implicit */int) (short)32535)) ^ (((/* implicit */int) var_11)))))));
                                arr_54 [i_6] [i_9] [i_10] [i_9] [i_6] [i_9] = ((/* implicit */int) arr_29 [i_6] [i_9]);
                                arr_55 [i_6] [i_9] [i_10] [i_11] [i_11] = ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
