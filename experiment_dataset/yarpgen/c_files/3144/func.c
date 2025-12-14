/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3144
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = var_2;
        var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) var_6))) / (((((/* implicit */_Bool) 16964937290166796409ULL)) ? (1481806783542755206ULL) : (((/* implicit */unsigned long long int) 3337047095508757462LL)))))))));
        arr_3 [7LL] = ((/* implicit */short) var_5);
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-5846538687723787202LL)))))))));
    }
    for (signed char i_1 = 3; i_1 < 19; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) min((((((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_2))) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13)))))), (((/* implicit */long long int) ((1534698945U) * (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)43099), (((/* implicit */unsigned short) var_0)))))))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_7 [i_1 + 1])))) ? (((((/* implicit */_Bool) var_8)) ? (arr_7 [i_1 - 3]) : (arr_7 [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)0)))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 3; i_2 < 17; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 19; i_4 += 3) 
                {
                    {
                        arr_15 [i_1] [(unsigned char)2] [i_2] [i_1] = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) 16964937290166796406ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_7 [(unsigned char)17]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_14 [i_4 - 1])))))) + (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)75)) ? (var_8) : (((/* implicit */unsigned long long int) var_3)))))))))));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_5))))) + (((((/* implicit */_Bool) var_3)) ? (0) : (((/* implicit */int) var_10))))))) ? ((~((~(1481806783542755210ULL))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-108)) && (var_6))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2048603671))))))))));
                        arr_16 [i_1] [(unsigned short)8] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (~(var_2))))))));
                    }
                } 
            } 
        } 
        var_19 &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_1]))));
        var_20 = arr_6 [i_1] [i_1];
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 4) /* same iter space */
    {
        arr_20 [i_5] = ((((/* implicit */_Bool) arr_7 [(_Bool)1])) && ((!(((/* implicit */_Bool) var_9)))));
        arr_21 [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_5 + 1] [i_5] [1ULL]))));
        var_21 -= ((/* implicit */long long int) (-(((/* implicit */int) var_13))));
        arr_22 [i_5] = ((/* implicit */short) (-(((unsigned long long int) (+(((/* implicit */int) (signed char)58)))))));
        var_22 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1481806783542755206ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max(((short)-17322), (((/* implicit */short) var_5))))))))) : (var_8)));
    }
    for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned short) -30LL);
        arr_26 [i_6 - 1] = ((/* implicit */long long int) (-((~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (var_11))))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? ((-(arr_9 [(unsigned short)4]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) (short)17322))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) : (arr_24 [i_6] [i_6])));
        arr_27 [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7694207855398290371LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25090))) : (0U)))), (((unsigned long long int) ((var_11) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_10 [i_6 - 1] [8LL])))))));
    }
    for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_10 = 2; i_10 < 9; i_10 += 2) 
                {
                    var_25 = ((/* implicit */unsigned int) ((arr_4 [i_8] [i_10 - 1]) ? (((/* implicit */int) (unsigned char)186)) : ((-(((/* implicit */int) var_13))))));
                    var_26 = ((/* implicit */signed char) (_Bool)0);
                }
                for (unsigned short i_11 = 3; i_11 < 9; i_11 += 2) 
                {
                    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)24747))));
                    arr_42 [i_11 + 1] [i_11] [i_11] [(signed char)8] [i_7 + 1] = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) var_1)), (((arr_29 [i_8]) / (((/* implicit */long long int) 216640997))))))));
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        arr_45 [i_11] [i_11 - 2] [i_11 - 2] [(unsigned char)1] [i_9] [i_7] [i_11] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)))) ? (((((/* implicit */int) (unsigned char)177)) + (((/* implicit */int) (signed char)3)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))));
                        arr_46 [i_7] [7ULL] [i_8] [i_9] [i_11 - 3] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)3))))) & (((arr_28 [i_8] [1LL]) & (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned int) max((((arr_9 [i_11]) | (((/* implicit */int) var_13)))), ((~(694088372)))))) : (var_3)));
                    }
                    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        var_28 = (~(5846538687723787211LL));
                        var_29 = (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (~(var_7)))) : (max((((/* implicit */unsigned long long int) arr_24 [i_13] [i_7])), (3262857900478430649ULL))))));
                        var_30 = (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_23 [(unsigned short)6])))) : (((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (11389568479000736661ULL))))));
                    }
                }
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    arr_53 [i_7 - 1] [i_7 - 1] [(signed char)0] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7042986409284616004LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (4603245088191760463LL))))))) : (((/* implicit */int) (unsigned char)60))));
                    var_31 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)30523)) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (((-16LL) + (18LL))))))));
                    arr_54 [i_7 - 1] [i_7] [i_7 - 1] [i_7 + 1] [i_7] [i_7] = ((/* implicit */int) ((var_8) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_33 [i_7] [i_7] [i_7 - 1] [i_7 - 1])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (short)30523))))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))))));
                        var_33 -= ((/* implicit */unsigned int) arr_17 [i_7 - 1] [(short)1]);
                    }
                }
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_16 = 3; i_16 < 8; i_16 += 4) 
            {
                arr_59 [2U] [(unsigned short)7] [i_16 + 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) -6985054846504504465LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (arr_37 [(short)0])));
                arr_60 [(unsigned short)1] = ((/* implicit */unsigned int) var_8);
                arr_61 [0U] = ((/* implicit */unsigned long long int) ((((_Bool) var_11)) && (((/* implicit */_Bool) ((arr_57 [i_7 + 1] [i_7] [i_7 - 1]) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                arr_62 [i_7] [i_7] [i_8] [i_16] = ((/* implicit */signed char) arr_6 [i_16] [i_16]);
            }
        }
        var_34 -= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))));
        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) arr_23 [i_7]))));
        var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 1] [2ULL] [i_7 + 1] [i_7 + 1])) ? (15183886173231120967ULL) : (((/* implicit */unsigned long long int) var_3))))) ? (max((((/* implicit */unsigned long long int) var_4)), (var_8))) : (var_8))))));
        var_37 = ((/* implicit */int) arr_31 [i_7] [i_7]);
    }
    var_38 &= ((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) + (var_2)));
}
