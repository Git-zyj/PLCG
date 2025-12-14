/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37606
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
    var_15 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (+(arr_3 [i_0] [i_0])));
                arr_5 [i_1] |= ((/* implicit */unsigned char) (+(9223372036854775807LL)));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) 9223372036854775807LL))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
                {
                    var_18 = max((arr_4 [i_0] [9LL] [i_1]), (14733812770855942763ULL));
                    var_19 = ((/* implicit */unsigned char) arr_4 [(unsigned char)11] [i_1] [i_1]);
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_1 [i_2]))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) 412316860416LL))), (arr_0 [10ULL] [i_1])))) ? (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) && (((/* implicit */_Bool) arr_7 [i_0])))))) : (max((((/* implicit */unsigned long long int) arr_3 [i_0] [20ULL])), (14912200029994878308ULL))))) : (((/* implicit */unsigned long long int) -1328537311570528123LL))));
                    var_22 = ((/* implicit */long long int) (((~((+((-9223372036854775807LL - 1LL)))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)3)))))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 2) 
                {
                    var_23 ^= ((/* implicit */long long int) arr_0 [i_3 + 1] [i_3]);
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 3; i_4 < 22; i_4 += 3) 
                    {
                        arr_12 [i_0] [8LL] [8LL] [i_1] [8LL] [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_4]);
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : ((~(((/* implicit */int) arr_6 [i_0 - 2])))))))));
                        var_25 = ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) & (arr_1 [(unsigned char)5])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0]))))) : (arr_9 [i_0] [i_0]));
                        arr_13 [i_0 - 3] [i_0 + 2] [i_0] [i_0 + 1] [i_1] = ((/* implicit */unsigned long long int) (-(arr_3 [i_0] [i_0])));
                    }
                }
                for (unsigned char i_5 = 1; i_5 < 22; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                arr_21 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_4 [i_1] [i_5 + 1] [i_6 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) : (max(((+(arr_0 [i_0] [8ULL]))), (var_4)))));
                                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) 591666350675278099LL))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) (~((~(8869859148290751LL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 1; i_8 < 24; i_8 += 3) 
                    {
                        var_28 = max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (14087378512734473024ULL));
                        var_29 = (unsigned char)255;
                    }
                    var_30 = ((/* implicit */long long int) max((var_30), (arr_22 [i_0] [i_0] [0ULL] [i_1])));
                }
            }
        } 
    } 
    var_31 = max((var_11), (var_12));
    var_32 = ((/* implicit */unsigned char) 3618482092706195532ULL);
    var_33 -= 15241488225234483509ULL;
}
