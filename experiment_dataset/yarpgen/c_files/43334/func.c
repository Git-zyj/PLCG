/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43334
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] [11ULL] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) arr_0 [0ULL] [8U])));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_6 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-120)) ^ (((/* implicit */int) (unsigned short)11)))))));
            var_11 = ((/* implicit */unsigned long long int) var_6);
            var_12 &= ((var_0) % ((-(arr_2 [i_0] [i_0]))));
            var_13 = ((/* implicit */short) arr_0 [i_1] [i_0 + 1]);
        }
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                var_14 = ((/* implicit */signed char) (unsigned short)6);
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) arr_9 [i_0] [(unsigned char)1]);
                arr_13 [i_0] [i_0] = ((/* implicit */_Bool) arr_4 [i_3]);
                /* LoopSeq 2 */
                for (signed char i_4 = 3; i_4 < 15; i_4 += 2) /* same iter space */
                {
                    var_15 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)13044)))));
                    arr_16 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [(_Bool)1] [(_Bool)1]))) ? (((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)107))) : (0U))) : (((/* implicit */unsigned int) 1421725618))));
                    arr_17 [14ULL] [i_3] [14ULL] [i_3] [14ULL] |= ((/* implicit */unsigned int) var_5);
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (+(((/* implicit */int) ((3269574064U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13044)))))))))));
                    var_17 ^= ((arr_7 [i_4 + 1]) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) var_8)));
                }
                for (signed char i_5 = 3; i_5 < 15; i_5 += 2) /* same iter space */
                {
                    arr_22 [4] [9LL] [9LL] [(short)0] [9LL] [4] = ((/* implicit */short) ((unsigned int) (+(2147483641))));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((unsigned int) arr_5 [(signed char)10] [i_2] [(signed char)10])))));
                    var_19 ^= ((/* implicit */unsigned char) var_10);
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_1 [(short)9] [(unsigned char)13]))));
                }
            }
            arr_23 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((arr_21 [i_0] [i_0] [14] [i_0]) << (0U)))));
        }
        for (short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((unsigned long long int) (+(3269574040U))));
            /* LoopSeq 2 */
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                arr_28 [15U] [15U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_7] [i_7]))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (-((~(((/* implicit */int) arr_25 [i_0])))))))));
            }
            for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                var_23 = ((/* implicit */signed char) ((unsigned char) (unsigned short)13044));
                var_24 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2489416354U))))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        {
                            arr_37 [(unsigned short)4] [(unsigned short)4] [(_Bool)1] [(_Bool)1] [(short)4] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)125))));
                            arr_38 [i_0] [17U] [1LL] = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 4029595928U))));
                            var_25 = ((/* implicit */signed char) ((arr_36 [17U] [17U] [17U] [(short)10] [(signed char)15]) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) arr_8 [1ULL]))));
                            var_26 = ((/* implicit */unsigned long long int) ((((_Bool) arr_31 [14ULL] [(short)7] [1] [(short)7] [(short)7] [1])) ? (((/* implicit */unsigned int) ((arr_29 [3ULL] [(short)4] [(unsigned char)16]) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_10))))) : (((unsigned int) var_8))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    for (unsigned short i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) ((short) (+(0U))));
                            arr_44 [i_0] [(short)4] [(short)1] [i_11] [(short)4] [7U] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_36 [(_Bool)1] [i_0] [6ULL] [i_0] [i_0]))) << (20U)));
                            var_28 = ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
            }
            var_29 = ((/* implicit */unsigned long long int) arr_42 [(short)8] [(short)8] [(short)8] [16LL] [(short)8] [14U] [(_Bool)1]);
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned int i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    {
                        var_30 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_24 [i_0] [8ULL] [i_0 + 1]))));
                        var_31 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -46389661)) || (((/* implicit */_Bool) 10U))));
                    }
                } 
            } 
        }
        for (unsigned int i_15 = 2; i_15 < 15; i_15 += 2) 
        {
            var_32 *= ((/* implicit */unsigned int) (~((-(4031567034320259343LL)))));
            arr_55 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) arr_54 [i_0] [i_0] [(signed char)1]));
            /* LoopNest 2 */
            for (unsigned int i_16 = 2; i_16 < 16; i_16 += 2) 
            {
                for (unsigned char i_17 = 0; i_17 < 18; i_17 += 2) 
                {
                    {
                        var_33 = ((/* implicit */unsigned long long int) var_7);
                        arr_63 [i_0] [(unsigned char)0] [i_0] [9U] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)59))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (signed char i_18 = 3; i_18 < 17; i_18 += 1) 
        {
            for (signed char i_19 = 2; i_19 < 17; i_19 += 1) 
            {
                {
                    arr_70 [(unsigned char)2] [i_18] = ((/* implicit */unsigned long long int) 1033584840);
                    var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_69 [i_0] [i_0]))));
                    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) arr_53 [i_0 + 1]))));
                }
            } 
        } 
        arr_71 [17U] [17U] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_47 [i_0])))));
        arr_72 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_29 [11U] [i_0 + 1] [i_0 + 1]) || (((/* implicit */_Bool) var_6))));
    }
    var_36 = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */int) var_9)), (((((-979028416) + (2147483647))) << (((((/* implicit */int) var_1)) - (41))))))));
    /* LoopNest 2 */
    for (unsigned int i_20 = 0; i_20 < 17; i_20 += 2) 
    {
        for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
        {
            {
                var_37 = max((arr_39 [(_Bool)1] [0ULL] [8ULL] [i_21]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_18 [13U] [13U] [13U] [13U] [13U] [13U]), (((/* implicit */unsigned long long int) var_5)))))))));
                arr_77 [(unsigned short)3] [i_21] [(short)10] = ((/* implicit */short) arr_74 [i_20]);
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
    var_39 = ((/* implicit */unsigned int) ((unsigned long long int) var_0));
}
