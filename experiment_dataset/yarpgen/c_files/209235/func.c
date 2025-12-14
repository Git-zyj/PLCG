/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209235
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
    var_17 = ((/* implicit */_Bool) ((int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) min((arr_0 [i_0 - 3] [i_0 + 1]), (arr_0 [i_0 - 2] [i_0 - 2])))) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (max((((/* implicit */unsigned long long int) 667978718U)), (arr_0 [i_0 - 1] [i_0 - 2]))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 24; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */int) ((long long int) arr_4 [i_1 - 2]));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (unsigned int i_4 = 3; i_4 < 22; i_4 += 4) 
                {
                    {
                        arr_12 [i_1] = ((/* implicit */_Bool) ((long long int) arr_3 [i_1 - 3]));
                        var_19 = ((/* implicit */unsigned int) (unsigned short)37219);
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_5 + 1] [i_4 - 3] [i_1 - 1] [i_1 - 3]))));
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)28316))));
                            arr_15 [i_5] [i_4] [i_3] [i_2] [i_1] = ((/* implicit */int) (-(arr_5 [i_1 + 1])));
                            arr_16 [i_1] [i_2] [i_3] [i_4] [i_5] &= ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        }
                        arr_17 [i_4] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_3] [i_4])) ? (((/* implicit */long long int) var_10)) : (arr_10 [i_1] [i_2] [i_3] [i_4]))));
                    }
                } 
            } 
        }
        for (int i_6 = 1; i_6 < 21; i_6 += 4) 
        {
            var_22 = (+(((/* implicit */int) (!(((/* implicit */_Bool) 2894607005507115084LL))))));
            arr_22 [i_1] [i_6] = ((/* implicit */long long int) (~(1522186500)));
        }
        var_23 = (!(((/* implicit */_Bool) arr_10 [i_1] [i_1 - 1] [i_1] [i_1 - 1])));
    }
    for (long long int i_7 = 3; i_7 < 24; i_7 += 4) /* same iter space */
    {
        var_24 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
        arr_27 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_19 [i_7 - 1]) ^ (((/* implicit */unsigned int) (-(arr_13 [i_7] [i_7] [i_7]))))))) ? ((+(((/* implicit */int) var_5)))) : ((~((+(((/* implicit */int) (signed char)-50))))))));
    }
    for (unsigned long long int i_8 = 4; i_8 < 7; i_8 += 4) 
    {
        arr_31 [i_8] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(max((2894607005507115084LL), (((/* implicit */long long int) arr_24 [i_8] [i_8])))))))));
        arr_32 [i_8] = ((/* implicit */unsigned char) (~(max((arr_21 [i_8] [i_8 - 1] [i_8]), (((/* implicit */unsigned int) 1522186500))))));
        /* LoopSeq 2 */
        for (short i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-1LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37219))))))) : ((+(arr_5 [i_9])))));
            /* LoopSeq 3 */
            for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                arr_38 [i_8] = ((/* implicit */unsigned int) max((16076007602961089204ULL), (((/* implicit */unsigned long long int) 4097826120U))));
                var_26 = ((/* implicit */signed char) (-(((/* implicit */int) arr_29 [i_8] [i_10]))));
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 9; i_11 += 4) 
                {
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-8267)) ? ((-(((arr_8 [i_8] [i_9] [i_10] [i_12]) / (((/* implicit */int) var_4)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            arr_46 [i_8] [i_11] [i_10] [i_11] [i_12] [i_11] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_10])) ? (var_6) : (((/* implicit */unsigned long long int) var_0))))))));
                        }
                    } 
                } 
            }
            for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                arr_50 [i_8] [i_9] [i_13] [i_13] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)8220)) ? (((/* implicit */int) (unsigned short)37233)) : (((/* implicit */int) (short)-26389))))));
                arr_51 [i_8] [i_8] [i_9] [i_13] &= ((/* implicit */int) ((signed char) 1281668056));
                /* LoopSeq 1 */
                for (long long int i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1522186500))));
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((2894607005507115084LL) < (((/* implicit */long long int) arr_18 [i_9] [i_8])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) 2370736470748462441ULL))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_9] [i_9] [i_13] [i_14])))))))) : ((((!(((/* implicit */_Bool) arr_18 [i_8] [i_13])))) ? (((/* implicit */unsigned int) -668788704)) : (4095557974U)))));
                    arr_54 [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_24 [i_8 + 3] [i_8 - 4])) >= (((/* implicit */int) arr_24 [i_8 + 1] [i_8 + 3]))))) | (((((/* implicit */_Bool) arr_24 [i_8 + 1] [i_8 - 2])) ? (((/* implicit */int) arr_24 [i_8 - 3] [i_8 + 3])) : (((/* implicit */int) arr_24 [i_8 - 3] [i_8 + 2]))))));
                }
                var_30 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) arr_44 [i_8 - 4] [i_8 + 1] [i_8 + 2] [i_8 + 2] [i_8 - 2] [i_8 - 1] [i_8 - 3])))));
            }
            for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                var_31 = ((/* implicit */long long int) arr_26 [i_9]);
                arr_59 [i_8] [i_8] [i_15] [i_9] = ((/* implicit */signed char) ((unsigned char) ((max((((/* implicit */unsigned long long int) arr_52 [i_8] [i_9])), (arr_0 [i_8] [i_15]))) % (9187343239835811840ULL))));
                arr_60 [i_8] [i_8] [i_9] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_19 [i_8])))) ? (((((/* implicit */_Bool) arr_36 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_8] [i_9]))) : (arr_49 [i_8] [i_9] [i_15]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28329)))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (var_6))))) : (((/* implicit */unsigned long long int) arr_39 [i_8] [i_8] [i_9] [i_15] [i_15]))));
                /* LoopNest 2 */
                for (unsigned int i_16 = 2; i_16 < 9; i_16 += 4) 
                {
                    for (long long int i_17 = 0; i_17 < 10; i_17 += 4) 
                    {
                        {
                            arr_68 [i_8] [i_9] [i_15] [i_16] [i_16] [i_17] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_30 [i_8])) == (((/* implicit */int) arr_30 [i_8])))))) <= (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_24 [i_8] [i_17]))))), (max((9187343239835811840ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))));
                            arr_69 [i_15] = ((((/* implicit */unsigned long long int) (+((-(arr_35 [i_8])))))) <= (max((((/* implicit */unsigned long long int) ((int) 11888318777465522856ULL))), (max((arr_40 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]), (((/* implicit */unsigned long long int) arr_66 [i_17] [i_16] [i_15] [i_9] [i_8])))))));
                        }
                    } 
                } 
                var_32 -= ((/* implicit */unsigned char) max(((unsigned short)31433), ((unsigned short)37206)));
            }
            var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7230684541981940687ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57316))) : (2887886770U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78))) : (11096298508625771624ULL));
            arr_70 [i_8] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)0))));
            var_34 = ((/* implicit */_Bool) arr_64 [i_9] [i_9] [i_9] [i_9] [i_9] [i_8] [i_8]);
        }
        for (signed char i_18 = 0; i_18 < 10; i_18 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_19 = 0; i_19 < 10; i_19 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_20 = 2; i_20 < 8; i_20 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_21 = 0; i_21 < 10; i_21 += 4) 
                    {
                        arr_79 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_21] [i_20])))))));
                        arr_80 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_78 [i_8 - 2] [i_20]))));
                        var_35 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2176285273U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31433)))))) ? (15620564992717591936ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                    }
                    arr_81 [i_8] [i_18] [i_19] [i_20] [i_19] = ((/* implicit */unsigned int) (-(50834453)));
                    var_36 = ((arr_41 [i_18] [i_20] [i_20 + 1] [i_18]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_8] [i_19]))));
                    arr_82 [i_8] [i_19] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (unsigned char)170))))));
                }
                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)86))))) : ((~(((/* implicit */int) (unsigned short)65535)))))))));
            }
            arr_83 [i_8] = ((/* implicit */signed char) (+(-50834454)));
        }
    }
    var_38 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned short) ((short) var_2))));
}
