/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209220
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (_Bool)1))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)603)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */int) arr_1 [i_0] [i_0])), (1745198274))) * (((((/* implicit */_Bool) -1745198275)) ? (((/* implicit */int) (short)25470)) : (-1745198275)))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) -1745198275)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (var_7)))) ? ((-(((/* implicit */int) arr_0 [(unsigned short)2])))) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) arr_0 [i_0])), (805306368U))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [11LL] [(_Bool)1]))))), (((unsigned short) (unsigned short)31)))))));
        var_17 = ((/* implicit */_Bool) (~((+(((/* implicit */int) ((unsigned char) (short)10846)))))));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4))))) ^ (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_5)) > ((+(arr_7 [i_1])))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(short)7] [15])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-5626))))) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)8087)) != (((/* implicit */int) var_4)))))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) arr_5 [0] [i_4]);
                                arr_16 [i_1] [i_2] [i_3] [i_2] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) * (var_7)))) ? (arr_5 [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_3] [i_4] [i_5])))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] [6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [(unsigned short)10]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                    arr_18 [15] [15] [i_3] [i_3] = ((/* implicit */unsigned int) (short)-11645);
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */int) (unsigned short)5401)) >= (((/* implicit */int) (unsigned short)45770)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)35))) < (arr_11 [i_1])));
                                arr_25 [i_6] [i_6] [i_3] [i_6] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_3] [(signed char)10] [i_6] [i_7]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_26 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)5625)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1]))) : (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (1240509188) : (((/* implicit */int) (unsigned char)40)))))));
    }
}
