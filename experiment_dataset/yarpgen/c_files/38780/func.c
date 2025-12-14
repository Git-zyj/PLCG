/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38780
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) var_4);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 748224971U)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-66))));
                        var_14 = ((/* implicit */signed char) 294078910489185886ULL);
                        var_15 = ((/* implicit */long long int) (-(18152665163220365729ULL)));
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) 244399028));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_4 = 4; i_4 < 18; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (unsigned short i_6 = 4; i_6 < 16; i_6 += 2) 
                    {
                        {
                            arr_20 [i_1] [i_1] [8U] = ((/* implicit */long long int) ((2147483647) ^ (((/* implicit */int) (signed char)0))));
                            var_16 *= ((/* implicit */_Bool) ((short) arr_6 [i_4 + 1]));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) ((signed char) ((_Bool) (signed char)72)));
            }
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    var_18 = ((/* implicit */_Bool) var_5);
                    /* LoopSeq 2 */
                    for (signed char i_9 = 3; i_9 < 17; i_9 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 130023424U)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (signed char)-99))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (var_5))))));
                        arr_29 [(unsigned short)17] [i_1] [i_7] [i_1] [i_1] [i_1] [5] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (unsigned short)11))));
                    }
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                        var_22 |= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_23 [i_0] [i_8]))));
                    }
                    arr_34 [i_8] [i_7] [i_7] [i_0] |= ((/* implicit */unsigned long long int) (+(130023409U)));
                }
                for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    arr_37 [i_7] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(short)6] [(short)6] [i_1] [i_7] [i_7] [i_11] [(signed char)5])) ? (((/* implicit */int) arr_13 [i_11])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_7] [i_11])) : ((-(((/* implicit */int) (unsigned short)39634))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        var_23 = ((/* implicit */_Bool) var_12);
                        var_24 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_11] [(unsigned short)12] [(unsigned short)12] [i_11]))));
                        var_25 = ((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_7] [i_11]);
                        var_26 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) 4164943872U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66))) : (var_12))));
                    }
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (signed char)115))));
                }
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-99)) ? (1165758809) : (((/* implicit */int) (_Bool)1))));
            }
            for (signed char i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
            {
                var_29 *= ((/* implicit */_Bool) arr_8 [i_0]);
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3698564247U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11001))) : (18152665163220365723ULL)));
                var_31 = ((/* implicit */int) ((arr_23 [(_Bool)1] [(_Bool)1]) ? (-1367648712729480583LL) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_1] [i_13])))));
                var_32 = ((/* implicit */unsigned short) ((_Bool) 130023424U));
            }
        }
        for (unsigned long long int i_14 = 1; i_14 < 19; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_15 = 0; i_15 < 20; i_15 += 4) 
            {
                for (short i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    {
                        var_33 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)82))));
                        var_34 = ((/* implicit */unsigned short) ((unsigned char) (signed char)-14));
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned long long int) var_9);
        }
        var_36 = ((/* implicit */long long int) (-(0ULL)));
    }
    /* LoopNest 2 */
    for (unsigned short i_17 = 0; i_17 < 20; i_17 += 4) 
    {
        for (unsigned short i_18 = 3; i_18 < 18; i_18 += 4) 
        {
            {
                arr_58 [(unsigned short)0] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3598925041732028799ULL)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (unsigned short)9019))));
                /* LoopNest 3 */
                for (unsigned short i_19 = 2; i_19 < 17; i_19 += 2) 
                {
                    for (signed char i_20 = 2; i_20 < 19; i_20 += 1) 
                    {
                        for (unsigned short i_21 = 4; i_21 < 18; i_21 += 2) 
                        {
                            {
                                var_37 ^= ((/* implicit */unsigned int) (_Bool)1);
                                var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)54534)) ? (1452206655U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))));
                                var_39 = ((/* implicit */short) ((arr_21 [i_17] [0U] [i_17] [i_17]) != (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-101))) & (-1LL))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_40 = ((/* implicit */unsigned int) var_9);
}
