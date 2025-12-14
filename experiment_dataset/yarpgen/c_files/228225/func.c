/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228225
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_10)) : ((-(((unsigned int) (_Bool)1))))));
    var_20 = ((/* implicit */unsigned char) 3427260391420008249ULL);
    var_21 = var_15;
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_18) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((unsigned short) -174123169))) : (((/* implicit */int) var_8))))) ? ((-(((((/* implicit */_Bool) -2147483635)) ? (-1338480934) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_17))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))), (((((/* implicit */_Bool) (~(2300091135589704161LL)))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 17740811533855111165ULL))))) : (((/* implicit */int) ((_Bool) arr_0 [i_0] [i_2])))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 13; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                        {
                            arr_15 [i_0] [13] [i_2] [i_3] [i_4] = 140737488355326ULL;
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -7042814164210251190LL)) ? (((/* implicit */int) arr_8 [(unsigned short)14] [i_0] [i_0] [i_2] [i_3] [(_Bool)1])) : (((/* implicit */int) arr_4 [i_2] [i_0] [(unsigned short)7])))), (2147483647)))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_16 [i_0] [i_4] [(_Bool)1] [i_3 + 2] [i_4] |= ((/* implicit */unsigned char) min((17474668482453187227ULL), (((/* implicit */unsigned long long int) min(((short)14958), (((/* implicit */short) (_Bool)1)))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                        {
                            arr_20 [i_3] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) max((var_16), (((/* implicit */unsigned short) var_5))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_18 [i_3 - 3] [i_3 - 4])) : (((/* implicit */int) arr_18 [i_3 + 1] [i_3 - 1]))))));
                            var_24 |= ((/* implicit */signed char) ((((((/* implicit */int) arr_2 [i_3 - 1])) <= (((/* implicit */int) var_5)))) ? (((/* implicit */long long int) ((int) (unsigned short)16183))) : (min((((/* implicit */long long int) (unsigned short)30028)), (var_4)))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_13 [i_3 - 1] [i_3 - 4] [i_3 - 4] [12ULL] [i_5] [i_3 - 1])))))) % (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_5)), (var_16)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_13))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned char)1] [i_0] [i_5]))) & (arr_11 [i_5])))))));
                            var_26 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) & (arr_7 [i_0] [i_1] [i_2] [i_3] [i_5] [i_5]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)215)))))))));
                        }
                        arr_21 [7ULL] [i_1] [i_2] [i_3 + 2] [i_0] = ((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_8 [(signed char)0] [(short)3] [i_0] [i_2] [i_2] [i_3 - 4])))));
                        arr_22 [i_0] [i_3] = ((/* implicit */short) var_6);
                    }
                    for (unsigned long long int i_6 = 4; i_6 < 13; i_6 += 4) /* same iter space */
                    {
                        arr_27 [i_0] [i_1] [i_1] [i_0] = var_9;
                        var_27 &= ((/* implicit */int) ((arr_18 [i_0] [i_2]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_1] [i_1] [i_2] [i_6 - 3] [i_6 - 2])), (var_6)))) : (((long long int) var_8))))) : (min((1132381253837888503ULL), (max((((/* implicit */unsigned long long int) 1922151247U)), (arr_19 [i_2])))))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (short)3801))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        arr_34 [i_0] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) var_5);
                        arr_35 [i_0] [i_7] [i_0] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_0] [i_7] [i_8] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_13 [i_0] [i_0] [i_7] [i_7] [i_8] [i_9]))))) : ((+(17314362819871663105ULL)))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_29 ^= ((/* implicit */unsigned short) arr_32 [i_0] [i_7] [i_7]);
                        var_30 = ((((/* implicit */_Bool) max(((-(arr_9 [i_0] [i_7] [13LL] [i_10]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (arr_23 [i_0] [i_0] [i_0] [(_Bool)1] [i_8] [i_10]))))))) ? (((((/* implicit */int) (short)-4000)) & (((/* implicit */int) max((arr_36 [i_0] [i_0] [i_0] [i_0] [i_10] [i_10]), (((/* implicit */short) (_Bool)0))))))) : (((/* implicit */int) arr_28 [i_7])));
                        var_31 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) 3346724804U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32767))) : (10477227098615262096ULL))), (((/* implicit */unsigned long long int) var_3))))));
                    }
                }
            } 
        } 
    }
}
