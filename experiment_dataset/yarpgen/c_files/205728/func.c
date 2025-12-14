/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205728
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            arr_5 [i_1] &= max((min((-2147483646), (((/* implicit */int) (unsigned char)148)))), (((/* implicit */int) (unsigned char)108)));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (+(max((((/* implicit */int) max(((unsigned char)152), ((unsigned char)110)))), (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) (unsigned char)115)))))))))));
                        var_16 -= ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)153)) >= (((/* implicit */int) (unsigned char)108))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (short)19352))))))) * (((/* implicit */int) max(((unsigned char)255), ((unsigned char)148))))));
                    }
                } 
            } 
            var_17 |= ((/* implicit */int) 4294967295U);
            var_18 |= ((/* implicit */short) ((((((/* implicit */int) arr_7 [i_1] [i_1 + 3] [i_1] [i_1])) + (((((/* implicit */int) (short)-4712)) - (((/* implicit */int) arr_8 [i_1 + 1] [i_1] [i_1 + 1] [i_1])))))) * ((-(((/* implicit */int) arr_3 [i_1] [(short)8] [i_1]))))));
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            arr_15 [i_0] [(short)12] = ((/* implicit */_Bool) (unsigned char)239);
            var_19 *= ((/* implicit */unsigned short) ((_Bool) (unsigned char)104));
        }
        var_20 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0] [i_0]))) + (((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            var_21 = ((/* implicit */signed char) ((0U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5])))));
            var_22 *= ((/* implicit */short) (((~(-2147483634))) < (((/* implicit */int) arr_17 [i_6]))));
            var_23 -= ((/* implicit */short) arr_17 [i_6]);
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_24 [i_5] [i_5] = ((/* implicit */unsigned short) 4294967295U);
            var_24 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)148)) * (((/* implicit */int) (unsigned short)65532))));
        }
        arr_25 [i_5] [i_5] = ((((/* implicit */int) arr_19 [i_5] [i_5])) >> (((((/* implicit */int) arr_23 [i_5])) - (47024))));
    }
    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)141)), (max((var_6), (((/* implicit */unsigned long long int) (unsigned char)147))))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (short)14396))) / (((/* implicit */int) arr_28 [i_8]))))) : (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)126)) - (((/* implicit */int) (unsigned char)162))))), (((((/* implicit */_Bool) 15LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) : (15LL)))))));
        var_26 = (~(((/* implicit */int) (unsigned char)152)));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
    {
        var_27 += ((/* implicit */signed char) (+(((/* implicit */int) arr_19 [12] [i_9]))));
        arr_32 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) && ((!(((/* implicit */_Bool) var_7))))));
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_9])) || (((/* implicit */_Bool) arr_28 [i_9]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        var_29 = ((((/* implicit */int) arr_27 [i_10])) >= (((/* implicit */int) ((short) (unsigned char)147))));
        /* LoopSeq 2 */
        for (int i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
        {
            var_30 &= ((/* implicit */int) ((((/* implicit */_Bool) -837941795)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))) : (0U)));
            arr_37 [i_10] [i_10] [i_10] |= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)127))));
        }
        for (int i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (signed char)-18)))))));
            arr_42 [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) (((+(((/* implicit */int) var_4)))) | (((/* implicit */int) arr_41 [i_12] [i_10] [i_10]))));
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (-1216832361) : (((/* implicit */int) (unsigned short)18))));
        }
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [(unsigned char)14])) == (((/* implicit */int) ((signed char) var_8)))));
        /* LoopNest 2 */
        for (unsigned char i_13 = 1; i_13 < 22; i_13 += 1) 
        {
            for (int i_14 = 0; i_14 < 24; i_14 += 4) 
            {
                {
                    var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (~(((/* implicit */int) arr_44 [i_13 + 2] [i_13 - 1])))))));
                    arr_49 [i_14] [i_13] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) > (4294967295U)));
                    var_35 = ((/* implicit */short) arr_38 [i_10]);
                }
            } 
        } 
    }
    var_36 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)108)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (4161536LL)))))) ? (((/* implicit */int) var_13)) : (var_3));
    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) max((16776192), (((/* implicit */int) (short)-369)))))));
}
