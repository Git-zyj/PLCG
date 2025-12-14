/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201591
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
    var_20 = ((/* implicit */unsigned long long int) max(((~(-6739476576196710734LL))), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_3)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            var_21 *= ((/* implicit */unsigned char) (+(((unsigned long long int) 1031473604U))));
            var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (var_17) : (((min((var_10), (var_18))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12558)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (_Bool)1)))))))));
        }
        /* vectorizable */
        for (short i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 2; i_3 < 20; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) (((!(arr_4 [i_0]))) ? (var_15) : ((+(((/* implicit */int) var_13))))));
                            var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)26676)) ? (((/* implicit */unsigned long long int) 1577487260U)) : (var_16)));
                        }
                    } 
                } 
            } 
            arr_18 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_13 [i_2 + 1] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_13 [i_2 - 1] [i_0 + 1]));
            arr_19 [i_0] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_0))))));
        }
        /* LoopNest 2 */
        for (long long int i_6 = 4; i_6 < 21; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 2) 
                    {
                        var_24 ^= ((/* implicit */short) ((unsigned int) ((unsigned long long int) (short)-26683)));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_9 = 1; i_9 < 21; i_9 += 2) 
                        {
                            arr_32 [i_0] [i_7] [i_7] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            var_25 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) ((unsigned char) arr_5 [i_8] [i_7])))));
                            arr_33 [i_9] [i_0] [i_8] [i_7] [i_7] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(16536945488807985146ULL)))) ? (1079881767U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)26676)) : ((-2147483647 - 1)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_26 ^= ((/* implicit */unsigned int) (((+(3215085529U))) < (0U)));
                            arr_37 [i_0] [i_0] [i_6] [i_6] [i_6] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29606)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (393258307U)))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) (short)-24560))));
                            arr_38 [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) ((arr_5 [i_0] [i_10]) + ((~(var_18)))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */int) (short)-6772);
                            arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((unsigned char) arr_5 [i_0] [i_8 + 1])), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)244)) < (((/* implicit */int) (short)-30373)))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_47 [i_0] [i_0] [i_6] [i_7] [i_0] [i_12] = ((/* implicit */short) min((((/* implicit */unsigned int) arr_23 [i_0 - 2] [i_0 - 2] [i_0 - 1])), (max((1912564981U), (((/* implicit */unsigned int) arr_23 [(_Bool)1] [i_0] [i_0 + 2]))))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 562949953421311LL))) ? (3215085530U) : (2139095040U)));
                            arr_48 [i_0] [i_6] [16LL] [i_8] [i_12] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (short)8284)) * (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (short)0))))))));
                        }
                    }
                    for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        arr_51 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((536870912U), (((/* implicit */unsigned int) min((((int) (short)-1450)), (((/* implicit */int) var_4)))))));
                        var_29 = ((/* implicit */unsigned char) arr_15 [i_0 - 2] [i_6] [i_6] [i_6 - 2] [i_6 + 1] [i_6 + 1] [i_6 - 2]);
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178))) * (((((/* implicit */_Bool) (unsigned char)155)) ? (3579301614U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_0] [i_6] [i_0] [i_6] [i_7] [i_6] [i_7])))))))) ? ((-(16887078711053522410ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_18)))))))));
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 1559665362656029205ULL))));
                        arr_52 [i_0] [i_0] [16ULL] |= ((/* implicit */unsigned char) arr_44 [15ULL] [i_13] [i_13] [i_13] [i_7] [i_6] [i_0]);
                    }
                    for (long long int i_14 = 0; i_14 < 22; i_14 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((((arr_12 [i_0] [i_0 - 3] [i_0]) ? (((/* implicit */int) arr_12 [i_0] [i_0 - 3] [i_0])) : (((/* implicit */int) arr_12 [i_0 - 1] [i_0 + 1] [i_0])))) & (((/* implicit */int) ((_Bool) 17528422130386874120ULL)))));
                        arr_55 [i_7] [18ULL] [18ULL] [(_Bool)1] [i_0] [i_7] = ((/* implicit */short) (~(max((((/* implicit */int) arr_22 [i_0 + 2] [i_0] [i_6])), ((~(((/* implicit */int) var_6))))))));
                        var_33 = ((/* implicit */short) (+(max((((/* implicit */unsigned int) var_6)), (1317595533U)))));
                        var_34 *= ((/* implicit */_Bool) ((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [(unsigned char)10] [(unsigned char)10] [i_6 - 2])) || (((/* implicit */_Bool) (~(-620093745))))))))));
                    }
                    var_35 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) (short)-6772)), (((((/* implicit */_Bool) arr_40 [i_0] [i_7])) ? (var_8) : (var_16))))), (((/* implicit */unsigned long long int) var_14))));
                    arr_56 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_10)))) ? (arr_13 [i_6] [i_6 + 1]) : (((((/* implicit */long long int) arr_53 [i_6] [i_6 + 1] [i_0] [i_7] [i_7])) + (arr_13 [i_0] [i_6 + 1])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_15 = 0; i_15 < 22; i_15 += 3) 
        {
            for (long long int i_16 = 3; i_16 < 20; i_16 += 3) 
            {
                {
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (11024138778735554906ULL))) << ((((+(16887078711053522432ULL))) - (16887078711053522414ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2977371763U)) ? (334113825042794956LL) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)128)))))))));
                    arr_62 [i_0] [i_0] [i_16] [i_16] = max((((/* implicit */unsigned long long int) max(((short)635), (arr_44 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_15] [i_16])))), (min((((/* implicit */unsigned long long int) var_12)), (arr_5 [i_0] [(_Bool)1]))));
                    arr_63 [i_0] = ((/* implicit */_Bool) ((long long int) max(((~(var_11))), (max((((/* implicit */long long int) arr_24 [i_0] [i_15] [i_16] [0U])), (var_12))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_17 = 0; i_17 < 22; i_17 += 2) 
        {
            for (int i_18 = 0; i_18 < 22; i_18 += 3) 
            {
                for (long long int i_19 = 3; i_19 < 20; i_19 += 3) 
                {
                    {
                        var_37 = ((((/* implicit */int) (((~(((/* implicit */int) var_4)))) != (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 334113825042794934LL)))))))) < (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) arr_40 [i_19 - 2] [i_19 - 2]))))));
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) min((((((var_15) + (2147483647))) >> (((var_9) - (2198696871U))))), (((arr_31 [i_17]) | (arr_31 [i_17]))))))));
                    }
                } 
            } 
        } 
        var_39 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2305843009213693696LL)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_60 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_9 [i_0 - 2])) : (((/* implicit */int) arr_69 [i_0 - 1] [i_0 - 3]))))));
    }
    for (unsigned char i_20 = 0; i_20 < 21; i_20 += 2) 
    {
        var_40 = ((/* implicit */unsigned long long int) 452663708);
        arr_73 [i_20] |= ((/* implicit */int) var_1);
    }
    /* LoopSeq 1 */
    for (unsigned int i_21 = 0; i_21 < 14; i_21 += 2) 
    {
        arr_77 [i_21] = ((/* implicit */int) ((((((/* implicit */_Bool) max((334113825042794951LL), (((/* implicit */long long int) var_2))))) ? (((((/* implicit */_Bool) var_7)) ? (918321943322677493ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_21] [(unsigned char)3] [(unsigned char)3] [i_21]))))) : ((~(var_16))))) | (((/* implicit */unsigned long long int) min((((var_11) | (((/* implicit */long long int) 3633069930U)))), (((/* implicit */long long int) ((((/* implicit */int) var_13)) >> (((arr_60 [i_21] [i_21] [i_21]) - (1200495578U)))))))))));
        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_15)) : (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-15898))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1583)) / (-1390897590)))) : ((+(arr_8 [i_21] [10ULL] [10ULL])))))));
        /* LoopSeq 2 */
        for (unsigned char i_22 = 4; i_22 < 10; i_22 += 3) 
        {
            var_42 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1079881766U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_21] [i_21] [i_21] [i_22]))) : (4247339445U)))))) ? (((/* implicit */int) min((arr_23 [i_21] [i_21] [i_22]), ((!(((/* implicit */_Bool) 9223372036854775807LL))))))) : ((-(((/* implicit */int) var_5))))));
            var_43 = ((/* implicit */_Bool) max((((var_0) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))), ((-(var_1)))));
            arr_80 [i_22] [i_21] = ((/* implicit */int) (-((-(((((/* implicit */long long int) ((/* implicit */int) arr_79 [i_21]))) + (var_11)))))));
        }
        for (short i_23 = 0; i_23 < 14; i_23 += 2) 
        {
            var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) (-(0ULL))))));
            arr_84 [i_21] [i_23] = ((/* implicit */short) 4012756367252308186LL);
            /* LoopNest 3 */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    for (unsigned long long int i_26 = 3; i_26 < 13; i_26 += 2) 
                    {
                        {
                            var_45 = (~(-334113825042794961LL));
                            var_46 = ((/* implicit */unsigned char) ((var_15) | (((/* implicit */int) ((((/* implicit */_Bool) min((arr_45 [i_21] [i_23] [i_21] [i_25] [i_21]), (((/* implicit */short) arr_69 [i_21] [i_21]))))) && (((/* implicit */_Bool) (short)(-32767 - 1))))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_47 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(var_12)))) != (((max((var_18), (((/* implicit */unsigned long long int) var_1)))) * (((/* implicit */unsigned long long int) var_1))))));
}
