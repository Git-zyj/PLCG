/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199256
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
    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)15)) == (var_18)));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_21 = (-(((/* implicit */int) (_Bool)1)));
            arr_5 [(unsigned char)1] = ((/* implicit */unsigned int) arr_3 [i_0] [2U] [i_1]);
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] = ((/* implicit */unsigned int) (signed char)36);
                        var_22 -= ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
                        {
                            arr_14 [1U] [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
                            var_23 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)4))))));
                            arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)27698)) : (((/* implicit */int) var_12))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                        {
                            var_24 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)27701)) != (var_7))))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((int) arr_4 [i_3])))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_13)) ? (7642530555873480239LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))))))))));
                        }
                        arr_19 [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) ((1971393040) % (((((/* implicit */int) (unsigned char)112)) & (arr_4 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)247), (var_10)))) % (max((arr_4 [i_0]), (((/* implicit */int) var_10))))))) : ((-(13451935406255234836ULL))))))));
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (min((arr_13 [i_0] [i_0] [i_0]), (arr_13 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? (arr_13 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_20 [i_0] [i_0] = ((/* implicit */signed char) (-(max((var_11), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [6U]))))));
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                for (int i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    {
                        arr_28 [i_0] [i_0] [i_8] [i_7] [i_8] = ((/* implicit */unsigned char) var_14);
                        arr_29 [i_0] [i_0] [(short)11] [i_8] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)29)), ((~(((/* implicit */int) (unsigned short)15025))))));
                        var_29 *= ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) arr_8 [(unsigned char)3] [i_6] [i_7] [i_8])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-24193)) : (((/* implicit */int) (unsigned short)54733)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_8]))))))))));
                    }
                } 
            } 
        } 
    }
    for (int i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((+(((/* implicit */int) arr_2 [i_9])))) : (((((/* implicit */int) var_10)) >> (((((/* implicit */int) arr_25 [i_9] [(short)1] [(short)1])) - (1585))))))))));
        var_31 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_4 [i_9])), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) / (var_1)))), (arr_13 [i_9] [i_9] [i_9])))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 2) 
        {
            for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
            {
                {
                    arr_38 [i_9] [i_11] [(unsigned char)9] = min((((/* implicit */unsigned long long int) arr_37 [i_11] [i_10])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9] [i_10] [i_11] [i_10]))) | (arr_18 [i_9] [i_9] [i_11] [i_11] [i_9] [i_11] [i_10]))));
                    arr_39 [i_11] [i_9] [i_11] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29438)))))));
                    arr_40 [i_11] = ((/* implicit */unsigned int) ((min((11774254528463081058ULL), (((/* implicit */unsigned long long int) (unsigned char)112)))) | (((/* implicit */unsigned long long int) ((((9223372036854775789LL) ^ (((/* implicit */long long int) 3059459675U)))) ^ (((/* implicit */long long int) ((/* implicit */int) min((var_15), (((/* implicit */unsigned char) var_2)))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_32 = min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(var_1)))), (((((/* implicit */_Bool) (unsigned char)91)) ? (-8379985993676505286LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)151)))))))), (max((((/* implicit */unsigned long long int) (-(-2887692091324443158LL)))), (arr_6 [i_9] [i_9]))));
                                arr_45 [i_9] [i_10] [i_10] [i_10] [i_10] |= ((/* implicit */unsigned short) (!(min((((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_34 [i_9] [i_9] [(unsigned short)14])))), ((!(((/* implicit */_Bool) var_19))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            arr_48 [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (arr_18 [i_9] [i_9] [i_9] [i_14] [i_14] [i_14] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)63))) == (arr_0 [i_9])))))));
            /* LoopSeq 1 */
            for (unsigned char i_15 = 0; i_15 < 17; i_15 += 2) 
            {
                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) var_6))));
                arr_51 [i_9] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_8)), ((unsigned char)236)))) : ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (unsigned char)120)) : (min(((~(var_18))), ((~(((/* implicit */int) var_13))))))));
            }
        }
        arr_52 [i_9] = ((/* implicit */unsigned int) (+(min(((-(var_14))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_9])))))))));
    }
    for (int i_16 = 0; i_16 < 17; i_16 += 3) /* same iter space */
    {
        var_34 = (-((-(arr_6 [i_16] [(unsigned char)15]))));
        arr_55 [i_16] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)4)) & (((/* implicit */int) ((_Bool) (unsigned char)38)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (arr_6 [i_16] [i_16])))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 1) 
    {
        arr_58 [i_17] = ((/* implicit */_Bool) (+(((arr_56 [i_17]) - (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_17])))))));
        arr_59 [i_17] = min(((unsigned char)4), (((/* implicit */unsigned char) (signed char)45)));
    }
    var_35 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) var_4)) % (((/* implicit */int) var_5))))))));
}
