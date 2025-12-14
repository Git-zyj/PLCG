/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242493
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
    var_10 = ((/* implicit */unsigned int) (-(((max((((/* implicit */int) var_9)), (var_0))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)27470)))) - (27445)))))));
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) (unsigned char)63))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) + (2198754820096ULL)))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15294))) & ((~(2198754820115ULL)))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            var_13 = ((((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned char)115), (((/* implicit */unsigned char) var_9))))), (((((/* implicit */_Bool) arr_7 [(short)3] [(short)3] [i_4])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_4 [i_0]))))))) ? ((((~(18446741874954731518ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65521)) / (((/* implicit */int) (short)15293))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_3])) <= (arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0]))))))));
                            var_14 = ((/* implicit */int) arr_4 [(unsigned short)5]);
                        }
                        arr_13 [8U] [i_1 + 3] [i_1 + 3] [i_1 + 3] = ((/* implicit */unsigned long long int) max((arr_10 [i_0] [i_1 + 3] [i_2] [i_3]), (((/* implicit */unsigned int) -1768229582))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (int i_6 = 2; i_6 < 14; i_6 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_10 [i_0] [(unsigned short)2] [(unsigned short)2] [i_6 + 1]) << ((((-(((/* implicit */int) (short)3457)))) + (3484)))))) % (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                arr_25 [i_0] [4] [i_0] [(short)8] [i_8] [i_0] [(signed char)1] = min(((~(((((/* implicit */_Bool) arr_17 [0] [6U])) ? (584247276U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) ((((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_17 [i_6 - 1] [(_Bool)1])))) + (2147483647))) >> (((arr_18 [i_5] [(signed char)0] [i_7] [i_8]) - (8610214534789615800LL)))))));
                                arr_26 [1] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */int) ((((/* implicit */int) arr_1 [i_7])) <= (((/* implicit */int) (short)32739))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))), ((_Bool)1)));
                            }
                        } 
                    } 
                    var_16 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_17 [i_5] [i_6 - 2])), (((((((/* implicit */_Bool) 2198754820115ULL)) ? (2198754820103ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [1] [i_6]))))) - (min((arr_9 [i_5] [i_6 - 2] [i_5] [i_5] [i_5] [i_0]), (((/* implicit */unsigned long long int) var_3))))))));
                    var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -937233737442053733LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))), (((17620212585542294794ULL) >> (((arr_11 [i_0] [i_0] [i_6] [i_6] [i_0] [i_5]) - (6710244211833545549ULL)))))))) ? (min((arr_23 [(unsigned short)5] [i_6] [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) 4689139127009259639LL)))) : ((+((~(17620212585542294794ULL)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
            {
                arr_31 [2LL] [i_10] [i_9] = ((/* implicit */short) max((((/* implicit */int) (unsigned char)192)), (((((/* implicit */_Bool) max((2389276323U), (((/* implicit */unsigned int) -1768229582))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_10 [i_0] [i_10] [i_10] [i_0])) <= (arr_9 [i_0] [(unsigned char)8] [i_0] [9U] [i_0] [i_10]))))))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_6))));
                arr_32 [i_9] = ((((/* implicit */_Bool) ((min((((/* implicit */long long int) var_0)), (6LL))) / (((/* implicit */long long int) max((arr_19 [i_0] [i_9] [i_0] [i_10]), (((/* implicit */unsigned int) (signed char)109)))))))) ? ((-(((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) (short)-8816)) : (-522585685)))))));
                arr_33 [i_0] [i_9] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_30 [i_0] [i_9] [i_10])), (max(((-(var_7))), (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0])) || (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [2] [i_9])))))))));
            }
            for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
            {
                arr_38 [i_0] [i_0] [i_9] [i_9] = max(((signed char)-107), (arr_21 [i_11] [i_9] [i_0] [i_0]));
                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_9])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_36 [i_11])) : (arr_23 [i_0] [i_0] [i_11] [i_11] [i_11]))) : (((/* implicit */unsigned long long int) ((arr_14 [i_0] [i_0]) - (256371991)))))) > (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) arr_12 [i_9] [i_9])), (2543446039U))) % (((/* implicit */unsigned int) 488658799)))))));
                arr_39 [i_9] [(unsigned char)13] [i_9] = ((/* implicit */unsigned char) (~(arr_34 [i_11] [i_9] [i_11] [i_0])));
            }
            for (signed char i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                arr_44 [i_9] [i_9] [i_0] = ((/* implicit */unsigned int) -522585685);
                arr_45 [i_0] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
                arr_46 [i_9] = ((/* implicit */signed char) arr_10 [i_0] [i_0] [(unsigned char)11] [i_12]);
                var_20 = ((/* implicit */unsigned int) arr_12 [i_0] [i_9]);
            }
            for (unsigned int i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                var_21 = ((/* implicit */int) var_6);
                arr_50 [i_9] = ((/* implicit */unsigned char) arr_49 [14U] [i_13] [i_13] [i_9]);
                var_22 = ((/* implicit */int) 3857899255815362704LL);
            }
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                for (unsigned int i_15 = 0; i_15 < 15; i_15 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) arr_27 [i_9]);
                        /* LoopSeq 4 */
                        for (int i_16 = 0; i_16 < 15; i_16 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)246)) == (2147483647)));
                            var_25 = ((/* implicit */unsigned long long int) (short)-32739);
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) max(((-((-(((/* implicit */int) arr_22 [i_9] [i_14] [i_16])))))), (((/* implicit */int) (signed char)-115)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_17 = 4; i_17 < 11; i_17 += 4) /* same iter space */
                        {
                            arr_62 [i_0] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_15] [3U] [i_14] [i_15])) || (((/* implicit */_Bool) arr_40 [i_0] [i_9]))))) + ((((_Bool)0) ? (var_8) : (((/* implicit */int) arr_22 [i_9] [i_14] [4ULL]))))));
                            var_27 = ((/* implicit */unsigned long long int) arr_1 [i_14]);
                        }
                        for (unsigned int i_18 = 4; i_18 < 11; i_18 += 4) /* same iter space */
                        {
                            arr_65 [7ULL] [i_9] [i_14] [i_9] [i_9] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_7 [i_15] [i_15] [i_9])), ((-(((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_18 + 1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_9] [i_9] [12LL] [i_9])))))))));
                            var_28 -= (+(((((/* implicit */_Bool) ((arr_53 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_21 [i_0] [i_9] [i_9] [5U])) : (((/* implicit */int) arr_41 [i_9] [i_14] [i_15] [i_15]))))) ? (((/* implicit */unsigned long long int) min((256371991), (arr_36 [i_0])))) : (arr_28 [i_9] [i_14] [i_0]))));
                        }
                        for (unsigned int i_19 = 4; i_19 < 11; i_19 += 4) /* same iter space */
                        {
                            arr_68 [i_9] [14ULL] [i_9] = ((((/* implicit */_Bool) (~(((((((/* implicit */int) arr_37 [i_9] [i_9])) + (2147483647))) << (((/* implicit */int) arr_42 [i_0]))))))) ? (((/* implicit */unsigned int) -256371977)) : (min((min((((/* implicit */unsigned int) var_7)), (134152192U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))))));
                            var_29 -= var_1;
                            arr_69 [i_0] [i_9] [i_14] [i_15] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_2 [i_0])))) || (((/* implicit */_Bool) min((13578360895666620094ULL), (((((/* implicit */_Bool) -8531604102297896395LL)) ? (7385227939253525609ULL) : (((/* implicit */unsigned long long int) -1768229582)))))))));
                            var_30 = ((/* implicit */unsigned short) (!((_Bool)1)));
                            arr_70 [7LL] [i_15] [i_15] [i_15] [i_15] [i_15] [i_9] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -522585695)), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((1768229581) - (1768229557)))))), (max((((/* implicit */unsigned long long int) arr_66 [10ULL] [i_9] [i_9] [i_15] [i_19])), (arr_61 [i_9] [i_9] [i_9] [i_14] [i_9] [i_9] [i_0])))))));
                        }
                        arr_71 [i_9] = ((/* implicit */short) 4215469699U);
                    }
                } 
            } 
        }
    }
    var_31 &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) var_3))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 363048357156902745LL))))), (min((((/* implicit */unsigned long long int) 2467218111U)), (11061516134456026011ULL)))))));
}
