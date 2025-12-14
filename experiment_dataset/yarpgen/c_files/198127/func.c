/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198127
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
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_7)), (var_5)));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 19; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */signed char) arr_3 [i_1]);
                        var_17 &= ((/* implicit */short) max(((+(arr_6 [i_3 + 1] [i_1 - 2] [i_1 - 2] [i_3 + 1] [(unsigned short)8] [i_2]))), (((/* implicit */unsigned int) ((int) var_13)))));
                        var_18 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((short) 16U)))) ? (10478969139994728291ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)46), ((signed char)-47)))) && (((/* implicit */_Bool) (-(arr_2 [i_3]))))))))));
                        var_19 = ((/* implicit */signed char) (unsigned char)182);
                    }
                } 
            } 
        } 
        arr_8 [(short)19] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 8)) ? (((/* implicit */int) (short)-16245)) : (((/* implicit */int) (unsigned short)64448))))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (unsigned short i_5 = 2; i_5 < 18; i_5 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-47)) && (((/* implicit */_Bool) 5179387U))))) << (((((((/* implicit */int) var_0)) << (((var_8) + (2145871681))))) - (45031)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_11 [i_0 + 1])) ? (((/* implicit */int) arr_10 [i_5])) : (-1903931071))), (((/* implicit */int) arr_7 [i_0 + 1] [i_4] [i_4] [i_5]))))) : (min((arr_13 [i_0 + 2] [i_4] [i_5 - 1]), (((/* implicit */unsigned long long int) arr_12 [i_0 + 1]))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */signed char) arr_5 [i_0 + 2] [7]);
                        var_22 = ((/* implicit */signed char) ((unsigned short) min((7432451821826134341LL), (((/* implicit */long long int) arr_9 [i_0 + 1])))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            var_23 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_3)))));
                            var_24 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)179)) > (1903931071))) ? (((/* implicit */long long int) arr_5 [i_5 + 2] [i_5 + 2])) : (((((/* implicit */_Bool) var_5)) ? (567007537046762696LL) : (((/* implicit */long long int) arr_6 [i_0 + 1] [i_4] [i_5 - 1] [19] [i_6] [i_5]))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            var_25 = ((/* implicit */short) ((long long int) (unsigned short)64448));
                            var_26 *= ((/* implicit */_Bool) ((unsigned long long int) var_11));
                            var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_0] [i_0 + 1]))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1903931051)) ? (((/* implicit */int) arr_9 [i_0 + 2])) : (((/* implicit */int) arr_11 [i_0 + 2]))));
                            var_29 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (4250057247U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0 + 2] [i_5 + 1])))));
                        }
                        for (int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)41541)) << (((((/* implicit */int) (unsigned short)64448)) - (64445))))))));
                            var_31 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4398012956672ULL)) ? (((((/* implicit */long long int) ((/* implicit */int) var_13))) / (arr_25 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) (short)0)) << (((arr_22 [i_0 + 1] [i_4]) - (469459165U))))))));
                            var_32 = ((/* implicit */int) arr_25 [i_0]);
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1903931093)) && (((/* implicit */_Bool) arr_4 [i_8] [2]))));
                            var_34 -= ((/* implicit */long long int) (short)-22957);
                        }
                        arr_28 [i_0] [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) 44910048U)) ? (((/* implicit */int) (short)1891)) : (((/* implicit */int) (short)(-32767 - 1)))));
                        var_35 = ((arr_5 [i_0 + 1] [i_5]) - (arr_5 [i_0] [i_4]));
                    }
                    for (unsigned int i_11 = 2; i_11 < 17; i_11 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_34 [i_12] [i_11] [12ULL] = (unsigned char)77;
                            var_36 = (-(arr_2 [(signed char)18]));
                            var_37 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 5LL)) ? (-8305423317371541294LL) : (arr_27 [i_12] [i_4] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14421))) : (((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_4] [16LL]))) / (var_10))))), (((/* implicit */long long int) (-((+(((/* implicit */int) (short)-21176))))))));
                            var_38 = ((/* implicit */short) ((((/* implicit */int) var_0)) >= (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_22 [i_0] [i_11 - 1])))))));
                            var_39 += ((/* implicit */unsigned long long int) var_3);
                        }
                        /* vectorizable */
                        for (unsigned int i_13 = 2; i_13 < 19; i_13 += 1) 
                        {
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_0 - 1] [i_4] [i_4] [i_11] [15LL])) ? (44910048U) : (var_5)))) : (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16234))) : (-2719841122219085657LL)))));
                            var_41 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1] [i_5 + 2] [i_5 + 1] [i_11 - 2] [i_11 + 3]))) != (arr_20 [i_0 - 1] [i_5] [i_5 - 2])));
                            var_42 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)8))))));
                        }
                        var_43 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_33 [i_0] [i_4] [i_0] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) arr_22 [i_0] [i_4])) : (max((-1006280239566306521LL), (((/* implicit */long long int) arr_7 [i_0 + 2] [i_4] [i_5 - 2] [i_11])))))), (((/* implicit */long long int) arr_0 [i_0]))));
                        var_44 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) ((_Bool) var_9))), (var_11)))));
                        arr_37 [i_0] [i_4] [(short)6] [i_5 - 2] [(short)6] = ((/* implicit */unsigned int) arr_0 [i_11]);
                    }
                    var_45 = ((/* implicit */unsigned short) arr_20 [i_0 + 1] [i_5] [i_5]);
                }
            } 
        } 
        var_46 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((-1903931056) - (((/* implicit */int) var_1)))) / (((/* implicit */int) var_2))))) + ((+(16009627728881836822ULL)))));
        var_47 = ((((arr_27 [i_0 + 1] [i_0] [(unsigned short)17]) > (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0] [(signed char)12]))))) || (((/* implicit */_Bool) max(((signed char)11), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (short)-8)))))))));
    }
}
