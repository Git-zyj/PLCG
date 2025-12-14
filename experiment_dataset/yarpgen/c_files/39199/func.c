/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39199
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
    var_17 |= ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) min((2454282240U), (((/* implicit */unsigned int) -1914177087))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_15))) : (var_11)));
    var_18 |= ((/* implicit */short) min((max((max((var_15), (((/* implicit */unsigned long long int) (signed char)59)))), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) ((unsigned int) max((var_15), (((/* implicit */unsigned long long int) var_7))))))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_15)));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) min((5557870203554098810ULL), (17843347861717523919ULL)));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) ((_Bool) 1840685056U))) : (((/* implicit */int) (unsigned char)53)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_22 += ((/* implicit */short) var_9);
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((short) var_12));
        }
        var_23 &= ((/* implicit */_Bool) var_10);
    }
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_2])))));
        var_25 |= ((/* implicit */long long int) (short)4095);
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 19; i_3 += 3) 
        {
            var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)111)), (var_10)));
            /* LoopSeq 3 */
            for (int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                var_27 = ((/* implicit */unsigned char) ((_Bool) max((3118147431U), (((/* implicit */unsigned int) arr_13 [i_4] [i_2])))));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) 
                {
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (((var_7) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                    var_29 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) arr_14 [i_3 - 1] [i_2] [i_3 - 1] [i_5] [i_5 - 1] [i_4])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 1840685056U)) : (var_15)))))));
                }
                for (int i_6 = 2; i_6 < 19; i_6 += 2) 
                {
                    var_30 += ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_9 [i_2] [i_6 + 1] [i_3 + 1])) ? (((/* implicit */unsigned long long int) -1256101988)) : (arr_9 [i_2] [i_6 + 1] [i_3 - 2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_6 + 1] [i_3 - 2])))))));
                    var_31 = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) (~(var_7)))), (((((/* implicit */_Bool) arr_7 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (5557870203554098810ULL)))))));
                }
                var_32 = ((/* implicit */unsigned int) var_10);
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 18; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)166))));
                            arr_27 [i_7] [i_3] [i_4] [i_7 + 2] [i_8] = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_3]);
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5557870203554098801ULL)) ? (3118147436U) : (4294967266U))))));
                            var_35 = ((/* implicit */int) arr_23 [10ULL] [i_7] [i_7] [i_4] [i_7] [(signed char)8]);
                        }
                    } 
                } 
            }
            for (signed char i_9 = 2; i_9 < 17; i_9 += 2) 
            {
                arr_30 [(_Bool)1] [(_Bool)1] [i_9] = ((/* implicit */unsigned char) ((short) ((unsigned int) (+(((/* implicit */int) var_4))))));
                var_36 = ((/* implicit */short) ((unsigned short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_7))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)126)), (var_9)))))));
                arr_31 [i_2] [12U] [i_3 - 1] [i_3 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 389711737)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1664334716704425905ULL)));
                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_3] [i_9 + 2]))))) || ((!(((/* implicit */_Bool) arr_26 [i_3 + 1] [i_3 - 1] [i_3]))))));
            }
            for (signed char i_10 = 3; i_10 < 19; i_10 += 2) 
            {
                var_38 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_2] [i_3] [i_3]))) / (1664334716704425896ULL)))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_26 [i_2] [i_3] [i_10]))));
                var_39 = ((/* implicit */unsigned char) (signed char)59);
            }
        }
        arr_35 [i_2] [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) var_8))))))) ? (((/* implicit */int) ((short) ((unsigned long long int) arr_29 [i_2] [i_2])))) : (((((/* implicit */int) arr_23 [i_2] [i_2] [6ULL] [i_2] [i_2] [i_2])) ^ (var_16)))));
    }
    for (signed char i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        var_40 = ((unsigned short) 12888873870155452802ULL);
        arr_38 [i_11] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_2 [i_11])) ? (var_11) : (((/* implicit */unsigned long long int) (-(var_7)))))), (((/* implicit */unsigned long long int) (unsigned short)11595))));
        arr_39 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_11])) * (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_36 [i_11] [i_11])) ? (arr_36 [i_11] [i_11]) : (var_11))) : (((arr_36 [i_11] [i_11]) / (arr_36 [i_11] [i_11])))));
    }
    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
    {
        var_41 = ((/* implicit */unsigned char) arr_40 [i_12] [i_12]);
        var_42 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_32 [i_12])));
    }
}
