/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248
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
    var_13 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_6)), (min((max((6738784956744951467ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) var_6))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_11 [i_0 - 2] [i_1 - 1] [(signed char)11] [(signed char)11] [i_2] [i_3] = ((/* implicit */_Bool) ((arr_10 [i_0] [i_1 - 1] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) ((short) -2758641206846803437LL))))));
                        arr_12 [i_2] = ((/* implicit */unsigned char) ((var_3) / (2758641206846803436LL)));
                        var_14 = ((/* implicit */unsigned int) 2758641206846803427LL);
                        arr_13 [i_0] [(_Bool)1] [i_0] [i_2] = ((/* implicit */_Bool) (+(-2758641206846803437LL)));
                        var_15 = ((/* implicit */short) var_12);
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) == (((/* implicit */int) arr_7 [i_2] [i_1 + 4] [i_4 + 1])))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 4) 
                        {
                            arr_22 [i_0] [i_0] [i_2] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((((+(arr_5 [i_5 + 2] [i_1 + 1]))) + (2147483647))) << (((((/* implicit */_Bool) arr_15 [i_5 + 2] [i_4] [i_2] [i_0 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-2758641206846803424LL)))))) > (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4185052479184317386ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)59))) : (var_3)))), (((((/* implicit */_Bool) 7211627988093170100LL)) ? (((/* implicit */unsigned long long int) arr_16 [i_2] [13])) : (var_4)))))));
                            var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6137707270986184764LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) var_6))))) ? (min((arr_17 [i_1 + 3] [i_1 + 2] [i_1] [i_1 - 1]), (var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_4 + 1])))))));
                            arr_23 [i_2] [i_0] [i_0 + 4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 4])) ? (((((/* implicit */unsigned long long int) (+(arr_8 [i_2] [i_4 + 1])))) & (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1 - 1] [i_2])) ? ((~(-7452486768009585648LL))) : (arr_2 [i_0]))))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_2))) | (((/* implicit */int) ((signed char) (_Bool)0)))))) / (14010013033966707343ULL)));
                            var_19 = ((/* implicit */short) arr_17 [(signed char)3] [i_1] [i_1] [16ULL]);
                        }
                        for (signed char i_6 = 1; i_6 < 18; i_6 += 4) 
                        {
                            arr_27 [i_2] = ((/* implicit */signed char) arr_18 [i_0 - 2] [i_1 + 4] [i_2] [i_2] [i_4] [i_2]);
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (+(18446744073709551611ULL))))));
                            arr_28 [i_0 - 1] [i_2] [i_2] [i_4] [i_4] [i_6] [18LL] = var_5;
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (-1676885636)))) ? (((/* implicit */int) ((((/* implicit */int) max((arr_6 [i_2] [i_2] [i_6]), (var_12)))) <= ((~(((/* implicit */int) var_0))))))) : (((/* implicit */int) ((((/* implicit */_Bool) -2758641206846803410LL)) && (((/* implicit */_Bool) -2758641206846803410LL)))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_32 [i_2] [i_2] [i_2] [i_4 + 1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_1])) || (((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned char)122), (((/* implicit */unsigned char) var_10))))))))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (signed char)122))));
                            var_23 = ((/* implicit */unsigned char) var_7);
                            var_24 = ((/* implicit */unsigned int) min((var_24), ((-(arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                        arr_33 [i_0] [i_1] [i_0] [i_2] [i_4] [i_1] &= ((/* implicit */signed char) ((((/* implicit */long long int) arr_15 [i_0 + 4] [i_1 + 4] [i_4 + 1] [i_4])) == (arr_10 [5U] [5U] [5U])));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -2758641206846803437LL)) ^ (11ULL)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 1) 
                        {
                            var_26 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) var_10)), (2265152674U)))))) / ((+(min((((/* implicit */unsigned long long int) var_7)), (arr_14 [i_4] [i_2] [i_1] [i_0 + 1])))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */int) var_8)) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_2 [i_2])))) ? (((((/* implicit */int) var_9)) | (((/* implicit */int) arr_20 [i_0] [i_1 + 1] [i_8] [i_8] [i_8] [i_1 + 1] [i_8])))) : (min((((/* implicit */int) (signed char)-75)), (var_1)))))));
                            arr_36 [i_1 + 1] [i_2] = ((/* implicit */unsigned long long int) ((((unsigned long long int) min((((/* implicit */unsigned char) (signed char)52)), (var_9)))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))));
                        }
                    }
                    for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 2) 
                    {
                        var_28 = ((/* implicit */long long int) arr_15 [i_0 + 4] [i_1] [i_2] [4U]);
                        var_29 = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_6 [i_0 + 1] [i_2] [i_1 - 1])))), (var_1)));
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            arr_42 [i_9] [i_2] [i_2] [i_0 + 3] = ((/* implicit */unsigned long long int) var_9);
                            var_30 = ((/* implicit */unsigned int) ((18283246949148567934ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                            var_31 = ((((/* implicit */_Bool) 2889995095U)) ? (((7452486768009585650LL) - (((/* implicit */long long int) (-(((/* implicit */int) (short)3306))))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [18ULL] [i_2] [i_1 - 1]))))));
                            arr_43 [i_0] [i_0] [i_2] [i_9] [i_2] [i_2] [i_1 + 3] = ((/* implicit */signed char) arr_8 [i_2] [i_9]);
                        }
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((2471899915U) - (2471899915U)))))), (arr_9 [i_0] [i_1 + 2] [i_2] [i_9])))) ^ (min((min((((/* implicit */long long int) var_10)), (-7452486768009585648LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (var_1)))))))))));
                        var_33 = ((/* implicit */int) var_10);
                    }
                    arr_44 [i_0] [i_2] [i_2] = ((/* implicit */short) max((((unsigned short) arr_40 [i_0] [i_0 + 1])), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)93))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_12))))))))));
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_2) ? (((3401328225824923546ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((max((((/* implicit */unsigned char) var_11)), ((unsigned char)15))), (((/* implicit */unsigned char) var_11)))))) : (((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (var_3))))))));
    var_35 = ((/* implicit */unsigned char) min((var_35), (var_9)));
}
