/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53931
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
    var_20 += ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((_Bool) var_8)))))) < ((-(((((/* implicit */int) var_19)) | (((/* implicit */int) var_6)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_21 = ((signed char) arr_4 [i_0] [i_0] [i_1]);
            var_22 *= ((/* implicit */unsigned long long int) ((_Bool) arr_2 [i_1]));
        }
        for (signed char i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            var_23 ^= ((/* implicit */_Bool) (((~(arr_4 [i_0] [i_0] [i_2]))) | (((/* implicit */unsigned long long int) var_15))));
            arr_10 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_2 - 1]))));
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((unsigned long long int) ((arr_4 [i_2] [(signed char)17] [i_0]) & (arr_2 [i_2])))))));
            var_25 = ((((/* implicit */int) arr_1 [i_0])) >= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14)))));
        }
        /* LoopNest 3 */
        for (unsigned int i_3 = 3; i_3 < 17; i_3 += 1) 
        {
            for (unsigned char i_4 = 2; i_4 < 15; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_3 - 3] [i_4] [i_4 + 1])) ? (((/* implicit */unsigned long long int) arr_14 [i_3 - 2] [(unsigned char)5] [i_4 - 1])) : (arr_8 [i_3 - 3] [i_4 + 1] [i_4 - 1])));
                        var_27 -= ((/* implicit */_Bool) var_14);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 1) 
                        {
                            arr_21 [i_0] [i_6] [i_4] [(signed char)9] [(unsigned short)9] = ((/* implicit */signed char) arr_14 [i_3] [i_5] [i_3]);
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) arr_4 [i_6 + 1] [i_6 + 1] [i_6 + 2]))));
                            var_29 = ((_Bool) -3770757027853435613LL);
                        }
                        for (long long int i_7 = 4; i_7 < 16; i_7 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) arr_13 [i_0]))))))));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) arr_15 [i_0] [3ULL] [i_4 - 1] [i_5] [i_7 + 2]))));
                        }
                        for (unsigned long long int i_8 = 3; i_8 < 16; i_8 += 1) 
                        {
                            var_32 ^= ((/* implicit */unsigned int) arr_14 [(_Bool)1] [i_3] [i_3]);
                            var_33 = var_3;
                            arr_28 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_8] [i_8] [i_8 - 1] [i_8] [i_8])) ? (((/* implicit */int) arr_23 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8])) : (((/* implicit */int) var_3))));
                        }
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_3] [i_4]))))) < ((+(((/* implicit */int) arr_23 [6ULL] [i_4 + 3] [i_3] [i_4 + 3] [i_3]))))));
                        arr_29 [i_3] [i_3] [i_3 + 1] [(signed char)14] = ((/* implicit */_Bool) ((arr_14 [i_3 - 1] [i_3 - 3] [i_3 + 1]) + (arr_14 [i_3 - 3] [i_3 + 1] [i_3 - 3])));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 4 */
            for (signed char i_10 = 1; i_10 < 16; i_10 += 1) 
            {
                var_35 = ((/* implicit */signed char) ((((_Bool) arr_30 [i_9])) ? (((long long int) var_12)) : (((/* implicit */long long int) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((((/* implicit */int) arr_17 [i_0])) + (115))) - (15))))))));
                /* LoopSeq 2 */
                for (unsigned char i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    var_36 = ((/* implicit */unsigned short) ((arr_12 [i_9] [i_10 + 1] [i_11]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_11] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_19 [i_9] [i_11] [i_10] [i_11] [6U] [i_0] [i_0])) : (((/* implicit */int) var_6))))) : (var_2)));
                    var_37 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)48946)) | (((/* implicit */int) (signed char)-93))));
                }
                for (unsigned long long int i_12 = 3; i_12 < 16; i_12 += 1) 
                {
                    var_38 = ((/* implicit */_Bool) var_9);
                    var_39 |= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_15)))));
                }
                var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_9] [i_9] [i_10 + 1]))) < (((long long int) var_1)))))));
                arr_41 [i_0] [i_9] = ((/* implicit */long long int) (!(var_6)));
            }
            for (long long int i_13 = 0; i_13 < 18; i_13 += 3) 
            {
                var_41 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))));
                var_42 += ((/* implicit */unsigned long long int) ((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_13] [i_0])))));
                var_43 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_9] [i_13])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
            {
                arr_48 [i_0] [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((arr_46 [i_0] [i_9] [i_9]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                arr_49 [i_0] [i_9] [i_9] [i_0] &= ((((/* implicit */_Bool) arr_4 [i_0] [i_9] [i_14])) ? (arr_4 [i_0] [i_9] [i_9]) : (((/* implicit */unsigned long long int) arr_14 [i_9] [i_9] [i_0])));
                var_44 = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) var_18)))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                arr_53 [i_0] [i_9] [i_9] = ((/* implicit */signed char) var_16);
                var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_15] [i_9] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_13 [i_0])))) < (((/* implicit */int) arr_1 [i_0])))))));
                var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_15])) ? (3103454351354176439ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(signed char)2])))))))));
                var_47 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                arr_54 [i_0] [i_9] [i_0] [7LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0] [i_9] [15U] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_9] [i_9] [i_15] [i_0]))) : (var_12)));
            }
            arr_55 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-88)) ? (var_16) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_6)))))));
            arr_56 [i_9] = ((/* implicit */unsigned char) var_18);
            var_48 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_9])) ? (((((/* implicit */unsigned long long int) -2137358074214854547LL)) ^ (var_12))) : (((/* implicit */unsigned long long int) ((var_2) << (((var_7) - (7577482747619675204LL))))))));
        }
        arr_57 [i_0] = ((/* implicit */unsigned long long int) var_19);
    }
    for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 4) /* same iter space */
    {
        arr_62 [i_16] [i_16] = ((/* implicit */signed char) var_7);
        var_49 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_17))))) * (max((arr_16 [i_16] [i_16]), (((/* implicit */long long int) arr_6 [i_16] [i_16] [i_16]))))))) | (min((max((((/* implicit */unsigned long long int) arr_9 [(unsigned char)10])), (var_13))), (((/* implicit */unsigned long long int) var_11))))));
    }
    var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)0))))), (-2137358074214854526LL)))) ? (min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)40)))) : (((/* implicit */int) (unsigned char)239))));
    /* LoopSeq 3 */
    for (unsigned int i_17 = 4; i_17 < 22; i_17 += 1) 
    {
        var_51 = ((/* implicit */_Bool) var_15);
        var_52 = (-(806205490549728257ULL));
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_53 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
        arr_67 [i_18] = ((/* implicit */long long int) min(((((~(var_12))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_18] [0U] [i_18] [i_18]))) : (var_12))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_10)), (var_14))))))));
        arr_68 [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_13)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (arr_27 [i_18] [i_18] [(unsigned char)16] [i_18] [2ULL])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (min((-1LL), (-2137358074214854526LL))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_54 = ((/* implicit */unsigned long long int) var_9);
    }
    for (long long int i_19 = 0; i_19 < 15; i_19 += 1) 
    {
        var_55 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(-8675167078226171058LL)))))))));
        var_56 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_52 [i_19] [i_19] [i_19])) >= (var_16))))));
        var_57 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_19] [i_19] [(signed char)9] [i_19] [i_19] [i_19] [i_19]))))) ? ((~(var_7))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) min((((((/* implicit */int) arr_61 [i_19] [(_Bool)1])) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (arr_36 [i_19] [(signed char)0])))))))));
    }
}
