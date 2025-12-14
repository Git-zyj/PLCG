/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210798
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
    var_14 = (signed char)33;
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (short)8915)) : (((/* implicit */int) max((arr_6 [i_0] [i_1 - 2] [i_2] [i_3]), (((/* implicit */unsigned short) (short)-8915)))))));
                            var_16 = ((/* implicit */signed char) ((unsigned char) ((long long int) var_13)));
                        }
                    } 
                } 
            } 
            var_17 -= ((/* implicit */short) ((unsigned int) 4429625301200148515ULL));
        }
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)9909))))))) ? ((-(arr_16 [i_0] [i_0 - 3] [i_0 - 3] [i_7]))) : (((/* implicit */long long int) 2147483643))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) 29795595U))));
                        arr_19 [i_5] [i_6 + 2] [i_6 + 1] [i_7] = ((/* implicit */signed char) arr_11 [i_0] [i_0 + 3]);
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned int) ((short) ((unsigned int) ((((/* implicit */_Bool) arr_16 [i_0] [i_5] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) arr_0 [i_0]))))));
        }
        for (signed char i_8 = 1; i_8 < 17; i_8 += 1) 
        {
            var_21 = ((((/* implicit */_Bool) arr_15 [i_0 - 2] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))) : ((~(max((arr_1 [(signed char)3]), (((/* implicit */unsigned long long int) 4294967290U)))))));
            /* LoopNest 3 */
            for (long long int i_9 = 1; i_9 < 18; i_9 += 1) 
            {
                for (signed char i_10 = 2; i_10 < 18; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) arr_11 [i_8] [i_8]);
                            arr_33 [i_0 + 3] [i_8] [i_9 - 1] [i_10] [(unsigned short)4] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_17 [(signed char)17] [i_0 - 1] [i_8 + 1] [i_0 - 1] [i_0 - 1] [i_10 + 2])), (((short) var_1))))) ? (max((((/* implicit */int) var_13)), ((~(((/* implicit */int) (signed char)-38)))))) : (((/* implicit */int) ((short) arr_10 [i_0 + 1] [i_8] [i_8 - 1] [i_9 + 2])))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */short) (-(max((var_11), (((((/* implicit */_Bool) var_6)) ? (1004329299898674625ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0])))))))));
        }
        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) ((signed char) arr_36 [i_0 - 3] [i_12])))))));
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 20; i_13 += 2) 
            {
                for (signed char i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    {
                        var_25 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_13] [(signed char)3])) && (((/* implicit */_Bool) (short)-10835))))) >= (((/* implicit */int) arr_26 [i_0] [i_0 + 3] [i_13] [i_14] [i_14] [i_14]))))), (((((/* implicit */_Bool) arr_2 [i_13] [i_12])) ? (((/* implicit */long long int) ((unsigned int) (signed char)-22))) : ((~(-9066319139329132159LL)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_15 = 0; i_15 < 20; i_15 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned short) arr_9 [i_0] [7] [i_15] [i_12] [i_12]);
                            var_27 = ((/* implicit */unsigned int) (+(var_11)));
                        }
                    }
                } 
            } 
        }
        arr_44 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_16 [i_0 - 2] [i_0 - 3] [i_0 + 3] [i_0 - 2]) : (arr_16 [i_0 - 2] [i_0 - 3] [i_0] [i_0])))) ? (var_5) : (((/* implicit */long long int) max((((((/* implicit */_Bool) 1688468126551447546ULL)) ? (((/* implicit */int) arr_31 [i_0] [(unsigned short)13] [(signed char)6] [15LL] [i_0 - 1] [i_0] [i_0])) : (((/* implicit */int) (short)-8915)))), ((-(((/* implicit */int) arr_26 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 2] [i_0])))))))));
        /* LoopNest 2 */
        for (signed char i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            for (signed char i_17 = 1; i_17 < 19; i_17 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 0; i_18 < 20; i_18 += 2) 
                    {
                        for (int i_19 = 0; i_19 < 20; i_19 += 3) 
                        {
                            {
                                var_28 -= ((/* implicit */signed char) ((_Bool) max((max((arr_11 [i_0] [i_0]), (((/* implicit */long long int) (short)32757)))), ((~(var_12))))));
                                var_29 *= ((/* implicit */long long int) arr_54 [i_19] [i_18] [i_17] [i_16] [i_0]);
                                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (max((max((var_5), (((/* implicit */long long int) arr_5 [i_0 + 1])))), (((/* implicit */long long int) max((((/* implicit */unsigned char) var_1)), ((unsigned char)186)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0])))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-116))))), (max((((/* implicit */unsigned long long int) (short)3382)), (var_10)))));
                }
            } 
        } 
    }
    var_32 |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-35)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))) : (var_0)))));
    /* LoopSeq 1 */
    for (signed char i_20 = 2; i_20 < 22; i_20 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_21 = 0; i_21 < 24; i_21 += 2) 
        {
            for (unsigned short i_22 = 0; i_22 < 24; i_22 += 1) 
            {
                {
                    var_33 = ((/* implicit */signed char) max(((+(arr_63 [(unsigned char)2] [i_20 + 1] [i_20 - 2]))), ((-(arr_64 [i_20] [i_20 + 1] [i_20 - 2] [i_20 + 1])))));
                    var_34 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) arr_60 [i_20] [i_22])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_58 [i_20] [i_21])) : (((/* implicit */int) max((((/* implicit */short) (signed char)-22)), (arr_60 [(signed char)20] [i_20])))))) % (((((_Bool) arr_63 [i_20] [i_21] [i_22])) ? (((/* implicit */int) arr_59 [i_22] [i_22] [(signed char)20])) : (((((/* implicit */_Bool) var_3)) ? (193715163) : (((/* implicit */int) (unsigned char)0))))))));
                }
            } 
        } 
        arr_66 [i_20 - 1] [i_20] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)65535)), (13003498997461804475ULL)))))) ? ((~(((((/* implicit */_Bool) arr_63 [i_20] [i_20 + 2] [16LL])) ? (((/* implicit */long long int) 50331648)) : (var_12))))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_59 [i_20] [i_20 - 1] [i_20])))))));
        var_35 |= ((/* implicit */long long int) (~(((arr_59 [i_20 - 2] [i_20 + 1] [i_20]) ? (((/* implicit */int) arr_59 [i_20 - 2] [i_20 + 1] [i_20])) : (((/* implicit */int) arr_59 [i_20 - 2] [i_20 + 1] [i_20 - 2]))))));
    }
    var_36 = ((/* implicit */unsigned char) var_4);
}
