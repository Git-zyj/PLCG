/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23456
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((short) min((((/* implicit */unsigned char) arr_8 [i_1 + 1] [i_1] [i_2 + 2])), (var_9)))))));
                                arr_16 [i_0] [i_1] [i_3] [i_3] [i_4] = (!((_Bool)1));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)2985))))) ? (((((/* implicit */_Bool) -21153141834866116LL)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 6928501413463732219ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)42872))))))), (6570870772436566818ULL)))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1 - 2] [i_2] = ((/* implicit */long long int) (+(((var_5) - ((-(var_13)))))));
                    arr_18 [i_0] [i_0] [i_0 - 3] [i_0 - 2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 3])))))));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_5] [16] [i_5])) >> (((((/* implicit */int) var_1)) + (144)))))) ? ((+(arr_4 [(unsigned char)9]))) : (((/* implicit */unsigned int) min((var_5), (((/* implicit */int) arr_13 [(signed char)6] [i_2] [i_1])))))))));
                        var_20 = ((/* implicit */int) var_14);
                        var_21 += ((/* implicit */unsigned int) max(((unsigned char)147), (((/* implicit */unsigned char) (signed char)69))));
                        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)16128)) ? (21153141834866116LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (((((/* implicit */_Bool) var_4)) ? (var_15) : ((+(-21153141834866117LL))))))))));
    var_24 = max((((/* implicit */long long int) (_Bool)1)), (-1394505034802788012LL));
    /* LoopNest 2 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            {
                arr_28 [i_6] [i_6] [i_7] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 6091914636327240088ULL)) ? (var_10) : (arr_4 [i_6 - 1]))), (((/* implicit */unsigned int) var_14))));
                var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) (_Bool)1)) : (-2004507279)))) ? (((/* implicit */int) var_0)) : (arr_19 [i_6] [i_6 - 1] [i_6 - 1] [i_7]))) == (((/* implicit */int) arr_14 [i_7]))));
                var_26 = var_7;
            }
        } 
    } 
}
