/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239220
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
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((unsigned char) (signed char)(-127 - 1))), (var_4)))) : ((((-(((/* implicit */int) (short)-32766)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-114))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_17 |= ((/* implicit */unsigned char) min((max((max((var_6), (((/* implicit */unsigned int) arr_8 [i_2])))), (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) / (arr_1 [i_0]))))), (((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_13)))), ((~(((/* implicit */int) arr_7 [i_2] [i_0] [i_0])))))))));
                    var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_1 + 1]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((arr_0 [i_1 + 1]), (((/* implicit */unsigned char) var_1)))))))) : (min(((+(var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_2])))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))));
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_11))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (signed char)73))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
        arr_12 [i_3] = ((/* implicit */_Bool) (+((~(((/* implicit */int) var_8))))));
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            arr_15 [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_7))));
            var_22 = ((/* implicit */long long int) ((_Bool) arr_11 [i_3]));
        }
        for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            var_23 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    {
                        arr_23 [i_3] [i_3] [i_5] [i_6] [i_6] [i_5] = ((/* implicit */long long int) (+(arr_17 [i_3] [i_3])));
                        var_24 ^= ((/* implicit */signed char) (((_Bool)1) ? (arr_5 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3] [7] [i_7])) || (((/* implicit */_Bool) arr_5 [i_3]))))))));
                        arr_24 [i_3] [i_5] [i_6] [i_7] [(unsigned short)10] = ((/* implicit */long long int) arr_22 [i_3] [i_3] [i_6] [i_7]);
                    }
                } 
            } 
            var_25 = ((/* implicit */long long int) (signed char)110);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_26 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_2 [i_3])))) ? ((+(((/* implicit */int) (signed char)-64)))) : (((/* implicit */int) ((arr_17 [(unsigned char)1] [i_8]) >= (((/* implicit */int) arr_0 [i_3])))))));
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (signed char)-111))) & (((/* implicit */int) (short)32767))));
            /* LoopNest 2 */
            for (signed char i_9 = 2; i_9 < 11; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    {
                        var_28 = ((/* implicit */short) 4019176620321739686LL);
                        arr_32 [i_3] [i_3] [i_3] [i_9] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_27 [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-109))) : ((+(arr_5 [i_9])))));
                        var_29 += ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) arr_2 [i_8])))));
                    }
                } 
            } 
            arr_33 [(unsigned short)8] = ((/* implicit */short) (+(arr_17 [i_8] [i_3])));
        }
        var_30 += arr_29 [i_3] [i_3] [i_3] [i_3] [i_3];
    }
    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
    {
        var_31 = ((/* implicit */unsigned int) ((signed char) max(((~(((/* implicit */int) (unsigned short)4339)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
        var_32 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) -6370748386927752475LL))));
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_1)) >= (((((/* implicit */int) var_7)) / (arr_35 [i_11] [i_11])))))))));
        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) arr_35 [i_11] [i_11]))));
        var_35 *= arr_36 [i_11];
    }
}
