/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208048
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-11117)) ? (((/* implicit */int) (short)-11117)) : (((/* implicit */int) (short)-26650))));
        var_11 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (-4281709462716109002LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32748)))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned char) arr_5 [i_2] [i_2] [i_0] [i_0]));
                    var_12 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_2])) & (((/* implicit */int) (short)11117))));
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_2]))));
                    var_13 = ((/* implicit */unsigned int) arr_6 [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_1] [i_2] [i_3] [(short)4])) ? (-2948225530941310694LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (var_1) : (((/* implicit */long long int) ((unsigned int) var_8)))));
                                var_15 = ((/* implicit */_Bool) (~(var_0)));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned char)224))))) & (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_14 [i_0] [i_2] [17ULL] [i_3] [i_4])) : (((/* implicit */int) arr_1 [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned int) ((_Bool) arr_10 [i_0] [i_0] [i_0] [8ULL] [i_0] [i_0]));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)31)) <= (((/* implicit */int) var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)25098)))) : (var_6))))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 4; i_6 < 17; i_6 += 3) 
        {
            var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_6] [i_6 + 2])) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_6 + 2])) : (((/* implicit */int) (short)-9570))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_5)) > (((/* implicit */int) arr_6 [i_7] [i_7])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)217)))) : (arr_16 [i_6 - 1])));
                arr_22 [11ULL] [i_6] = ((/* implicit */signed char) 4294967295U);
                var_21 = ((/* implicit */short) ((int) ((_Bool) 3912652075U)));
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11116)) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) (unsigned char)32))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_5]))) : (((unsigned int) var_6))));
                    var_23 &= ((/* implicit */long long int) (~(arr_13 [i_5] [i_5] [i_7] [i_7] [i_6 + 2])));
                }
            }
            /* LoopSeq 3 */
            for (short i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                arr_27 [6ULL] [(unsigned short)4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-25594))));
                var_24 = ((/* implicit */long long int) ((_Bool) arr_9 [i_6 - 2] [i_6 - 2] [i_5] [i_6]));
            }
            for (signed char i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (short)-11133))) ? (((((/* implicit */_Bool) arr_18 [i_5] [i_6] [i_5])) ? (8720145310432685988LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((var_9) ^ (((/* implicit */unsigned int) -880495702)))))));
                arr_31 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_6 - 1] [i_6 - 1])) <= (((/* implicit */int) arr_17 [i_6 - 1] [i_5]))));
                arr_32 [i_5] [14LL] [i_6] [5LL] = ((_Bool) (_Bool)1);
            }
            for (short i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_6 + 1])) ? (((/* implicit */int) arr_19 [i_6 + 2])) : (((/* implicit */int) arr_19 [i_6 - 2]))));
                var_27 -= ((/* implicit */unsigned long long int) 21U);
                /* LoopNest 2 */
                for (unsigned short i_12 = 3; i_12 < 18; i_12 += 2) 
                {
                    for (unsigned short i_13 = 2; i_13 < 18; i_13 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) (_Bool)1);
                            var_29 = ((unsigned char) ((((/* implicit */_Bool) 1U)) ? (arr_13 [i_5] [(_Bool)1] [i_11] [i_12] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31)))));
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_12] [i_11] [i_6 - 4] [i_12 - 3])) ? (((arr_12 [i_6] [0LL] [i_11]) << (((/* implicit */int) var_8)))) : (((/* implicit */long long int) ((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_29 [i_5] [i_6]))))))))));
                        }
                    } 
                } 
            }
        }
        /* LoopNest 3 */
        for (unsigned long long int i_14 = 3; i_14 < 18; i_14 += 2) 
        {
            for (long long int i_15 = 0; i_15 < 19; i_15 += 3) 
            {
                for (short i_16 = 0; i_16 < 19; i_16 += 4) 
                {
                    {
                        var_31 = ((/* implicit */signed char) var_7);
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_5] [i_14 - 3] [i_14 - 3] [i_14 + 1] [i_14])) >> (((/* implicit */int) arr_25 [i_14] [(signed char)17] [i_14 - 2]))));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */unsigned short) var_4);
        var_34 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_5] [i_5])) & (((/* implicit */int) arr_40 [i_5] [(short)4]))));
    }
    for (unsigned long long int i_17 = 3; i_17 < 12; i_17 += 2) 
    {
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_21 [i_17 + 1])) < (((/* implicit */int) var_4))))) >= (((/* implicit */int) min((arr_21 [i_17 - 1]), (arr_21 [i_17 - 3]))))));
        var_36 -= ((/* implicit */unsigned int) arr_28 [i_17]);
    }
    var_37 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (((long long int) var_8)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_38 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)32)))));
        var_39 = ((/* implicit */unsigned int) ((long long int) arr_25 [i_18] [i_18] [i_18]));
        var_40 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_18] [i_18] [i_18])) ? (arr_26 [i_18] [i_18] [i_18]) : (arr_26 [i_18] [i_18] [i_18])));
        var_41 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_18] [i_18] [i_18]))));
    }
    for (short i_19 = 0; i_19 < 12; i_19 += 3) 
    {
        var_42 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_19] [i_19] [(unsigned short)0] [i_19] [i_19])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_19] [i_19] [i_19] [i_19]))))))));
        var_43 = ((/* implicit */unsigned int) var_6);
    }
    var_44 = ((/* implicit */unsigned int) min((var_0), (((/* implicit */unsigned long long int) var_7))));
}
