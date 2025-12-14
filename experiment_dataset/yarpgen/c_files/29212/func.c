/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29212
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                for (unsigned short i_3 = 3; i_3 < 8; i_3 += 1) 
                {
                    {
                        arr_14 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(min(((_Bool)1), (arr_12 [i_1]))))))));
                        var_20 ^= ((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)1))))));
                        arr_15 [(unsigned char)9] [i_1] [i_2] [i_0] [i_3 + 2] = ((/* implicit */short) var_13);
                    }
                } 
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) (((-(var_0))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        /* LoopSeq 3 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_5 = 2; i_5 < 9; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        {
                            var_21 ^= ((/* implicit */signed char) var_7);
                            arr_29 [i_0] [i_6] [i_0] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_18 [i_4] [i_5] [i_7]))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0 - 2] [i_5]))))))))) - ((+(((unsigned int) var_0))))));
                            arr_30 [i_0] [i_6] [i_0] = ((((/* implicit */_Bool) min(((short)14636), (((/* implicit */short) var_4))))) && (((((/* implicit */_Bool) (signed char)-1)) && (arr_23 [i_0 - 1] [i_0 + 2]))));
                        }
                    } 
                } 
            } 
            arr_31 [i_0] = ((/* implicit */unsigned long long int) min((var_19), (5485622883845788104LL)));
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_35 [i_0 + 1] [i_0] = ((/* implicit */long long int) var_16);
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                arr_38 [i_0] = ((/* implicit */short) -5788058781765184216LL);
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_12))));
                arr_39 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)85);
            }
            for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                arr_44 [i_0] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_8] [i_10]))));
                var_23 ^= ((/* implicit */unsigned int) var_0);
            }
        }
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
        {
            arr_47 [(unsigned char)1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_41 [i_0 - 1] [i_0] [i_11 - 1]))));
            arr_48 [i_0] = ((/* implicit */long long int) var_6);
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned short i_13 = 3; i_13 < 7; i_13 += 2) 
                {
                    {
                        arr_57 [i_0] [i_0] [(short)9] [i_13] = ((/* implicit */signed char) arr_56 [i_0]);
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (short)20709))));
                        /* LoopSeq 1 */
                        for (signed char i_14 = 0; i_14 < 11; i_14 += 2) 
                        {
                            arr_61 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((!(((((/* implicit */_Bool) (signed char)-102)) && (((/* implicit */_Bool) (signed char)64)))))) && (((/* implicit */_Bool) 3661923509U)));
                            arr_62 [i_11] [i_0] [i_0] [i_11] = ((/* implicit */unsigned long long int) var_17);
                        }
                        var_25 ^= ((/* implicit */short) var_18);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (long long int i_16 = 2; i_16 < 10; i_16 += 2) 
                {
                    for (unsigned int i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        {
                            var_26 ^= ((/* implicit */signed char) arr_53 [(unsigned short)8] [i_15] [i_16] [(unsigned short)8]);
                            var_27 ^= ((/* implicit */unsigned char) ((unsigned short) 921746782382036303LL));
                            var_28 = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 4) 
            {
                var_29 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0])) && (max((arr_66 [i_0] [10U] [i_0] [i_0]), ((_Bool)1)))))) != (((/* implicit */int) arr_3 [3LL])));
                var_30 = ((/* implicit */unsigned char) (!((_Bool)1)));
            }
        }
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_20 = 1; i_20 < 13; i_20 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_21 = 0; i_21 < 14; i_21 += 3) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 14; i_22 += 1) 
                {
                    {
                        var_31 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 2040221166U)) && (((/* implicit */_Bool) 2035082732964329045ULL)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_76 [i_21] [i_20])))) + (((/* implicit */int) (signed char)6))));
                        var_32 = ((_Bool) (_Bool)1);
                        var_33 ^= ((/* implicit */unsigned int) -4978379682369763588LL);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_23 = 2; i_23 < 12; i_23 += 4) 
            {
                for (signed char i_24 = 0; i_24 < 14; i_24 += 4) 
                {
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) ((_Bool) var_0));
                            arr_93 [i_19] [i_20] [i_23] [i_24] [i_25] = ((/* implicit */unsigned int) (unsigned short)58453);
                            var_35 ^= ((/* implicit */unsigned int) (((~(((/* implicit */int) ((signed char) -3169888424706754682LL))))) % ((~(((/* implicit */int) ((unsigned short) arr_81 [i_25])))))));
                            arr_94 [i_20] = 8384512U;
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            arr_99 [i_19] [i_19] [i_26] = ((/* implicit */unsigned char) var_0);
            arr_100 [i_19] [i_19] [i_26] = ((/* implicit */long long int) (+(((/* implicit */int) var_18))));
        }
        for (unsigned long long int i_27 = 0; i_27 < 14; i_27 += 2) 
        {
            arr_103 [i_27] = ((/* implicit */_Bool) max((((/* implicit */int) var_18)), ((-(((/* implicit */int) (signed char)102))))));
            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) 15441491963363804974ULL))));
            var_37 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_77 [i_19] [i_19]))) / (arr_95 [i_27]))) == (max((((/* implicit */long long int) arr_90 [i_19])), (arr_95 [i_27])))));
            arr_104 [i_19] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) && (((((((/* implicit */int) var_17)) % (((/* implicit */int) (signed char)-59)))) != (((/* implicit */int) (_Bool)1))))));
            arr_105 [i_27] [i_27] [i_27] = ((((/* implicit */_Bool) (short)-32760)) && (((/* implicit */_Bool) (unsigned char)184)));
        }
        arr_106 [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_80 [(_Bool)1] [i_19] [i_19])))) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) (signed char)-7))));
        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((13877901781522534395ULL) < (((((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_19]))))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)85))))))))))));
        var_39 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) max((arr_81 [i_19]), (arr_80 [i_19] [i_19] [i_19])))) < (var_16))))));
    }
    for (unsigned char i_28 = 2; i_28 < 23; i_28 += 3) 
    {
        var_40 = ((/* implicit */_Bool) min((((long long int) (-(var_1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_107 [(short)10])))) ? ((~(((/* implicit */int) (signed char)11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_109 [(signed char)1]))))))))));
        var_41 = ((/* implicit */unsigned char) arr_107 [i_28]);
        /* LoopNest 2 */
        for (unsigned short i_29 = 0; i_29 < 24; i_29 += 3) 
        {
            for (unsigned char i_30 = 0; i_30 < 24; i_30 += 2) 
            {
                {
                    var_42 = ((/* implicit */long long int) min((5138529731229109676ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_31 = 0; i_31 < 24; i_31 += 1) /* same iter space */
                    {
                        arr_119 [i_28] [i_29] [i_30] [i_31] [(short)22] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)38040)) : (((/* implicit */int) (signed char)78))))) / (((((unsigned int) 266511276U)) - (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))))));
                        arr_120 [i_28] [i_31] [i_30] [i_30] [i_28] = ((/* implicit */short) (~(((/* implicit */int) ((min((arr_116 [i_28] [i_29] [i_29] [i_31] [i_30]), (2181794105U))) == (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)42822), (((/* implicit */unsigned short) var_15)))))))))));
                    }
                    for (unsigned long long int i_32 = 0; i_32 < 24; i_32 += 1) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned int) (signed char)-7);
                        var_44 = (_Bool)0;
                        var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) var_13))));
                    }
                }
            } 
        } 
        arr_125 [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_18))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((((/* implicit */long long int) 4289695763U)), (((((/* implicit */_Bool) (short)-3399)) ? (((/* implicit */long long int) 2938508864U)) : (arr_123 [11U])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_33 = 4; i_33 < 23; i_33 += 3) 
        {
            var_46 = ((/* implicit */_Bool) ((arr_116 [i_28] [i_28 - 1] [i_28 - 1] [i_28] [(signed char)3]) >> ((((-(((/* implicit */int) var_18)))) + (69)))));
            arr_128 [i_28] = ((/* implicit */long long int) ((1356458432U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_110 [i_28] [i_28 + 1])))));
            arr_129 [i_28] [i_28] = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_124 [i_28] [i_28 - 2]) && (((/* implicit */_Bool) arr_122 [i_28] [i_28] [i_28] [i_28] [i_33] [i_33])))))));
            var_47 = ((/* implicit */unsigned int) var_14);
        }
    }
    var_48 = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)0)))) - (((/* implicit */int) var_10))));
    var_49 ^= ((/* implicit */short) (unsigned short)31741);
}
