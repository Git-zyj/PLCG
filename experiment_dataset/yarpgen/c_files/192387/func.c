/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192387
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) 11831865892493062273ULL))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_16 = arr_7 [i_4] [i_1] [i_3] [(unsigned short)5];
                                var_17 -= ((/* implicit */int) arr_11 [i_0] [i_1 - 2] [(unsigned short)6] [i_4] [i_0] [8ULL]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)0))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 8; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) (+(arr_9 [(signed char)5] [(signed char)5] [7ULL] [i_1] [i_6])));
                                arr_16 [(unsigned short)4] [(unsigned short)0] [(unsigned short)4] [(signed char)9] [i_1] [i_1 - 1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((signed char) arr_2 [i_0] [i_1 - 2] [i_2 - 1]))), (((unsigned long long int) arr_3 [4ULL] [i_1]))));
                                var_20 = ((/* implicit */unsigned short) (-((+(min((((/* implicit */unsigned long long int) 130560)), (6614878181216489330ULL)))))));
                                var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_6] [i_6] [i_5 + 2]))))), (11206457658484390898ULL)))) ? (((/* implicit */int) ((unsigned char) (signed char)-1))) : ((-(arr_12 [i_2 + 1] [(unsigned char)10] [(unsigned char)5] [i_5 - 3])))));
                                var_22 = ((/* implicit */unsigned short) (signed char)25);
                            }
                        } 
                    } 
                    arr_17 [i_1] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)0))))), (7407076226391798673ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_1] [i_0] [i_2]))))))))));
                    var_23 = ((/* implicit */unsigned short) (-(min((((/* implicit */int) arr_0 [i_1 + 1])), (arr_4 [i_0] [i_1 - 3] [i_2 + 1])))));
                }
            } 
        } 
        var_24 = ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [4ULL]);
        arr_18 [i_0] &= ((/* implicit */unsigned char) min((((/* implicit */int) var_13)), (((((/* implicit */int) arr_14 [(signed char)10] [i_0] [i_0])) * (((/* implicit */int) arr_14 [i_0] [(unsigned short)6] [i_0]))))));
    }
    var_25 = ((/* implicit */signed char) max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_12))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        arr_22 [(unsigned short)12] &= ((/* implicit */signed char) (-(((/* implicit */int) arr_21 [6]))));
        var_26 = ((/* implicit */signed char) max((((unsigned short) 6614878181216489343ULL)), (((/* implicit */unsigned short) arr_19 [i_7]))));
        arr_23 [0ULL] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 10650573722069379478ULL))));
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned char) min((((unsigned long long int) var_10)), (min((min((((/* implicit */unsigned long long int) arr_19 [i_7])), (6614878181216489343ULL))), (((/* implicit */unsigned long long int) arr_20 [i_7]))))));
        arr_25 [i_7] = ((/* implicit */signed char) var_9);
    }
    for (signed char i_8 = 2; i_8 < 10; i_8 += 4) 
    {
        arr_28 [i_8] [3ULL] = ((/* implicit */int) (-(15465951037925210221ULL)));
        arr_29 [(signed char)7] = ((/* implicit */signed char) max(((+(5859423091047357592ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_8])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_20 [i_8])))))));
    }
}
