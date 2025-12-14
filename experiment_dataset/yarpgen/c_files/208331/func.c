/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208331
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
    var_11 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? ((+(6914244425026105527ULL))) : (6914244425026105550ULL)));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))) : (6914244425026105525ULL)))) || (((/* implicit */_Bool) min((1048064), (((/* implicit */int) (unsigned char)255)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)-50), ((signed char)36))))))))))));
                    arr_9 [(unsigned short)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) : (((arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54006))) : (6914244425026105510ULL)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 3; i_5 < 19; i_5 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_19 [i_5] [i_4 - 1] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_14 [i_4])))) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)90))) : (arr_15 [i_6]))) - (79LL)))));
                        var_13 = (~(((/* implicit */int) (unsigned short)54591)));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_6))) | (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_4] [i_4] [i_3])))));
                        var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_13 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)37)))))) ? (((/* implicit */unsigned long long int) arr_13 [i_3] [i_3])) : (17715595895373004655ULL)));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54029)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (arr_25 [i_3] [i_3] [i_5 - 2] [i_7] [i_7] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (((var_6) << (((((/* implicit */int) (signed char)65)) - (65)))))));
                            var_19 = ((/* implicit */signed char) ((short) (_Bool)1));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) ((signed char) 10LL)))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_7))));
                            var_22 = ((/* implicit */signed char) var_4);
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-1)))) ? ((~(((/* implicit */int) (short)-21)))) : (((/* implicit */int) arr_11 [i_4 - 1])))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6914244425026105539ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_21 [i_4] [i_4 - 1] [i_5 + 4] [i_5])) : (((/* implicit */int) var_8))));
                            arr_31 [i_10] [i_10] [i_5] [i_5] [i_3] [i_3] = ((/* implicit */short) (+(-1)));
                            arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) || ((_Bool)1)));
                        }
                    }
                    arr_33 [i_5] [i_5] = ((/* implicit */unsigned short) ((((4) << (((/* implicit */int) var_7)))) > (((/* implicit */int) (signed char)5))));
                    arr_34 [i_5] [i_3] [i_4 - 1] [i_5] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) var_4)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_12 = 4; i_12 < 22; i_12 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) ((unsigned char) arr_30 [i_5] [i_4 - 1] [22ULL] [22ULL] [19]));
                            var_26 = ((/* implicit */unsigned short) arr_36 [i_3] [i_12 - 1] [i_5] [i_3]);
                        }
                        for (short i_13 = 4; i_13 < 22; i_13 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) 4362862139015168ULL))));
                            var_28 = ((/* implicit */short) (-(((8) * (((/* implicit */int) var_1))))));
                            var_29 |= ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-43))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (-16) : (((/* implicit */int) (signed char)32))))) : (arr_30 [i_11] [i_3 - 1] [i_4 - 1] [i_5 - 3] [i_5]));
                            var_30 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (4030228279U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (short i_14 = 4; i_14 < 22; i_14 += 1) /* same iter space */
                        {
                            var_31 *= ((/* implicit */long long int) 6914244425026105542ULL);
                            arr_49 [i_3] [i_4] [i_3] [i_5] [i_5] [i_5] [i_14] = ((/* implicit */signed char) ((unsigned long long int) arr_24 [i_5 + 3] [i_5] [i_3 - 1]));
                            var_32 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))));
                            arr_50 [i_3] [i_3] [i_5] [i_3 - 1] [(unsigned short)1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_14 - 3]))) <= (-1LL)));
                        }
                        var_33 = arr_39 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_11];
                        var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)135))));
                    }
                }
            } 
        } 
        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) arr_22 [i_3] [i_3]))));
    }
    var_36 = ((/* implicit */short) (~(((/* implicit */int) var_10))));
}
