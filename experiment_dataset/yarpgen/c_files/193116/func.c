/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193116
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 8; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_16 -= max((((/* implicit */int) var_7)), ((-(((/* implicit */int) var_2)))));
                        var_17 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 524160U)) <= (((arr_5 [i_0] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) ? (max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) 42054441)))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), ((-(((/* implicit */int) arr_7 [i_0])))))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)85)), ((unsigned short)45680)));
        arr_11 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)19879)))) & (((/* implicit */int) ((_Bool) var_1)))));
    }
    /* LoopSeq 4 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_14 [(short)13] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (short)4080)), (-8580335128272655221LL)));
        var_18 = ((/* implicit */unsigned short) (((_Bool)1) ? (6027961396531639294ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3)))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 17; i_5 += 4) 
    {
        var_19 = ((/* implicit */long long int) (~(arr_16 [i_5 + 3])));
        var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_15 [i_5 - 2]))));
        /* LoopSeq 4 */
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    {
                        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) arr_24 [i_5 - 1]))));
                        var_22 = ((/* implicit */signed char) (_Bool)1);
                    }
                } 
            } 
            arr_27 [i_5] [i_5] = ((/* implicit */short) var_10);
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    {
                        arr_33 [i_9] [i_9] [i_5] [i_5] [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) arr_24 [i_5 + 2]))));
                        var_23 = ((/* implicit */int) ((arr_26 [i_5 + 1] [i_6] [i_9] [i_10]) - (arr_26 [i_5 + 1] [i_6] [i_6] [i_10])));
                        var_24 = ((((/* implicit */_Bool) 15928379640226120440ULL)) ? (arr_20 [i_5 + 2] [i_5 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
        for (signed char i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_12 = 4; i_12 < 18; i_12 += 1) 
            {
                for (unsigned char i_13 = 1; i_13 < 18; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) arr_42 [i_5] [i_5] [i_5] [i_5]);
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)3))));
                            var_27 = ((/* implicit */unsigned int) arr_32 [i_5 - 2] [i_5 - 2] [i_12]);
                            var_28 = ((/* implicit */unsigned int) arr_32 [i_5 - 1] [i_5 + 1] [i_5 + 1]);
                        }
                    } 
                } 
            } 
            var_29 = ((((/* implicit */_Bool) (short)-4077)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_9));
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_5] [i_5 + 1] [i_5 + 2])) ? (((/* implicit */int) arr_35 [i_5] [i_5] [i_5 + 2])) : (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 1 */
            for (unsigned char i_15 = 0; i_15 < 20; i_15 += 4) 
            {
                var_31 = ((/* implicit */unsigned int) var_1);
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) 144115188042301440ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) (unsigned char)74))))) : (arr_36 [i_5] [i_5])));
            }
        }
        for (signed char i_16 = 1; i_16 < 19; i_16 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_17 = 0; i_17 < 20; i_17 += 4) 
            {
                arr_53 [i_5] [(unsigned char)7] [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)13661)) : (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_34 [i_16] [15U]));
                var_33 = ((/* implicit */long long int) arr_23 [i_5] [i_5] [i_5] [i_5]);
                arr_54 [i_16] = ((/* implicit */unsigned int) var_6);
                /* LoopSeq 2 */
                for (long long int i_18 = 0; i_18 < 20; i_18 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_18] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_29 [i_5] [i_5] [(signed char)12])))))));
                    var_35 *= ((/* implicit */short) ((((/* implicit */_Bool) 2225933204U)) ? (arr_16 [i_5 - 2]) : (arr_16 [i_5 - 2])));
                    var_36 = ((/* implicit */unsigned short) ((signed char) ((15619032968518399469ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))));
                }
                for (long long int i_19 = 0; i_19 < 20; i_19 += 3) /* same iter space */
                {
                    var_37 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) & (var_9)));
                    arr_59 [i_5 - 2] [i_16] [i_17] [i_16] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_5 - 2] [i_5 + 1] [i_16 - 1])) ? (arr_46 [i_5 - 2] [i_5 + 1] [i_5 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_16 + 1])))));
                    arr_60 [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_5] [i_16 - 1] [i_17])) ? (arr_46 [i_5 + 3] [i_5 + 3] [i_16 + 1]) : (var_10)));
                }
                var_39 = ((/* implicit */int) var_10);
            }
            for (short i_20 = 0; i_20 < 20; i_20 += 1) 
            {
                var_40 = ((/* implicit */short) var_4);
                arr_63 [i_5] [i_5] [i_16] = ((/* implicit */int) var_8);
            }
            /* LoopNest 2 */
            for (long long int i_21 = 0; i_21 < 20; i_21 += 4) 
            {
                for (signed char i_22 = 1; i_22 < 18; i_22 += 4) 
                {
                    {
                        arr_69 [i_16] [0U] [i_16] = ((/* implicit */signed char) ((_Bool) arr_45 [i_16 + 1] [i_22 + 1]));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_23 = 4; i_23 < 18; i_23 += 1) 
                        {
                            var_41 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) & ((((_Bool)1) ? (((/* implicit */int) var_14)) : (var_3)))));
                            var_42 *= ((/* implicit */unsigned short) var_6);
                            var_43 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_23] [(unsigned char)11] [(unsigned char)11] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_20 [(unsigned char)13] [i_5 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_5 + 1] [i_16] [i_16] [i_16 + 1]))) : (arr_67 [i_16] [i_16] [i_16 - 1] [i_16] [i_16 + 1] [(short)14])));
                            var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_32 [(short)10] [i_16 + 1] [(unsigned char)15])) : (((/* implicit */int) var_7))));
                        }
                        for (short i_24 = 1; i_24 < 18; i_24 += 3) 
                        {
                            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(4503599627370495ULL)))) ? (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-72))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42))))))));
                            arr_74 [i_5] [i_16] [i_21] [i_22] [i_24] = ((/* implicit */_Bool) (((_Bool)1) ? (15LL) : (((/* implicit */long long int) -67108864))));
                        }
                        var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)101)) + (((/* implicit */int) var_6)))))));
                    }
                } 
            } 
        }
        for (unsigned char i_25 = 0; i_25 < 20; i_25 += 2) 
        {
            var_47 = ((/* implicit */unsigned short) ((unsigned long long int) 12171945867571264043ULL));
            var_48 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_35 [i_5] [i_5 - 2] [i_25]))));
            arr_77 [(unsigned char)7] [(unsigned char)14] [i_25] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)255))));
        }
    }
    /* vectorizable */
    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
    {
        var_49 = ((/* implicit */long long int) ((int) arr_30 [i_26 - 1] [i_26] [i_26]));
        arr_81 [i_26 - 1] [i_26 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_32 [i_26 - 1] [i_26 - 1] [i_26 - 1]))));
        var_50 *= ((/* implicit */int) (-(((((/* implicit */_Bool) -5313791610921542459LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15244))) : (18265069707557474019ULL)))));
    }
    /* vectorizable */
    for (int i_27 = 0; i_27 < 14; i_27 += 1) 
    {
        var_51 = ((/* implicit */long long int) (-(var_10)));
        arr_84 [i_27] = ((/* implicit */unsigned long long int) arr_38 [i_27] [i_27] [i_27] [i_27]);
        arr_85 [i_27] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_30 [(short)5] [(short)5] [(short)5])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) (unsigned char)126)) ? (arr_55 [i_27] [i_27] [i_27]) : (((/* implicit */int) (_Bool)0))))));
    }
    var_52 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_0)), (max((((/* implicit */unsigned char) var_6)), (var_14)))))), (var_11)));
}
