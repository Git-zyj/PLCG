/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26879
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_8 [i_3 + 1] [i_1] [i_2] [i_3 + 1] [i_1] [i_0]))) ? (((/* implicit */unsigned long long int) max((-4087844379157050174LL), (((/* implicit */long long int) (_Bool)1))))) : (((arr_8 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 2] [(_Bool)1]) << (((((long long int) arr_7 [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) + (149LL)))))));
                                arr_11 [i_0] [i_0] [i_0] [i_3 - 1] = ((/* implicit */int) (((-(((/* implicit */int) (unsigned short)54549)))) >= (((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (4087844379157050175LL)))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [(signed char)1] [i_2] [i_2] [i_2] [i_2]))) : (arr_0 [i_2]))) : (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_9)))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                    {
                        var_17 *= ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (4013394401186485156LL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_11)))))))));
                        var_18 &= ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)9027))) & (35888059530608640LL)));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */int) arr_5 [i_0] [i_0]);
                        var_20 = ((/* implicit */unsigned short) ((arr_16 [i_0] [i_1] [i_2] [i_2] [i_6]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_16 [i_0] [i_1] [i_2] [(short)10] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2] [i_6])))))))));
                        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_0 [i_2]))) | (((/* implicit */unsigned long long int) ((max((((/* implicit */int) var_3)), (-1060441604))) & (((/* implicit */int) var_9)))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-1)))))));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) var_0)))))))));
                        }
                        arr_23 [i_0] [i_2] [i_0] [(short)6] [i_2] [i_7] &= ((/* implicit */_Bool) max((4087844379157050175LL), (((/* implicit */long long int) 2011987262U))));
                        var_24 = ((/* implicit */short) ((((((var_12) ? (4087844379157050167LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0]))))) >= (-3704512985121933828LL))) ? (max((((/* implicit */int) (unsigned short)41714)), ((~(1073725440))))) : (((/* implicit */int) ((signed char) (-(((/* implicit */int) var_0))))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) -1073725419))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_1 [i_0])))) ? (((/* implicit */int) (((_Bool)1) && ((_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                        arr_27 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (var_8)))) ? ((-(var_5))) : (arr_21 [i_0] [i_0] [i_1] [i_0] [i_9])))) - (arr_1 [i_0])));
                        arr_28 [i_0] [i_0] [i_0] [i_1] [i_2] [i_9] |= ((/* implicit */unsigned long long int) arr_1 [i_1]);
                        var_25 = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_26 = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((6915564121580292274ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1)))))), (((long long int) arr_31 [i_0] [i_0] [i_2] [i_10] [i_2]))))) ? (966254318) : ((-(((((/* implicit */_Bool) -4087844379157050167LL)) ? (((/* implicit */int) (unsigned short)23821)) : (-966254334))))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_2] [i_10])) ? (410067201U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)1] [i_1] [i_2] [i_10])) && (((/* implicit */_Bool) 4087844379157050158LL))))))));
                        arr_32 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned char) (short)-17866))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_10] [5] [i_2] [i_10]))) : (((var_8) / (((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])))))) * ((-(arr_18 [i_0])))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */short) min((var_28), (var_4)));
    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */int) ((signed char) var_0))) < ((-((-(((/* implicit */int) (short)-12438)))))))))));
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (1613631652))))))) : (((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        arr_35 [i_11] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
        var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) min((-2738686621931554533LL), (((/* implicit */long long int) (short)14298))))) ? (((((/* implicit */_Bool) arr_34 [i_11] [i_11])) ? (((/* implicit */int) (short)3099)) : (((/* implicit */int) (short)5573)))) : (((((/* implicit */_Bool) (short)-3592)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))) <= (((/* implicit */int) var_7))));
        var_32 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)41714)) <= (((/* implicit */int) arr_34 [i_11 - 1] [i_11 - 1])))))) <= (((unsigned long long int) arr_34 [i_11 - 1] [i_11 - 1]))));
        arr_36 [i_11] = ((/* implicit */_Bool) var_4);
        var_33 *= ((/* implicit */unsigned short) ((((((/* implicit */int) min((arr_33 [i_11 - 1]), (arr_33 [i_11 - 1])))) + (2147483647))) << (((((((/* implicit */int) arr_33 [i_11 - 1])) + (53))) - (28)))));
    }
}
