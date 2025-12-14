/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216123
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
    for (unsigned long long int i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) arr_0 [i_0 - 4]);
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_12))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) ((signed char) -6296743544111617686LL));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)37)) ? (16140901064495857664ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14)))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (6296743544111617695LL)));
    }
    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 4) 
    {
        var_23 = ((/* implicit */signed char) ((((4553711612270273397ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59))))) + (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 16140901064495857676ULL)))) ? (arr_8 [(short)15]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69))))))));
        arr_9 [i_3] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7605337128465171033ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (7605337128465171033ULL)))) ? (((/* implicit */long long int) ((var_16) ? (arr_8 [i_3 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3 + 2])))))) : (var_17)));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_8 [16LL]))));
    }
    for (signed char i_4 = 2; i_4 < 17; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 1; i_5 < 18; i_5 += 1) 
        {
            var_25 += ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (unsigned char)3))))));
            var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_5 - 1])) ? (arr_12 [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20)))));
            arr_15 [i_4] [18U] = ((/* implicit */unsigned int) arr_10 [i_5]);
        }
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_13 [i_4]))));
        arr_16 [i_4] = ((/* implicit */int) var_2);
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (((_Bool)1) ? (2915678559U) : (4294967295U))))));
        var_29 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4 - 1])) ? (arr_8 [i_4 + 1]) : (arr_8 [i_4 + 2])))) ? (((((/* implicit */_Bool) arr_8 [i_4 + 2])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_14 [i_4 + 2])))) : (((/* implicit */int) (unsigned char)151)));
    }
    /* vectorizable */
    for (signed char i_6 = 2; i_6 < 17; i_6 += 3) /* same iter space */
    {
        arr_19 [i_6 - 1] = ((/* implicit */signed char) arr_11 [i_6]);
        var_30 ^= ((/* implicit */long long int) (unsigned char)255);
        /* LoopSeq 2 */
        for (unsigned int i_7 = 2; i_7 < 18; i_7 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                for (long long int i_9 = 2; i_9 < 18; i_9 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_10 = 2; i_10 < 18; i_10 += 2) /* same iter space */
                        {
                            arr_30 [i_6] [i_7 + 1] [i_9] [i_9] [i_10 + 1] = ((/* implicit */signed char) var_11);
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)209))) : (arr_12 [i_6 + 2])));
                        }
                        for (signed char i_11 = 2; i_11 < 18; i_11 += 2) /* same iter space */
                        {
                            var_32 += ((/* implicit */unsigned int) 405095745);
                            arr_34 [i_9] [i_7] [i_7] = ((/* implicit */unsigned long long int) var_7);
                            var_33 = ((/* implicit */unsigned int) ((var_16) ? (arr_18 [i_6 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6 + 2] [i_7] [i_8])))));
                        }
                        arr_35 [i_6] [0ULL] [i_9] [i_8] [i_9 - 2] = ((/* implicit */unsigned long long int) var_14);
                        var_34 = ((/* implicit */unsigned int) (signed char)-110);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_12 = 2; i_12 < 17; i_12 += 2) 
            {
                for (long long int i_13 = 4; i_13 < 18; i_13 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_44 [i_6] [0U] [i_7 + 1] [i_13] [i_14] = ((/* implicit */long long int) (_Bool)1);
                            arr_45 [i_6] [i_7] [i_12] [i_6] [i_14] = ((((/* implicit */_Bool) arr_25 [i_12 - 1] [i_12 + 1] [5U])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_41 [i_6] [i_6 - 1] [i_7 - 2] [i_12] [i_12 - 1] [i_13 - 2] [i_14])) : (((/* implicit */int) var_3))))) : (var_17));
                        }
                        for (int i_15 = 0; i_15 < 19; i_15 += 4) 
                        {
                            var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_12)))))))));
                            var_36 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2858007406533332505LL)) ? (arr_8 [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_33 [i_6] [i_6] [4LL] [(_Bool)1] [i_6])) : (((/* implicit */int) var_13))));
                            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) (unsigned char)255))));
                            arr_50 [i_6] [i_7 - 1] [i_12] [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [(signed char)8] [i_12 - 2] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_13 [i_13 - 3])));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_54 [i_6] [(_Bool)0] [i_13 - 3] [i_16] = ((/* implicit */unsigned char) arr_29 [i_6] [i_7] [i_7] [i_13 - 2] [i_16]);
                            arr_55 [i_6 - 1] [i_6 - 1] [i_12 - 2] [i_12 - 2] [i_16] [i_16] = ((/* implicit */unsigned char) var_17);
                        }
                        var_38 = ((/* implicit */short) arr_13 [i_6]);
                    }
                } 
            } 
        }
        for (unsigned int i_17 = 2; i_17 < 18; i_17 += 4) /* same iter space */
        {
            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_17 - 1])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_57 [i_6] [i_6 + 1] [i_6]))))));
            var_40 = ((/* implicit */unsigned char) var_13);
            /* LoopSeq 3 */
            for (unsigned long long int i_18 = 4; i_18 < 15; i_18 += 2) 
            {
                arr_62 [i_18] [i_17 + 1] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_28 [i_6]))));
                var_41 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 5474733845404495656ULL)) ? (arr_29 [i_6] [i_17] [i_17] [i_18 + 4] [i_18 + 4]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                var_42 = ((/* implicit */long long int) (_Bool)1);
                var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7605337128465171033ULL)) ? (((var_6) ? (((/* implicit */long long int) arr_26 [i_6 + 1] [(signed char)2] [i_18] [i_18])) : (var_17))) : (((/* implicit */long long int) arr_32 [i_6] [i_6] [i_6 - 1] [i_17] [i_17 - 2] [i_18 + 3] [i_18 + 2]))));
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 2; i_19 < 15; i_19 += 2) 
                {
                    for (unsigned long long int i_20 = 4; i_20 < 18; i_20 += 1) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned int) var_13);
                            var_45 = ((/* implicit */signed char) arr_46 [i_6 - 2] [i_6]);
                        }
                    } 
                } 
            }
            for (signed char i_21 = 2; i_21 < 15; i_21 += 2) 
            {
                var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) var_3))));
                arr_71 [i_6 + 2] [i_17] [3] [i_17 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_6 + 1] [i_17 - 2] [(short)10])) ? (((/* implicit */int) arr_37 [i_6] [17LL] [i_17] [i_17])) : (((/* implicit */int) (signed char)85))));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                arr_75 [i_6] [i_17] [(unsigned char)6] [i_6 - 1] = var_7;
                arr_76 [i_22] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_49 [i_17] [i_17 - 1] [i_17 - 2] [i_17] [i_22] [i_22] [i_22])) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))));
            }
            var_47 = ((/* implicit */unsigned long long int) arr_66 [(signed char)1] [(signed char)1] [(signed char)1] [i_17 + 1] [i_17 - 1]);
        }
    }
    var_48 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_23 = 0; i_23 < 19; i_23 += 2) 
    {
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            {
                arr_82 [i_23] [i_23] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22293))) : (4294967295U)));
                arr_83 [i_23] [(signed char)8] = (_Bool)0;
                var_49 = ((/* implicit */unsigned int) arr_80 [(_Bool)1] [i_23] [(unsigned short)7]);
                arr_84 [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (unsigned char)3))));
            }
        } 
    } 
}
