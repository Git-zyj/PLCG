/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227356
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)107)), (var_4)))) ? (((/* implicit */long long int) ((-779585028) % (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) (short)16380)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) (+(779585028)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 779585027)) ? (var_4) : (779585027)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_4)) : (3547121069558103247ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) % (((((/* implicit */_Bool) -1418415334019854519LL)) ? (((/* implicit */long long int) 2820661814U)) : (1554150113703890059LL))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-8198)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))) : (2304289364867317695LL)));
                    var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_0]))));
                    arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((short) arr_9 [i_0] [i_2] [i_2] [i_2]));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned short) var_3);
    }
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        var_14 = (+(-1418415334019854519LL));
        /* LoopNest 2 */
        for (long long int i_4 = 2; i_4 < 9; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                        {
                            arr_24 [i_3] [i_4] [i_5] [4] [i_4] = ((_Bool) ((int) ((((/* implicit */_Bool) 290045379U)) ? (10935708461463141706ULL) : (((/* implicit */unsigned long long int) -1831852690)))));
                            var_15 = ((/* implicit */int) var_7);
                            var_16 = ((/* implicit */long long int) min((((((/* implicit */int) arr_8 [i_4] [(short)0] [i_4 + 1])) * (((arr_23 [i_3] [i_4] [(unsigned char)5] [i_6] [i_7]) % (arr_23 [i_3] [i_4 - 2] [i_5] [i_6] [i_7]))))), (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_4]))))), (arr_4 [i_4 + 1]))))));
                            arr_25 [i_3] [i_4] [i_4] [i_6] [i_7] [i_7] [(signed char)5] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_2 [i_4 - 2])) ? (((1201631727) % (-779585027))) : (((/* implicit */int) var_7))))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */int) (signed char)-64);
                            arr_30 [i_4] [i_4] [i_5] [i_5] [i_5] = arr_21 [i_8];
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_6 [i_3] [i_3] [i_3]) - (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3]))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) arr_3 [i_3] [i_8] [i_5])))))))) ? (((((/* implicit */_Bool) ((arr_28 [i_3] [(unsigned char)8] [i_5] [i_4] [i_8] [i_8] [i_8]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_27 [6LL] [i_3] [i_3] [i_3] [6LL] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (4194919072971892685LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_4]))))) : (((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)50202))))) + (arr_21 [i_3])))));
                        }
                        var_19 = ((/* implicit */int) arr_22 [i_6] [i_5] [i_4] [i_3] [i_3]);
                    }
                    for (int i_9 = 4; i_9 < 6; i_9 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_3] [i_4] [i_5] [i_9])) ? (((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_27 [i_3] [i_4] [(unsigned short)3] [i_5] [i_3] [i_4 - 2])), (arr_29 [i_3] [i_3] [i_3] [i_4] [i_3] [i_3]))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(short)2])))))) : (min((((-5503667597852034629LL) % (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_4] [i_4]))))), (((/* implicit */long long int) ((signed char) arr_2 [i_3])))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_5)) % (((/* implicit */int) (unsigned char)219))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_18 [i_5] [i_5]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139)))))))))) : (16477353505144738710ULL)));
                        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((-(var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_3])) ? (((/* implicit */int) arr_17 [5LL] [i_4] [i_4])) : (((/* implicit */int) arr_17 [i_3] [i_5] [i_4]))))))))));
                    }
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13272)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_4 - 2] [i_4] [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 2]))) : (arr_6 [i_4 - 2] [i_4] [i_4 - 2])));
                        var_24 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned char)37))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_11 = 2; i_11 < 9; i_11 += 2) 
                    {
                        var_25 -= ((/* implicit */unsigned char) ((unsigned int) (short)32512));
                        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_2 [i_4 + 1])), (arr_36 [i_3] [i_4] [0]))))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_33 [i_3] [i_3] [i_3] [i_4] [i_3]), (((/* implicit */unsigned char) arr_2 [i_3]))))) % (((((/* implicit */_Bool) arr_17 [i_11 - 1] [i_4] [i_4])) ? (((/* implicit */int) arr_16 [i_11 + 1] [i_4])) : (((/* implicit */int) arr_16 [i_11 - 2] [i_4]))))));
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned int) arr_16 [i_4 + 1] [i_4]);
                            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_39 [i_4 - 1] [i_4 - 1] [i_12] [i_4] [i_12]) ? (((/* implicit */int) arr_39 [i_4 - 1] [i_11 - 2] [i_11] [i_4] [i_11 + 1])) : (((/* implicit */int) arr_39 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4] [(unsigned char)4])))))));
                        }
                        /* vectorizable */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned int) -2860387371882617445LL);
                            var_31 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_28 [i_3] [i_4] [i_13] [i_4] [i_13] [i_3] [(unsigned char)4])) ? (arr_12 [i_3]) : (((/* implicit */int) var_1)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 4; i_14 < 8; i_14 += 1) 
                    {
                        for (signed char i_15 = 0; i_15 < 10; i_15 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1148762672864263409LL))))))))));
                                var_33 = ((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) arr_38 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_5] [i_4]))) : (arr_48 [i_4] [i_4]))) % (((((/* implicit */_Bool) -8510353228085885171LL)) ? (arr_42 [i_15] [i_4] [i_5] [i_5] [i_4] [i_4] [i_3]) : (((/* implicit */long long int) arr_15 [i_4]))))))));
                                var_34 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_44 [i_14 + 2] [i_14] [i_14] [i_14 - 4] [i_14 + 1])) % (((/* implicit */int) arr_44 [i_14 - 3] [i_14] [i_14 - 3] [i_14 - 2] [i_14 - 4]))))) % ((-(var_8)))));
                                var_35 = ((/* implicit */unsigned char) var_4);
                                arr_50 [i_3] [i_4] [i_5] [i_14] [9ULL] = ((/* implicit */int) ((signed char) arr_3 [i_15] [i_3] [i_3]));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4027488219123315752LL)) ? (var_4) : (((/* implicit */int) var_7)))) % (((/* implicit */int) var_7))))) ? (((((/* implicit */int) var_0)) % (((/* implicit */int) var_3)))) : (((/* implicit */int) ((_Bool) ((unsigned char) var_2))))));
}
