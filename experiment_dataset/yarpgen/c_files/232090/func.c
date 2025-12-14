/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232090
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
    var_16 ^= ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) 3058689718U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)3469)))))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (unsigned char)172)))))) : (var_5)))) ? (((/* implicit */int) var_7)) : (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_0))))));
    var_18 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_11)))))) > (((((/* implicit */_Bool) var_9)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)243), ((unsigned char)59)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), (-874031478)))) : (arr_2 [i_0])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0 + 1] [i_0 + 1])), (var_13)))) : (((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) (unsigned char)196)) : ((-(((/* implicit */int) var_8))))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) max((-2332698), (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (var_5)))))) ? (max((((arr_4 [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) 4294967295U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))))));
            var_21 = ((/* implicit */long long int) max((arr_4 [i_0] [i_0]), ((~(3751532521716940981ULL)))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */int) (-(arr_2 [i_0])));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 4; i_3 < 15; i_3 += 1) 
            {
                var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-80)) / (((/* implicit */int) var_13))));
                var_24 = ((/* implicit */unsigned int) var_14);
                arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_10 [i_0 - 1] [i_3 - 4]);
            }
            for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_4 [i_0 + 1] [i_0])));
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (2659066846U) : (17U)));
            }
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_8)) / (((/* implicit */int) var_8))))));
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_6)));
            arr_15 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (var_6)));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            arr_19 [i_0] [i_0] [i_0] = var_5;
            /* LoopNest 2 */
            for (unsigned short i_6 = 4; i_6 < 16; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    {
                        arr_25 [i_0] [i_0] = ((/* implicit */int) var_7);
                        var_28 *= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_5]))));
                        arr_26 [i_0] [i_5] [(unsigned char)2] [i_0] [i_0] = ((/* implicit */long long int) arr_4 [(_Bool)1] [i_0]);
                    }
                } 
            } 
        }
        var_29 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_13 [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) (unsigned char)196))));
        var_30 = min((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_7 [i_0]))), (((/* implicit */unsigned int) (_Bool)1)));
        var_31 ^= ((/* implicit */unsigned long long int) var_11);
    }
    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_8]), (arr_1 [i_8])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_8] [i_8] [i_8] [i_8]))))))))));
        arr_29 [i_8] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (arr_21 [i_8] [i_8] [i_8]) : (arr_21 [i_8] [i_8] [i_8])))));
        var_33 -= ((/* implicit */unsigned int) max((((((/* implicit */int) var_7)) / (((/* implicit */int) var_2)))), (((/* implicit */int) var_10))));
    }
    var_34 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */int) var_15)) == (((/* implicit */int) var_4))))) : (((/* implicit */int) max(((unsigned char)54), (((/* implicit */unsigned char) (signed char)33)))))))) ? (max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)211))))), (4294967278U))) : (max((((/* implicit */unsigned int) min((var_2), (var_12)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (524256U)))))));
}
