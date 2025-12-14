/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197731
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_3 - 1] [i_0] = ((/* implicit */short) 2147483647);
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_1 - 1] [i_1] [i_0] [i_4 - 1] = ((/* implicit */int) (unsigned short)38482);
                            var_14 -= ((unsigned short) (unsigned char)122);
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned long long int) 23726217U);
                        }
                    }
                    var_15 += ((/* implicit */short) (_Bool)1);
                    var_16 = ((/* implicit */unsigned short) 6965160814352409567LL);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) ((short) (unsigned short)65535));
                        var_18 = ((/* implicit */unsigned char) ((signed char) (unsigned short)47840));
                        arr_19 [i_0] [i_1] [i_0] [i_5] [i_5] [i_0] = ((/* implicit */int) ((_Bool) (signed char)-123));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (unsigned short)65535))));
                        var_20 = ((long long int) ((signed char) (_Bool)1));
                    }
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        arr_22 [(signed char)6] &= ((/* implicit */short) (-2147483647 - 1));
                        arr_23 [i_0] [i_0] [i_0] [i_2] [i_2] [i_6] = ((/* implicit */short) (signed char)-79);
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (unsigned short)47840);
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
                        {
                            var_22 *= ((/* implicit */_Bool) (unsigned short)65535);
                            var_23 = ((/* implicit */unsigned long long int) ((int) ((unsigned short) (signed char)107)));
                        }
                        for (unsigned int i_12 = 2; i_12 < 19; i_12 += 1) 
                        {
                            arr_41 [i_7] [i_8] [i_7] [i_8] [i_12 - 1] = ((/* implicit */_Bool) (short)-30883);
                            var_24 = ((/* implicit */unsigned long long int) 1336889901374737826LL);
                            var_25 -= ((/* implicit */short) (unsigned char)122);
                            arr_42 [i_8] [i_7] [i_9] [i_8] [i_7] [i_7] = ((/* implicit */signed char) (_Bool)1);
                        }
                        for (short i_13 = 0; i_13 < 23; i_13 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned short) (_Bool)1);
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((unsigned int) ((long long int) 915992242U))))));
                            var_28 -= ((/* implicit */unsigned long long int) (unsigned short)47840);
                        }
                        for (short i_14 = 0; i_14 < 23; i_14 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) ((_Bool) ((signed char) 859871147796939905LL)));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (unsigned char)239))));
                            arr_48 [i_7] [i_7] [i_7] [i_10] [i_7] = ((/* implicit */long long int) -1);
                            arr_49 [i_7] [i_8] [i_9] [i_10] = ((/* implicit */unsigned int) 958568754);
                        }
                        var_31 = ((/* implicit */unsigned char) ((signed char) ((short) (unsigned short)27048)));
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (short)-22570))));
                        /* LoopSeq 3 */
                        for (signed char i_15 = 0; i_15 < 23; i_15 += 1) /* same iter space */
                        {
                            var_33 ^= ((/* implicit */long long int) 4294967295U);
                            arr_53 [i_7] [i_7] [i_9] [i_7] [i_15] [i_7] = ((/* implicit */_Bool) 2705985102U);
                            var_34 = ((/* implicit */signed char) ((int) ((unsigned short) 4294967282U)));
                            var_35 = ((/* implicit */_Bool) ((unsigned int) 5401572987325179857ULL));
                        }
                        for (signed char i_16 = 0; i_16 < 23; i_16 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((unsigned char) (signed char)(-127 - 1))))));
                            var_37 = ((/* implicit */unsigned char) ((unsigned long long int) 10850837865584809364ULL));
                        }
                        for (long long int i_17 = 0; i_17 < 23; i_17 += 3) 
                        {
                            var_38 = ((/* implicit */unsigned char) -1);
                            arr_59 [i_7] [i_8] [i_7] [i_8] [i_8] &= ((long long int) (signed char)-83);
                            var_39 += ((/* implicit */_Bool) ((unsigned short) ((short) (unsigned short)38482)));
                            arr_60 [i_7] [i_7] [i_8] [i_9] [i_10] [i_8] [i_17] = ((/* implicit */long long int) ((signed char) 13045171086384371758ULL));
                        }
                    }
                } 
            } 
        } 
        var_40 &= ((/* implicit */_Bool) (signed char)-71);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_18 = 2; i_18 < 9; i_18 += 1) 
    {
        arr_65 [i_18] [i_18] = ((/* implicit */unsigned int) ((int) ((unsigned long long int) (unsigned char)255)));
        var_41 = (signed char)48;
        var_42 = ((/* implicit */short) (_Bool)0);
    }
    for (unsigned char i_19 = 0; i_19 < 15; i_19 += 2) 
    {
        var_43 = ((/* implicit */long long int) (short)13655);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_20 = 0; i_20 < 15; i_20 += 1) 
        {
            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) 5401572987325179857ULL))));
            arr_72 [i_20] &= ((/* implicit */unsigned short) 5401572987325179883ULL);
            /* LoopNest 2 */
            for (unsigned int i_21 = 3; i_21 < 14; i_21 += 2) 
            {
                for (unsigned short i_22 = 1; i_22 < 14; i_22 += 1) 
                {
                    {
                        var_45 = ((/* implicit */long long int) (unsigned short)0);
                        arr_77 [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) (short)-27388);
                        arr_78 [i_19] [i_19] = ((unsigned int) -731644344061263422LL);
                        arr_79 [i_19] [i_20] [i_20] [i_22] = ((/* implicit */unsigned char) (signed char)107);
                    }
                } 
            } 
        }
        var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) ((signed char) (signed char)-117)))));
        var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) ((long long int) (_Bool)1)))));
        arr_80 [i_19] [i_19] = ((/* implicit */unsigned short) ((short) ((_Bool) 4294967295U)));
    }
    /* LoopNest 3 */
    for (int i_23 = 0; i_23 < 14; i_23 += 2) 
    {
        for (unsigned short i_24 = 0; i_24 < 14; i_24 += 4) 
        {
            for (long long int i_25 = 0; i_25 < 14; i_25 += 1) 
            {
                {
                    arr_89 [i_23] = ((/* implicit */short) ((_Bool) ((int) ((_Bool) (_Bool)1))));
                    var_48 = ((/* implicit */short) 275590657U);
                }
            } 
        } 
    } 
}
