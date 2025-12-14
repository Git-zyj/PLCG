/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222848
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) max((((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))))), ((short)-32762)));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0 - 2])) <= (((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (arr_4 [i_0])))))))))));
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((7981117189985456505ULL), (((/* implicit */unsigned long long int) (signed char)-113))))) ? (max((((/* implicit */int) (unsigned char)224)), (var_2))) : (((/* implicit */int) arr_5 [i_0 + 1] [i_1 + 1] [i_1 + 1]))))) ? (var_2) : (((/* implicit */int) ((((((/* implicit */int) (short)32762)) & (((/* implicit */int) var_1)))) > (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) arr_4 [i_1]))))))))))));
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_0 [i_0]))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) ((((long long int) (short)64)) & (((/* implicit */long long int) var_8))));
            var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 2]))));
        }
        for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                var_17 = ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) var_10)))));
                var_18 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_15 [13LL] [i_0] [i_0 - 1] [i_0]))))));
            }
            for (unsigned short i_5 = 4; i_5 < 19; i_5 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_6 = 1; i_6 < 19; i_6 += 4) 
                {
                    var_19 = ((/* implicit */unsigned long long int) arr_6 [i_6] [i_0] [i_0]);
                    var_20 = ((/* implicit */short) arr_14 [i_5 - 1] [i_0 + 1]);
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (unsigned char)86))));
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        arr_26 [i_0] [i_3] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) var_8);
                        var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) 2226925927U))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0] [(unsigned char)4] [i_0])) && (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) arr_15 [i_0] [i_3] [i_3] [i_0]))));
                        var_23 = ((/* implicit */_Bool) arr_18 [i_0 + 1] [i_6 + 1]);
                        var_24 = ((/* implicit */unsigned short) 705727826U);
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */short) min((var_25), ((short)32766)));
                        arr_29 [i_5] [i_3] [i_5] [i_6] [i_6] = arr_14 [i_0] [i_0];
                    }
                    for (short i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        arr_32 [(short)15] [i_6] [i_6] [i_5] [i_6] = ((/* implicit */short) -9223372036854775790LL);
                        arr_33 [i_0] [i_9] [i_5] [i_6] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)17)) & (((/* implicit */int) (signed char)47))))) & (var_3)));
                        var_26 = ((/* implicit */unsigned char) var_4);
                    }
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (-(var_8))))));
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_11 = 1; i_11 < 18; i_11 += 2) 
                    {
                        arr_38 [i_5] [i_5] [i_5] [i_5] [i_11] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32750)) ? (644195585) : (((/* implicit */int) (_Bool)1))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */long long int) arr_18 [i_11 + 2] [i_5])) : (var_9))) + (9223372036854775807LL))) << (((4777236951448062978LL) - (4777236951448062978LL))))))));
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) var_9))));
                    }
                    var_30 = ((/* implicit */short) (signed char)78);
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)-32741)) : (((/* implicit */int) (unsigned char)255))));
                    var_32 += ((/* implicit */unsigned short) ((short) arr_6 [i_10] [i_10] [i_10]));
                }
                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)128)), (((((/* implicit */_Bool) var_6)) ? (1243126119U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27007)))))))) : (min((((/* implicit */unsigned long long int) max((9223372036854775804LL), (((/* implicit */long long int) var_2))))), (arr_20 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
                arr_39 [i_0] [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)23093)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_9))) & (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_5])))))) ? (arr_16 [i_5 - 1] [i_3] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4080)))));
            }
            for (int i_12 = 2; i_12 < 17; i_12 += 4) 
            {
                arr_44 [i_0] [i_0] [i_0] &= ((/* implicit */signed char) arr_30 [i_0] [i_0] [i_3] [i_3] [i_12]);
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 3; i_13 < 19; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 3; i_14 < 19; i_14 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */signed char) arr_14 [i_0] [i_13]);
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79))) : (3589239475U))))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */_Bool) max(((short)511), ((short)-27001)))) ? (((/* implicit */int) ((unsigned short) 14116566125908725911ULL))) : (((((/* implicit */_Bool) 1152921504606846975ULL)) ? (((/* implicit */int) (short)-511)) : (((((/* implicit */_Bool) 705727829U)) ? (((/* implicit */int) (short)522)) : (((/* implicit */int) (_Bool)1)))))))))));
                var_37 |= ((/* implicit */unsigned char) (~((-((-(var_5)))))));
                var_38 = ((/* implicit */long long int) max(((short)-1), (((/* implicit */short) (!(((/* implicit */_Bool) 3138738441U)))))));
            }
            var_39 = ((/* implicit */signed char) ((unsigned char) (-(arr_23 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0]))));
            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (short)32767)) << (((((/* implicit */int) (signed char)54)) - (43))))))))))));
            var_41 = ((/* implicit */long long int) ((((((/* implicit */int) arr_15 [i_3] [i_0 + 1] [i_0 - 2] [i_0 + 1])) > (((/* implicit */int) arr_15 [10U] [i_0 - 2] [i_0 - 2] [i_0 - 2])))) ? ((~(((/* implicit */int) (short)5582)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        }
        for (short i_15 = 0; i_15 < 20; i_15 += 1) 
        {
            var_42 &= ((/* implicit */unsigned char) var_7);
            /* LoopSeq 1 */
            for (signed char i_16 = 0; i_16 < 20; i_16 += 1) 
            {
                arr_56 [i_0] [i_0] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)27001)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32749))) : (-22LL)))))) ? (((/* implicit */int) ((unsigned char) 2587559107U))) : (((/* implicit */int) var_10))));
                var_43 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_7 [i_0] [i_15] [i_16])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (short)-32761))));
            }
            /* LoopSeq 2 */
            for (int i_17 = 0; i_17 < 20; i_17 += 2) 
            {
                arr_59 [17ULL] [i_15] = ((/* implicit */unsigned int) min(((short)-32749), ((short)3584)));
                var_44 += ((/* implicit */int) (!(((/* implicit */_Bool) (short)32747))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_45 ^= ((/* implicit */int) min((min((arr_15 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_18]), (arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_15]))), (((/* implicit */unsigned short) min(((signed char)-1), (var_10))))));
                arr_62 [i_0] [i_0] [i_18] = ((/* implicit */signed char) var_3);
                var_46 = ((/* implicit */unsigned char) ((((long long int) (signed char)1)) / (6639395657957040082LL)));
            }
        }
        var_47 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (arr_53 [i_0 + 1] [i_0])))) ? (((((/* implicit */_Bool) (+(arr_17 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63993))))) : (var_6))) : (((/* implicit */int) min((var_10), (arr_48 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]))))));
    }
    var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) 562949953421311LL))));
}
