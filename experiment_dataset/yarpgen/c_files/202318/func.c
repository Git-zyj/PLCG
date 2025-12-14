/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202318
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)113)) >> (((var_2) + (3400079461525271433LL)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_17 += (+(((long long int) var_12)));
                                var_18 = ((/* implicit */unsigned short) var_8);
                                var_19 *= ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                                arr_12 [i_4 + 1] [i_3] [i_2] [i_4 - 1] [i_4] [i_3] [i_2] = ((/* implicit */unsigned char) ((signed char) (+(-6204214408366901467LL))));
                            }
                        } 
                    } 
                    var_20 -= ((/* implicit */unsigned char) var_14);
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (unsigned char i_6 = 1; i_6 < 14; i_6 += 2) 
            {
                for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((arr_17 [i_6 - 1] [i_6] [i_6]) < (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)46185)) & (-2025059708))))));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 6281428823616895579LL)) ? (((/* implicit */long long int) var_0)) : (-6281428823616895580LL))))) || (((/* implicit */_Bool) 3056455713U))));
    /* LoopNest 3 */
    for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            for (short i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                {
                    arr_29 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) min((((/* implicit */long long int) max(((+(((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_8] [(unsigned short)8] [i_8] [5])))))))), (max((((((/* implicit */long long int) 1040187392U)) + (-6373839190101808282LL))), (-6281428823616895580LL)))));
                    var_24 = ((/* implicit */unsigned int) (-(max((((/* implicit */long long int) (unsigned char)29)), (6373839190101808285LL)))));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_8] [i_9] [i_10] [i_9] [(unsigned char)5])) ? (((/* implicit */long long int) min(((-(var_3))), (((/* implicit */unsigned int) (short)(-32767 - 1)))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) -1817660048)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))) : (arr_19 [i_8] [i_8] [i_8] [i_8] [i_8])))), (((((/* implicit */_Bool) arr_19 [i_10] [i_10] [i_9] [i_8] [i_8])) ? (6281428823616895579LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))))));
                    var_26 = ((/* implicit */short) min((var_26), ((short)21786)));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 4; i_11 < 7; i_11 += 4) 
                    {
                        for (long long int i_12 = 2; i_12 < 10; i_12 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 6281428823616895580LL)) ? (1051833361) : (((/* implicit */int) (unsigned char)14)))), (((/* implicit */int) (unsigned char)7))));
                                var_28 = ((/* implicit */unsigned int) ((max((arr_4 [i_8] [i_8] [i_12 - 2] [i_11 + 1]), (((/* implicit */long long int) (unsigned char)101)))) << (((((((/* implicit */_Bool) (signed char)76)) ? ((~(5031155463137522679LL))) : (((((/* implicit */_Bool) -5365065109752703379LL)) ? (-6281428823616895580LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2016))))))) + (5031155463137522702LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_13 = 2; i_13 < 15; i_13 += 2) 
    {
        for (long long int i_14 = 2; i_14 < 14; i_14 += 3) 
        {
            for (signed char i_15 = 2; i_15 < 15; i_15 += 1) 
            {
                {
                    arr_44 [i_13] &= ((/* implicit */short) 2782089149U);
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 17; i_16 += 3) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 17; i_17 += 3) 
                        {
                            {
                                var_29 += ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) var_9))))) | (max((125965225239900169LL), (5365065109752703378LL)))));
                                var_30 ^= ((/* implicit */unsigned short) 11U);
                                var_31 = ((/* implicit */unsigned short) 18446744073709551607ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
