/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210712
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
    var_11 ^= ((/* implicit */long long int) ((unsigned char) var_8));
    var_12 = ((/* implicit */short) var_10);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        arr_4 [i_0 + 2] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_2)) ? (((2302105534U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3)))))), (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2]))) : (var_0)))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_13 &= ((/* implicit */unsigned char) ((unsigned int) (+(-8132157374138698568LL))));
                        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (var_0)))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 23; i_4 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) * (var_0))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(6497041719534946150LL)))) ? (((6497041719534946141LL) >> (((2264608778U) - (2264608745U))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (min((6497041719534946141LL), (arr_9 [i_0 - 2] [i_1 - 1]))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))))))));
                        }
                    }
                } 
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_9)), (arr_9 [i_0 - 2] [i_0])));
        var_17 = var_8;
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_5]))))) ? (((/* implicit */long long int) (-(3524206977U)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5]))) - (6497041719534946130LL)))));
        arr_19 [i_5] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_5] [i_5])) ? (((((/* implicit */_Bool) arr_15 [(signed char)5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)62)))) : (((/* implicit */int) (_Bool)1)))));
        var_19 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_3 [i_5])) ? (-6497041719534946163LL) : (((/* implicit */long long int) 4196030194U)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 3; i_7 < 13; i_7 += 4) 
            {
                for (unsigned int i_8 = 2; i_8 < 13; i_8 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8 - 1])))));
                        var_21 *= ((/* implicit */unsigned char) (short)-1488);
                        var_22 += ((/* implicit */long long int) (!((_Bool)1)));
                    }
                } 
            } 
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_2 [i_5] [i_5]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1482))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-29032))))))));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1499))) : (((((/* implicit */_Bool) var_10)) ? (10599237937406478101ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1471))))))))));
            arr_28 [i_5] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [i_5] [i_5] [i_6] [i_6]))));
            arr_29 [i_5] [i_6] [i_5] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6] [i_5] [i_5] [20U]))) | (var_0)));
        }
        arr_30 [i_5] [i_5] = ((/* implicit */signed char) var_2);
    }
}
