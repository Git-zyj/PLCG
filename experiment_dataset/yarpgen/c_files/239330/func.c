/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239330
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -6743411791852549233LL)))))) : (((273143598U) << (((var_15) + (828946994)))))))) ? (((((/* implicit */_Bool) min((-6743411791852549233LL), (((/* implicit */long long int) (signed char)97))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) (unsigned short)41443)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (378219723U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_21 &= ((/* implicit */signed char) -6517620754456756891LL);
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((/* implicit */int) var_6)), (387649858))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) var_15);
                            arr_13 [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) arr_12 [i_4] [i_2] [i_0]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                var_24 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_19)) ? (arr_8 [i_5] [(signed char)2] [(signed char)2] [(signed char)2] [i_1 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (~(-6892402163355996339LL))))));
                    var_26 = ((/* implicit */long long int) (signed char)-77);
                    arr_18 [i_0] [i_0] [i_5] [i_6] [i_1] = ((/* implicit */unsigned short) var_0);
                    var_27 &= ((/* implicit */int) (_Bool)1);
                }
                arr_19 [(unsigned short)6] [i_1] |= ((/* implicit */unsigned int) (+(6743411791852549251LL)));
            }
            for (int i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        {
                            arr_29 [i_9] [i_8] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_27 [i_0] [i_1] [i_1] [i_0] [i_0]);
                            var_28 ^= (+(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (signed char)-66)))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) arr_7 [i_7] [i_1] [i_1] [i_0]);
                arr_30 [i_0] [i_1 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_1 - 2])) : (-1121360070)));
            }
            var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (arr_6 [i_0] [i_0] [i_1] [(short)0] [i_0])))) : (-8402426388030466237LL)));
        }
        for (unsigned char i_10 = 3; i_10 < 12; i_10 += 4) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (unsigned short)41430))));
            /* LoopSeq 1 */
            for (unsigned short i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_32 [i_0]))) ? (var_4) : ((+(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_10 + 1])))));
                var_33 = ((/* implicit */long long int) min((var_33), (((long long int) (signed char)-72))));
                arr_35 [i_0] [i_10 + 2] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)235);
                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (unsigned short)9355)) : (((/* implicit */int) var_6))))))));
                arr_36 [i_0] [i_0] [i_0] [i_11] = ((/* implicit */unsigned char) arr_21 [i_10] [i_0]);
            }
            var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) var_4)))))));
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                for (short i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    {
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) 4487024618517284044ULL))));
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 14; i_14 += 3) 
                        {
                            arr_45 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)59363))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_43 [i_14] [i_13] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_37 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_7 [i_0] [i_10 + 2] [i_12] [i_13])));
                            var_38 &= ((/* implicit */_Bool) var_6);
                            var_39 = ((/* implicit */long long int) (~(var_14)));
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_15 = 3; i_15 < 12; i_15 += 4) /* same iter space */
        {
            var_40 |= ((/* implicit */unsigned char) var_12);
            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)39901)) ? (arr_10 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15] [i_15 + 1] [i_15 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
            arr_48 [i_15 + 2] [i_15] [(signed char)10] &= ((((/* implicit */_Bool) var_5)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) 6743411791852549233LL)));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) -6743411791852549233LL))));
            var_43 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6892402163355996339LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_16] [i_0]))) : (arr_39 [(unsigned short)4] [i_0] [i_16])));
        }
        /* LoopNest 3 */
        for (long long int i_17 = 0; i_17 < 14; i_17 += 3) 
        {
            for (signed char i_18 = 0; i_18 < 14; i_18 += 1) 
            {
                for (long long int i_19 = 0; i_19 < 14; i_19 += 4) 
                {
                    {
                        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) % (arr_46 [i_0])))) ? (12042875436800366538ULL) : (((((/* implicit */_Bool) -6666905547570247886LL)) ? (((/* implicit */unsigned long long int) -6892402163355996339LL)) : (arr_27 [i_0] [i_0] [i_0] [i_0] [i_19])))));
                        /* LoopSeq 3 */
                        for (short i_20 = 0; i_20 < 14; i_20 += 3) 
                        {
                            arr_65 [i_0] [i_17] [i_18] [i_17] [i_0] = ((/* implicit */int) (unsigned char)2);
                            arr_66 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) 2944054586073223608ULL);
                        }
                        for (short i_21 = 2; i_21 < 13; i_21 += 1) 
                        {
                            arr_70 [i_0] [i_0] [i_18] [i_19] [i_19] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 6743411791852549254LL))));
                            var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-28887)) : (((/* implicit */int) var_6)))))));
                            var_46 &= ((/* implicit */unsigned long long int) 1325542608);
                            var_47 -= ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (1773219943648693611ULL));
                        }
                        for (unsigned char i_22 = 0; i_22 < 14; i_22 += 1) 
                        {
                            var_48 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5790859625388269344LL)) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_19] [i_0])) : (((/* implicit */int) arr_59 [i_19]))));
                            var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)-32760)) : (arr_11 [i_19] [i_17] [i_18]))))));
                        }
                        var_50 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_26 [i_0] [i_17] [i_18] [i_17] [i_19]))));
                    }
                } 
            } 
        } 
    }
}
