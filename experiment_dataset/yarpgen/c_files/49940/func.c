/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49940
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
    var_18 = min((var_2), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (signed char)126))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (((((/* implicit */int) var_0)) / (((/* implicit */int) arr_2 [i_0] [(short)13])))) : (((/* implicit */int) min((arr_3 [i_0]), (var_4))))))) ? (max((var_5), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0]))))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) (signed char)112))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_20 = ((/* implicit */short) min((((/* implicit */int) ((unsigned short) ((unsigned int) (signed char)-126)))), (((int) ((var_16) - (arr_4 [i_0] [i_0]))))));
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned short) arr_3 [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : ((-(var_11))))) <= (var_6)));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) min((min((arr_3 [i_0]), (((/* implicit */short) (signed char)115)))), (((/* implicit */short) var_7)))))));
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) max(((signed char)125), ((signed char)-126)));
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((unsigned long long int) arr_8 [i_2 + 2] [(signed char)12])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_2] [i_2])), (arr_9 [i_3] [i_2] [i_2] [i_0] [i_1] [i_0])))) ? (arr_4 [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)1694))))))))))));
                    }
                } 
            } 
        }
        arr_12 [(signed char)8] = (unsigned short)65535;
    }
    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        var_23 = ((/* implicit */signed char) (((_Bool)0) ? ((-(((/* implicit */int) (!((_Bool)0)))))) : (((/* implicit */int) arr_5 [i_4]))));
        var_24 = ((((/* implicit */int) (signed char)-106)) % (((/* implicit */int) (signed char)126)));
    }
    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            for (unsigned int i_7 = 2; i_7 < 10; i_7 += 3) 
            {
                {
                    arr_24 [i_5] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)50)))))));
                    arr_25 [i_5] [i_5] = min((max((arr_16 [i_5]), (((/* implicit */signed char) (!(((/* implicit */_Bool) -35184372088832LL))))))), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_6])) >> (((((/* implicit */int) var_9)) - (20665)))))) <= (((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)126))) : (0LL)))))));
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        arr_29 [i_5] [(signed char)7] [i_5] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_13 [i_6])))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)126)), (((short) (_Bool)1))))) : (((/* implicit */int) var_0))));
                        var_25 ^= var_7;
                    }
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        arr_32 [i_5] [i_7] [i_5] [i_5] = ((/* implicit */signed char) var_14);
                        var_26 = ((/* implicit */_Bool) min((max((arr_7 [i_6] [i_6] [i_6]), (((/* implicit */unsigned int) max((arr_28 [i_5 + 1] [i_6] [i_5 + 1]), (((/* implicit */int) (signed char)126))))))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_18 [i_7])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_16 [i_9])))))))));
                        var_27 += ((/* implicit */int) var_3);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 1; i_10 < 9; i_10 += 3) 
                    {
                        for (signed char i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            {
                                arr_39 [i_5] [i_6] [i_5] [i_5] [i_11] [i_5] [i_5] &= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_2 [i_5] [i_5]))))) : (max((-8601379518466930165LL), (((/* implicit */long long int) var_17)))))));
                                var_28 = ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)1)) + (((/* implicit */int) (signed char)112))))));
                                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) max((((unsigned int) arr_17 [i_5 - 1] [i_10 + 1])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_7 - 2] [i_7])) ? (((/* implicit */int) arr_16 [i_6])) : (((/* implicit */int) arr_3 [i_5 + 1]))))))))));
                                arr_40 [i_10] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_21 [i_5] [i_5])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_0)) ? (arr_28 [i_5] [i_5] [i_5]) : (-360011732))))) <= (((int) (unsigned short)65515))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 = ((/* implicit */short) var_8);
        var_31 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_28 [i_5 + 1] [i_5 + 1] [i_5 - 1])), (((var_11) & (((/* implicit */long long int) arr_28 [i_5 - 1] [i_5 + 1] [i_5 - 1]))))));
        /* LoopNest 2 */
        for (short i_12 = 4; i_12 < 10; i_12 += 1) 
        {
            for (unsigned short i_13 = 2; i_13 < 9; i_13 += 2) 
            {
                {
                    arr_47 [i_5] [i_5] [i_5] [i_13] = ((/* implicit */unsigned short) ((long long int) arr_43 [i_5] [i_5] [i_13 - 2]));
                    var_32 = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) 3018140322U)) ? (((/* implicit */int) (unsigned char)251)) : (var_8))), ((-(((/* implicit */int) (unsigned char)19))))))));
                }
            } 
        } 
    }
}
