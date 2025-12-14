/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3139
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */long long int) ((arr_0 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11))))));
        arr_3 [(unsigned short)5] |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 4; i_2 < 8; i_2 += 4) 
        {
            var_20 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_2 - 4]))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 2; i_3 < 6; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_21 += ((/* implicit */int) arr_5 [i_2 - 3]);
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2 + 1] [i_3 + 3])))))));
                    }
                } 
            } 
        }
        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1])) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
    }
    for (signed char i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
    {
        arr_16 [i_5] [i_5] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (max((((/* implicit */unsigned int) (_Bool)0)), (3832131694U))) : (((/* implicit */unsigned int) min((1403636424), (((/* implicit */int) arr_5 [6ULL])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) : (1577386934577415710ULL)));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                {
                    var_24 += ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) -1403636448)) && (((/* implicit */_Bool) 462835602U))))) < (((((((/* implicit */int) arr_12 [i_7])) + (2147483647))) << (((/* implicit */int) arr_1 [i_5]))))));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 462835585U)) < (min(((~(2189749761901258846ULL))), (((/* implicit */unsigned long long int) var_3)))))))));
                }
            } 
        } 
        var_26 += ((/* implicit */signed char) arr_11 [i_5] [i_5]);
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(arr_10 [i_5] [i_5] [i_5] [i_5])))), (max((((/* implicit */long long int) arr_4 [i_5])), (var_17)))))) ? ((-((+(((/* implicit */int) var_19)))))) : (((/* implicit */int) ((signed char) arr_0 [i_5]))))))));
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_28 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned int) 1092283940)), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) arr_4 [i_8])) : (((/* implicit */int) (signed char)-69))))), (var_5)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                var_29 &= (_Bool)1;
                var_30 ^= ((((/* implicit */_Bool) (signed char)-19)) || (((/* implicit */_Bool) -4928150341408368141LL)));
                var_31 += var_18;
            }
            /* vectorizable */
            for (signed char i_10 = 2; i_10 < 9; i_10 += 4) 
            {
                var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? ((~(((/* implicit */int) arr_6 [i_8])))) : (((/* implicit */int) (_Bool)1)))))));
                arr_28 [i_5] [i_8] [i_8] |= ((/* implicit */unsigned short) ((((int) (signed char)-12)) != (((/* implicit */int) var_1))));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        {
                            var_33 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)57)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_15 [i_10] [9])))) : (((var_4) + (((/* implicit */int) var_13))))));
                            var_34 ^= ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) != (4688564561106978658ULL)))));
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23346)))))));
                        }
                    } 
                } 
                var_36 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_19)) ? (var_11) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_10 - 1] [i_8] [i_5] [i_5])))));
            }
            for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                var_37 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1403636399)) ? (-1403636432) : (((/* implicit */int) (_Bool)1))))) ? ((-2147483647 - 1)) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))));
                var_38 ^= ((/* implicit */signed char) max(((+(((/* implicit */int) var_1)))), (arr_36 [i_13] [i_13] [i_13])));
                var_39 *= ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (_Bool)1)) < (arr_10 [i_5] [i_5] [i_8] [i_13])))));
                var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) max((((/* implicit */unsigned int) var_19)), (max((var_18), (2351043099U))))))));
            }
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            var_41 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_14] [i_5] [i_5] [i_14]))))) + (min((((/* implicit */unsigned int) (_Bool)1)), (418782389U)))));
            arr_41 [i_5] |= ((/* implicit */int) var_1);
            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) arr_17 [i_14] [i_14] [i_14]))));
        }
    }
    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
    {
        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_43 [i_15] [i_15 + 1])) ? (((/* implicit */unsigned long long int) arr_44 [(short)7] [i_15 + 1])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (144080003703767040ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((_Bool) var_5))), (((unsigned char) arr_43 [i_15] [i_15 + 1]))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 3) 
        {
            arr_47 [i_15] [i_16] |= ((/* implicit */unsigned char) (+(var_16)));
            var_44 |= ((/* implicit */short) 790618576);
        }
    }
    /* LoopNest 3 */
    for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 1) 
    {
        for (int i_18 = 0; i_18 < 18; i_18 += 2) 
        {
            for (unsigned int i_19 = 4; i_19 < 17; i_19 += 3) 
            {
                {
                    var_45 -= ((/* implicit */unsigned short) ((((-6045737623936832020LL) + (((/* implicit */long long int) (-2147483647 - 1))))) <= (((/* implicit */long long int) ((((/* implicit */int) arr_42 [i_19 - 1])) / (((/* implicit */int) var_10)))))));
                    var_46 &= ((/* implicit */unsigned short) 8067923670213870304ULL);
                }
            } 
        } 
    } 
    var_47 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (var_11) : (3097884206U)))))) ? (((/* implicit */unsigned long long int) var_16)) : (5786990390910660869ULL)));
}
