/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236543
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) (-(4294967295U)));
        var_19 = ((/* implicit */int) ((4294967291U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) ((unsigned char) 13U))) : (((/* implicit */int) var_0)))) - (((/* implicit */int) arr_3 [i_1] [i_1] [i_3]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) var_4);
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((0U), (arr_8 [i_2 + 2] [i_2 + 1] [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 2] [i_4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_8 [i_0 - 2] [i_1] [(unsigned char)7] [i_3] [i_3] [i_4] [(unsigned char)7]), (((/* implicit */unsigned int) var_4))))) ? (((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [9LL]))) : (4294967278U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_0] [i_0])))))) : (((((/* implicit */_Bool) (unsigned short)34508)) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) : (-9204777421746113407LL)))))));
                            var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_0))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 2] [i_2 + 1] [i_2 + 1] [i_4 + 1]))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12)))) == (((/* implicit */int) arr_7 [i_0 - 2] [i_1] [i_2] [i_3] [(unsigned short)13]))))))));
                            var_24 = (unsigned char)110;
                            var_25 = ((/* implicit */long long int) var_14);
                        }
                        for (unsigned char i_5 = 2; i_5 < 19; i_5 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */long long int) ((signed char) ((((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */long long int) arr_8 [17LL] [(signed char)14] [(unsigned short)8] [i_3] [i_3] [(signed char)16] [(signed char)16])))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)75))))))));
                            var_27 = ((/* implicit */unsigned short) arr_0 [i_1] [i_3]);
                        }
                        arr_14 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) ((var_11) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)109)))));
                        var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_15))) ? (min((((/* implicit */long long int) arr_9 [i_0 + 1] [i_2 + 3])), ((+(var_10))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        var_29 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-9)), (4294967295U)));
        arr_17 [18LL] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_6] [i_6]))));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6] [i_6])) ? (var_8) : (min((23U), (((/* implicit */unsigned int) arr_7 [i_6] [i_6] [19U] [i_6] [i_6]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (5789495718417782260LL)));
    }
    /* LoopSeq 2 */
    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned short) (~(max((-8548030235298955401LL), (((/* implicit */long long int) min((8U), (4294967295U))))))));
        var_32 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_10))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
    {
        arr_22 [i_8] [i_8] = (~(4294967295U));
        arr_23 [6] [i_8] = ((/* implicit */unsigned short) var_8);
        arr_24 [7U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_8] [i_8]))))) : (((((/* implicit */_Bool) -5789495718417782255LL)) ? (((/* implicit */long long int) arr_8 [i_8] [i_8] [i_8] [i_8] [i_8] [(unsigned short)6] [i_8])) : (var_13)))));
    }
    var_33 = max((var_7), (((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0))))));
}
