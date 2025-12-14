/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50887
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
    var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((~(var_8))) : (((/* implicit */unsigned int) (~(var_14))))))));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_9))));
    var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_0) : (var_0)))) ? ((+(((/* implicit */int) var_9)))) : ((~(((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) ((signed char) var_10))) ? (max((var_15), (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (var_15)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) max(((((~(((/* implicit */int) var_6)))) >> (((arr_0 [i_0]) - (2591617057U))))), ((+(((/* implicit */int) ((var_14) <= (((/* implicit */int) var_12)))))))));
                        arr_9 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */short) min(((+(((unsigned int) arr_5 [i_1])))), (((/* implicit */unsigned int) ((short) arr_3 [i_0] [i_1 + 1] [i_2 - 1])))));
                        arr_10 [i_0] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((var_4) << (((var_4) - (1506212851)))))), (((var_10) & (var_10)))))), ((+(arr_8 [i_3] [i_2] [i_2] [i_0])))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_2] [i_2] [i_4 - 1] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_11 [i_2 + 2] [i_1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 + 2] [i_1] [i_1 - 4]))) : (var_0)))));
                        var_20 *= ((/* implicit */signed char) ((min((((arr_1 [(_Bool)1] [i_1 + 1]) % (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) - (var_15)))))) >> (((((((/* implicit */long long int) arr_0 [i_1 - 3])) ^ (arr_12 [0U] [i_1 - 1] [i_1] [i_2] [i_2 + 1] [i_4 - 1]))) + (6960280505324284115LL)))));
                    }
                    var_21 -= ((/* implicit */_Bool) max(((~((+(((/* implicit */int) var_6)))))), (((/* implicit */int) ((short) arr_3 [i_2 + 2] [i_2 + 2] [i_2 + 2])))));
                    arr_14 [i_2] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)119))));
                }
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (signed char i_7 = 3; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-23))))) ? (min((11387720514462216022ULL), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
                                var_23 = ((/* implicit */unsigned char) var_15);
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_6])) ? (((/* implicit */int) var_1)) : (max((((/* implicit */int) arr_5 [i_0])), (((((/* implicit */int) var_13)) & (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_6])))))))))));
                                var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1 - 4] [i_1 - 2])) ? (((int) (+(arr_3 [i_0] [i_1] [i_5])))) : (((/* implicit */int) ((short) ((((/* implicit */int) arr_20 [7U] [7U] [i_5] [i_6])) == (((/* implicit */int) arr_19 [i_0] [i_0] [i_5] [i_0]))))))));
                                arr_22 [i_0] [i_0] [i_5] [i_0] [i_7 - 3] [i_5] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [i_1] [i_5])) ? (var_10) : (((/* implicit */long long int) var_15)))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_7])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_20 [i_0] [i_5] [i_6] [i_7 - 1]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) (+(arr_0 [i_0])))) < (((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [i_1] [i_1] [i_9] [i_8])) ? (8888193830960239366LL) : (((/* implicit */long long int) var_11))))))))))));
                                arr_27 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_11)))) : ((+(-8888193830960239349LL)))))) ? ((~(((((/* implicit */_Bool) arr_19 [i_9] [i_8] [i_1] [10U])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5] [i_5] [i_5]))))))) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_5)))))))));
                                arr_28 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_0]))))) % (arr_23 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23))))) << (((/* implicit */int) var_12)))))));
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) ((short) var_14))), (arr_26 [i_0] [i_1] [i_5] [i_5] [i_0])))) >= (((((/* implicit */_Bool) arr_5 [i_1 - 3])) ? (((/* implicit */long long int) arr_16 [i_1 - 1] [i_1 - 1])) : (var_10)))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)474)) < (((/* implicit */int) min(((short)-21148), (((/* implicit */short) (_Bool)1)))))));
                    var_29 = ((/* implicit */int) var_6);
                }
                arr_31 [13] [13] = ((/* implicit */long long int) ((((/* implicit */long long int) (+(arr_0 [i_0])))) <= (((long long int) (~(arr_8 [i_0] [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) var_15);
}
