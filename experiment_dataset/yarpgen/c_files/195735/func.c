/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195735
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
    var_13 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_5)) % (((long long int) (-(((/* implicit */int) (short)8192)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) 2203659839U)), (((((/* implicit */_Bool) (signed char)23)) ? (-444002282328674096LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned long long int) (+(arr_6 [i_0] [i_2] [i_2])));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)12748)) || (((/* implicit */_Bool) arr_1 [i_1])))))));
                    var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2])) ? (arr_6 [i_0] [i_1] [i_2]) : (arr_6 [i_2] [i_1] [i_0])))), (min((2113169745784566052ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]))))));
                    var_16 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_8 [i_0] [i_1] [i_2] [i_2])))) ? (((((/* implicit */_Bool) 16333574327924985590ULL)) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_0)) ? (arr_8 [i_0] [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
                    var_17 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16946))) != (arr_8 [i_2] [i_1] [i_2] [i_0]))))) != (min((arr_8 [i_2] [i_2] [i_2] [i_2]), (arr_8 [i_2] [i_1] [i_1] [i_0]))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 574418425427474796LL)) ? (((/* implicit */int) ((signed char) 6183506717462202755LL))) : (((/* implicit */int) ((((/* implicit */_Bool) 7334924831970927067ULL)) && (((/* implicit */_Bool) -9223372036854775807LL)))))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        arr_14 [i_4 + 2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((9182784631341112891LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4 - 1] [i_4] [i_4 + 2])))));
                        arr_15 [i_4] [i_4] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_4 [i_4 + 1] [i_4 - 1]));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (signed char)78);
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775779LL)) ? (((/* implicit */int) arr_19 [i_6 + 1] [i_6 + 2] [i_6 - 2] [i_6 - 2] [i_0])) : (((/* implicit */int) arr_19 [i_6] [i_6 + 1] [i_6 + 2] [i_6 - 2] [i_5]))));
                                arr_20 [i_6] [i_5] [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) ((int) 2251799813685247LL));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_8);
                                var_21 += ((/* implicit */short) arr_3 [i_0]);
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] = ((/* implicit */long long int) arr_10 [i_3] [i_3] [i_3] [i_3]);
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)3261)) : (((/* implicit */int) (signed char)109))))))) | (1400468648016893962ULL)));
                    var_23 = ((/* implicit */signed char) var_8);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((-2769394353959262658LL) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((arr_3 [i_7]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_7] [i_8] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_7] [i_8]))) : (0ULL)))));
                                arr_30 [i_8] [i_1] [i_1] [i_7] [i_1] [i_8] = ((/* implicit */signed char) min((((/* implicit */int) (signed char)59)), (max(((-(((/* implicit */int) (unsigned short)25946)))), (((/* implicit */int) arr_11 [i_0] [i_1] [i_0]))))));
                                var_25 = min((-576460752303423488LL), (((/* implicit */long long int) var_12)));
                                var_26 = ((((/* implicit */_Bool) arr_27 [i_9] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_7] [i_1]))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_1])), (var_0)))) ? (((/* implicit */unsigned long long int) var_1)) : (var_7))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        for (int i_11 = 1; i_11 < 12; i_11 += 4) 
                        {
                            {
                                var_27 ^= var_10;
                                var_28 = ((/* implicit */unsigned char) 2113169745784566026ULL);
                                var_29 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-85)), (var_3))))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_6)) : (8437564595195248323ULL))))))));
                                var_30 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) << (((2060390127304640021LL) - (2060390127304640013LL)))))) : (min((var_7), (((/* implicit */unsigned long long int) 8388607LL))))))));
                                var_31 = ((/* implicit */unsigned long long int) max((var_31), (min((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0])) ? (3583585721101024894ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)39700)) ? (var_8) : (((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) var_8)) / (var_1))), (((/* implicit */long long int) ((1400468648016893958ULL) != (26ULL)))))))))));
                            }
                        } 
                    } 
                }
                var_32 = ((/* implicit */signed char) arr_36 [i_0] [i_0] [i_0]);
            }
        } 
    } 
}
