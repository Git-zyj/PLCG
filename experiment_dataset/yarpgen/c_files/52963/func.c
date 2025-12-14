/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52963
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (+(((/* implicit */int) var_12)))))));
    var_16 = (~((~((+(((/* implicit */int) (_Bool)1)))))));
    var_17 |= ((/* implicit */int) ((((/* implicit */_Bool) ((int) (-(var_5))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (364040958U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (min((((/* implicit */long long int) var_7)), (var_9)))))) : ((~(min((var_10), (((/* implicit */unsigned long long int) var_12))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_18 = ((((((/* implicit */long long int) -1329053826)) ^ (var_14))) > (((/* implicit */long long int) ((3930926331U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_0])))))));
                    var_19 = 8741574059250517073ULL;
                    var_20 = ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? ((-(((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) ((arr_6 [i_0] [i_1] [i_2] [i_0]) == (((/* implicit */int) (unsigned short)48639))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 4; i_3 < 14; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(arr_3 [i_3 + 2]))))));
                        var_22 = (((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)48)))))) - (((int) ((((/* implicit */int) (unsigned short)22234)) ^ (((/* implicit */int) (_Bool)1))))));
                        var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)206))))) ? (16400160358618320401ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19392))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3 + 1] [i_0])) ? (var_3) : (arr_1 [i_3 - 4] [i_0]))))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((signed char) (signed char)44))))))))));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((short) (unsigned char)38)))));
                    }
                    for (int i_5 = 3; i_5 < 14; i_5 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((7914593008088291493LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)48))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            arr_21 [(unsigned char)1] [(unsigned char)1] [(unsigned char)1] [(unsigned char)1] [i_5] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_13 [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_5 - 1]), (arr_9 [i_0]))))));
                            arr_22 [i_1] [i_0] [(unsigned char)11] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)46144))))));
                        }
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (unsigned short)27908)) + (((/* implicit */int) arr_0 [6LL] [i_0])))));
        arr_23 [i_0] = ((/* implicit */unsigned short) var_12);
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            for (int i_9 = 2; i_9 < 20; i_9 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_10 = 1; i_10 < 19; i_10 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) arr_33 [i_7] [i_7] [i_9] [i_7]))));
                        arr_34 [i_7] [i_8] [i_9 + 1] [i_10] [i_7] [i_8] = ((/* implicit */_Bool) ((min((arr_33 [i_9 + 2] [i_10 + 2] [i_10 + 2] [i_10 - 1]), (arr_33 [i_7] [i_8] [i_9 - 2] [i_10 + 2]))) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                        arr_35 [i_9] [i_8] [i_9] |= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)66), ((unsigned char)217))))) & ((~(var_10))))) ^ (((/* implicit */unsigned long long int) min((arr_29 [i_7] [i_7 + 1] [i_9 - 1]), (arr_29 [i_7 + 1] [i_7 + 1] [i_9 + 1]))))));
                    }
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 3; i_12 < 21; i_12 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-2147483646)))) ? ((~(((/* implicit */int) arr_36 [i_8] [i_8] [i_12])))) : (((/* implicit */int) ((short) arr_28 [i_8] [i_8])))))) ^ (arr_25 [i_7])));
                                var_30 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_0)))) ? (max((arr_24 [i_7 + 1] [i_9 + 2]), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((4592798337114587331LL), (((/* implicit */long long int) -1732138442)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) arr_37 [6]))));
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) arr_24 [i_7 + 1] [i_7 + 1]))));
        var_33 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)209))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123))))))) : (arr_28 [i_7 + 1] [(unsigned char)14])))) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */short) (_Bool)1)), (var_1))))) : (max((((/* implicit */int) max((((/* implicit */unsigned short) (short)6144)), ((unsigned short)16896)))), ((+(((/* implicit */int) (unsigned short)36333))))))));
    }
    var_34 = ((/* implicit */unsigned char) ((unsigned long long int) (signed char)-86));
}
