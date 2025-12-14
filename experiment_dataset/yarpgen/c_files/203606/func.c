/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203606
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((var_10) | (((/* implicit */unsigned long long int) var_13))))) ? (((((/* implicit */int) var_14)) + (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) var_14)))))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~((((-(arr_2 [i_0]))) / (((((/* implicit */_Bool) arr_1 [3LL])) ? (arr_0 [i_0] [2LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
        var_21 = ((/* implicit */int) arr_1 [(unsigned short)9]);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */unsigned long long int) 1661722900)) : (arr_0 [i_0] [i_0]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))) - (arr_0 [i_0] [i_0])))));
        var_22 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)8865)) >= ((-(-1661722901))))) ? (((/* implicit */unsigned long long int) ((int) 1661722915))) : (var_0)));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_23 *= ((/* implicit */_Bool) 5649561408325056375LL);
        var_24 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_1 [i_1]) : (var_2)))) ? ((~(((/* implicit */int) (signed char)96)))) : (1661722894)))) && (((/* implicit */_Bool) (~(var_2))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_5 = 1; i_5 < 18; i_5 += 2) 
                        {
                            arr_15 [i_3] [i_1] [i_3] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_9)))) ? ((-(var_7))) : (((/* implicit */unsigned long long int) 2947149635469728564LL))));
                            var_25 += ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4] [i_5 + 1] [i_4])) ? (((/* implicit */unsigned long long int) arr_11 [i_4] [i_1] [i_1] [i_1])) : (arr_14 [i_4 - 2]));
                            var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_9)))));
                            arr_16 [i_3] [i_1] [i_1] [i_1] [i_1] = arr_11 [i_4] [i_3] [i_3] [i_1];
                        }
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_27 |= arr_5 [i_1];
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) arr_10 [i_4]))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 20; i_7 += 1) 
                        {
                            arr_22 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_17))))) ? (min((min((arr_4 [i_1] [i_3]), (((/* implicit */long long int) var_2)))), (((var_5) ? (2947149635469728568LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))))))) : (((/* implicit */long long int) 2559657267U))));
                            arr_23 [i_1] [i_3] [i_3] [i_4] [i_7] [i_7] = ((/* implicit */_Bool) (-(arr_1 [(_Bool)1])));
                        }
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_7 [i_1] [i_3] [i_4]))) < (((((/* implicit */_Bool) 1661722910)) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) var_15)))))))) ^ (arr_5 [i_1])));
                        arr_24 [i_1] [i_2] [i_1] [i_4] |= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_15))) ? (arr_14 [i_4 + 1]) : (((/* implicit */unsigned long long int) ((long long int) 1661722894))))));
                    }
                } 
            } 
        } 
        arr_25 [i_1] = ((/* implicit */unsigned int) (~(arr_14 [i_1])));
    }
    for (long long int i_8 = 3; i_8 < 12; i_8 += 2) 
    {
        arr_29 [i_8] = arr_17 [i_8 - 2] [i_8] [i_8] [i_8] [i_8 - 3] [i_8];
        arr_30 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned int) arr_14 [i_8]))) ? (min((4194303LL), (2947149635469728557LL))) : (min((arr_18 [20U]), (((/* implicit */long long int) arr_12 [i_8] [i_8] [1] [i_8] [i_8 - 1])))))) < (((/* implicit */long long int) 1661722915))));
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 776535013)) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(_Bool)1]))) * (var_10)))));
    }
}
