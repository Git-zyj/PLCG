/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236871
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1532227789)), (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)27)) || (((/* implicit */_Bool) arr_1 [i_0])))))) : (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) 0U))))))) && (((/* implicit */_Bool) (((_Bool)0) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_18 -= ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (3068677023U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124)))))) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1] [i_0])) : (((int) 7624393601632271686ULL)))));
            arr_6 [i_0] [i_0] [6] = ((/* implicit */short) ((unsigned int) max((arr_3 [i_1 - 2] [i_1] [i_1 - 1]), (arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
            var_19 = ((/* implicit */int) max((var_19), ((+(((/* implicit */int) min((arr_2 [i_1] [i_1 + 1] [i_1]), ((short)32767))))))));
            arr_7 [6] = ((/* implicit */short) max(((+(min((var_12), (((/* implicit */unsigned long long int) var_16)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-18603))))) >> (((unsigned int) var_5)))))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((/* implicit */int) arr_8 [i_1 + 1] [i_1] [i_1 - 2])) - (((/* implicit */int) arr_8 [i_1 - 1] [i_1] [i_1 - 2])))) - (((/* implicit */int) ((short) arr_8 [i_1 - 2] [i_1] [i_1 + 1]))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_4 - 1] [i_3] [2ULL] [(short)0] [i_4] [i_3]))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [5U] [i_4])) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_11 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4]))));
                        }
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (+(var_4))))) ? (((/* implicit */int) ((_Bool) (short)4095))) : (((((/* implicit */_Bool) ((short) arr_2 [i_0] [(unsigned short)8] [i_0]))) ? (((/* implicit */int) min((((/* implicit */short) arr_9 [i_0] [i_0] [(short)17] [(short)17])), (arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3])))) : (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [9LL] [i_1]))))));
                    }
                } 
            } 
        }
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            arr_19 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) ? (((arr_16 [i_0]) << (((/* implicit */int) var_5)))) : (((/* implicit */unsigned long long int) arr_3 [i_5] [i_5] [i_0]))))) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_5] [i_0] [i_0] [i_5] [i_0])))));
            arr_20 [i_5] [i_5] = ((/* implicit */unsigned int) ((short) ((max((((/* implicit */unsigned int) arr_3 [i_5] [i_0] [i_0])), (arr_0 [i_5]))) >> ((((+(((/* implicit */int) (short)-22871)))) + (22897))))));
            arr_21 [i_5] = ((long long int) arr_1 [i_0]);
        }
    }
    for (signed char i_6 = 2; i_6 < 14; i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_6])) + (((/* implicit */int) (short)-4095))))), (((unsigned int) arr_18 [i_6]))));
        var_23 = ((/* implicit */signed char) min((((16313332495024645821ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6 - 1] [i_6] [i_6 - 2] [i_6] [i_6] [i_6 + 1] [i_6]))))), (((/* implicit */unsigned long long int) ((signed char) (short)-18595)))));
        arr_27 [i_6] [i_6] = ((/* implicit */_Bool) arr_23 [i_6]);
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
                        {
                            {
                                arr_38 [i_6 - 2] [i_6] [i_6 - 2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((3422702842922155596LL), (((/* implicit */long long int) (unsigned short)65535))))) ? (((/* implicit */int) ((unsigned short) (signed char)-113))) : ((-(((/* implicit */int) var_6))))))), (((((((/* implicit */_Bool) arr_31 [i_6])) ? (3952015425U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11672))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-100)) < (((/* implicit */int) (signed char)-65))))))))));
                                arr_39 [i_6 - 2] [i_7] [i_6 - 2] [14] [i_10] [i_6] = max((min((((/* implicit */unsigned int) arr_35 [i_6] [i_6 + 1] [i_6 + 2] [i_6])), (arr_23 [i_6 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-121)) && (((var_14) < (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8] [i_8])))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) ((max((min((((/* implicit */long long int) 469762048)), (8013709539652661855LL))), (((/* implicit */long long int) ((int) var_2))))) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_30 [i_8] [i_8] [i_7] [i_6 - 2]))))));
                    var_25 = ((/* implicit */_Bool) max((var_25), ((((-(arr_37 [i_7]))) > (((/* implicit */unsigned long long int) min((2325417001U), (3161765451U))))))));
                }
            } 
        } 
    }
    for (signed char i_11 = 2; i_11 < 14; i_11 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_12 = 2; i_12 < 14; i_12 += 1) 
        {
            for (unsigned int i_13 = 0; i_13 < 16; i_13 += 1) 
            {
                for (unsigned int i_14 = 0; i_14 < 16; i_14 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_11] [i_13] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (short)18602))) : (-1LL)))) + (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_14] [(signed char)7] [(signed char)7] [(signed char)7]))) : (arr_16 [i_11]))))));
                        arr_51 [i_11] [i_13] [i_11 - 1] [i_11] [i_11] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_41 [i_11] [i_12 + 2])) ? (((/* implicit */unsigned int) arr_3 [i_12] [i_12 + 2] [i_12])) : (4294967295U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2328492449U))))))))));
                        var_27 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_11 - 1] [i_11 - 1] [i_11 - 2] [7ULL] [i_11] [i_11] [i_11 - 1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22870)) ? (min((arr_41 [i_11] [i_11]), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32766)))))));
                    }
                } 
            } 
        } 
        arr_52 [i_11] = ((/* implicit */long long int) max((((/* implicit */int) ((_Bool) arr_35 [i_11] [i_11 - 1] [i_11 + 2] [i_11 - 1]))), (((((/* implicit */_Bool) arr_28 [i_11 - 1] [i_11])) ? (((((/* implicit */_Bool) -469762055)) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_25 [i_11]))))));
        var_28 = ((/* implicit */short) (~(((((/* implicit */int) arr_46 [i_11 - 1] [i_11 + 1] [i_11 + 2])) & (((/* implicit */int) arr_46 [i_11 - 2] [i_11 - 2] [i_11 + 1]))))));
        var_29 = ((/* implicit */unsigned long long int) min((((arr_3 [i_11] [i_11 + 1] [(short)3]) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_11 - 2] [i_11 + 1] [i_11 + 1])))))));
        var_30 = ((/* implicit */signed char) ((unsigned int) (+(((/* implicit */int) arr_25 [i_11])))));
    }
    var_31 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((int) (short)-22508))) ? (((var_5) ? (((/* implicit */unsigned int) -469762048)) : (3550134919U))) : (var_3)))));
}
