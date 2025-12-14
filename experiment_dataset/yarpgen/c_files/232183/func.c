/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232183
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned char) (signed char)-82)), ((unsigned char)22))))) - (((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_11 [i_3] [i_2] [i_2] [i_1 + 1] [i_0] [i_0] &= ((((((/* implicit */_Bool) (unsigned char)23)) && (((/* implicit */_Bool) var_17)))) ? (((/* implicit */unsigned int) (+((+(var_18)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)15), ((unsigned char)22))))) % ((~(136237007U))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) (_Bool)0);
                            var_21 = ((/* implicit */unsigned int) var_17);
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) 136237016U);
                            var_22 = ((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (max((((/* implicit */long long int) 434588937U)), (-6356775760536077928LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)24240)))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (var_0)))), (var_5))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 2; i_5 < 9; i_5 += 2) 
                        {
                            var_24 = (((!(((/* implicit */_Bool) 13761155763248444293ULL)))) || (((/* implicit */_Bool) 33423360)));
                            arr_17 [i_0] [i_1 + 1] [i_2] [i_3] [i_5] = ((((/* implicit */_Bool) (unsigned short)10299)) ? (var_14) : (((/* implicit */unsigned int) var_8)));
                        }
                    }
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)22))))) << (((arr_16 [i_2 + 2] [i_2 + 1] [i_2] [i_2] [i_2]) - (4053150195U)))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3911601701381866620LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((((/* implicit */_Bool) 4685588310461107322ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)11896))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 + 2] [i_2] [i_1 + 1]))) <= (((((/* implicit */_Bool) (short)26950)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))))))))) : ((~(1946870008218478576ULL)))));
                    }
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_1 + 1]))));
                        var_27 = ((/* implicit */unsigned int) ((unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (arr_2 [i_2]))), (((/* implicit */unsigned int) (!(var_1)))))));
                    }
                    var_28 |= ((/* implicit */long long int) (+(((/* implicit */int) (!((!(arr_23 [i_0] [i_1] [i_1] [i_2 + 3] [i_2]))))))));
                    var_29 = min((arr_12 [i_0]), (((/* implicit */unsigned int) var_6)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_8 = 3; i_8 < 9; i_8 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (2147483640U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))))));
                        var_31 = ((/* implicit */long long int) 136237007U);
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (arr_9 [i_8] [i_8 - 1] [i_8] [i_8 + 2])));
                        var_33 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0])))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        var_34 = ((((/* implicit */unsigned long long int) (~(arr_1 [i_2 + 2])))) == (min((((/* implicit */unsigned long long int) (unsigned short)0)), (1602177081387597150ULL))));
                        var_35 *= ((/* implicit */signed char) var_14);
                        var_36 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)43)) ? (4611686018427385856LL) : (((/* implicit */long long int) 950258466U))))) ? (max((3344708823U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13)))))))))));
                    }
                }
            } 
        } 
    } 
    var_37 ^= ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) var_10))))))));
    var_38 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned short)52629)) : (((/* implicit */int) (signed char)64))))) ? (((/* implicit */int) ((var_8) != (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
}
