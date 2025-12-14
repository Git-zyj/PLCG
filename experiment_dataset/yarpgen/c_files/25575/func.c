/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25575
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
    var_13 = ((/* implicit */unsigned char) (short)-32750);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (3272541076U)))) ? ((-(((/* implicit */int) var_10)))) : (((((/* implicit */int) var_10)) * (((/* implicit */int) arr_1 [i_4]))))))) ? (((((/* implicit */_Bool) ((arr_7 [i_4]) / (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? ((+(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_3 + 1]), (((/* implicit */unsigned char) var_0)))))))) : (((/* implicit */unsigned int) (((-(1607722036))) / ((+(var_7)))))))))));
                                arr_14 [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((_Bool) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) && (((/* implicit */_Bool) (unsigned short)56421))))))));
                                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((18446744073709551584ULL) >> (((var_1) - (143470548164414957ULL))))))));
                                var_16 = ((/* implicit */unsigned char) (short)5511);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (short i_6 = 4; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1607722036)) || (((/* implicit */_Bool) (unsigned short)56421)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)21)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (-1607722022))))))));
                                var_17 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)32749)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)0)))) | (((int) arr_15 [i_6] [i_5] [i_2] [i_0]))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) ((16487966665682150250ULL) != (arr_10 [i_2])))) : ((~(((/* implicit */int) var_2)))))) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) arr_19 [i_2] [i_1] [i_2] [i_5] [i_6])) == (((/* implicit */int) (signed char)72))))), (arr_13 [i_0] [i_1] [8LL] [i_2] [i_5] [i_0])))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    arr_23 [i_0] = ((/* implicit */unsigned char) 20U);
                    arr_24 [11LL] [i_1] [(unsigned short)9] &= ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)9115)), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) < (6906357663889764947ULL))) ? ((-(arr_7 [i_0]))) : (min((((/* implicit */unsigned int) 1607721999)), (var_11)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 4; i_8 < 10; i_8 += 1) 
                    {
                        arr_28 [i_0] [i_0] [i_7] [i_7] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((1607722036) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) var_12))))) : ((+(((/* implicit */int) var_4))))))));
                        arr_29 [i_0] [i_1] [i_0] [i_7] [i_0] [i_8 - 2] = ((/* implicit */int) ((((/* implicit */int) max((var_4), (var_10)))) != (((/* implicit */int) var_4))));
                    }
                    arr_30 [(unsigned short)4] [i_1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) min(((short)0), (((/* implicit */short) arr_8 [i_0 - 3] [i_1] [i_7] [i_1]))))) / ((+(((/* implicit */int) (signed char)-28))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_9] [i_1] [i_7] [i_1] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)(-32767 - 1)))));
                        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                    }
                }
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_36 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-1926)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)246))));
                    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_34 [(unsigned short)4] [i_1] [i_10] [(unsigned char)2]))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (short)13607))) ^ (4294967295U))))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) : (min((var_11), (((/* implicit */unsigned int) var_4))))))), ((((~(var_1))) >> (((((/* implicit */int) var_10)) - (183)))))));
}
