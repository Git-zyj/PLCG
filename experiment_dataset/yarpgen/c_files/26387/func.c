/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26387
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((6194865287026175056ULL) | (((/* implicit */unsigned long long int) -1528508241638804450LL))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [9LL])) || (((/* implicit */_Bool) (unsigned short)56868)))))))) / (max((2251799813423104ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)49152)), (1528508241638804436LL)));
        var_20 *= ((/* implicit */unsigned char) (-(arr_3 [i_1])));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (int i_3 = 3; i_3 < 18; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((unsigned char) ((((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_2] [i_3])) : (2013265920))) ^ (((/* implicit */int) (_Bool)0)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        arr_13 [i_1] [i_2] [i_3 - 1] [i_2] = ((/* implicit */unsigned long long int) arr_8 [i_3 - 1]);
                        var_22 ^= ((/* implicit */long long int) ((_Bool) arr_11 [i_1] [(short)17] [i_1] [i_3 - 2] [i_4]));
                        arr_14 [i_1] [i_2] [i_3] [i_4] [15] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_3 - 3] [i_3 - 3] [i_3 - 1] [i_3 - 2]))) + (18444492273896128494ULL)));
                        arr_15 [i_1] [i_2] [10U] [i_4] [18LL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)113)) + (((/* implicit */int) (_Bool)0))))) <= (14296495706903598634ULL)));
                        arr_16 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */int) arr_10 [i_1] [i_2] [i_2] [i_1])) + (0))) : (((/* implicit */int) var_12))));
                    }
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
    {
        arr_20 [i_5] [15U] = ((/* implicit */unsigned long long int) (~(((unsigned int) arr_18 [i_5]))));
        arr_21 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_12 [i_5] [i_5] [i_5])))) ? (((((/* implicit */_Bool) arr_11 [i_5] [(unsigned short)4] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) arr_18 [2LL])) : (arr_9 [i_5] [i_5]))) : (((4150248366805952982ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        for (unsigned int i_7 = 1; i_7 < 20; i_7 += 3) 
        {
            for (unsigned char i_8 = 3; i_8 < 19; i_8 += 3) 
            {
                {
                    var_23 = ((/* implicit */_Bool) max(((+(((/* implicit */int) ((_Bool) (short)31))))), (((((/* implicit */int) arr_24 [i_8 + 2] [i_8 + 2])) & ((+(((/* implicit */int) (unsigned short)2))))))));
                    arr_28 [i_8] [i_7] [i_8] &= ((/* implicit */long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) arr_25 [i_8] [i_8 + 2] [i_8 - 3]))));
                    /* LoopSeq 1 */
                    for (short i_9 = 3; i_9 < 20; i_9 += 1) 
                    {
                        var_24 ^= ((/* implicit */unsigned char) var_4);
                        arr_33 [i_6] [i_8] [i_6] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)12)), (arr_25 [i_6] [i_7] [i_6])))))))));
                    }
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_7 - 1] [i_7 - 1]))))) ? (((((/* implicit */int) ((_Bool) arr_31 [(short)15] [i_7 - 1] [i_7] [i_7] [i_7] [i_7]))) * (((/* implicit */int) ((2251799813423097ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6] [i_7 + 1])))))))) : (((/* implicit */int) arr_22 [i_8 - 3]))));
                    var_26 += max((((/* implicit */int) ((unsigned short) (unsigned char)1))), (min((((((/* implicit */int) arr_31 [i_8] [i_8] [i_7] [(unsigned char)14] [2LL] [i_6])) ^ (((/* implicit */int) var_9)))), (((/* implicit */int) var_2)))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) ((unsigned short) var_0));
}
