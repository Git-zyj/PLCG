/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20088
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
    var_10 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 1048575LL)))))))), (min(((~(var_7))), (((/* implicit */unsigned long long int) ((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) ((unsigned long long int) arr_1 [i_0]));
        var_12 -= ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) arr_1 [(_Bool)0])))) ? (((/* implicit */unsigned int) ((arr_3 [i_0]) / (((/* implicit */int) (short)32426))))) : (min((((/* implicit */unsigned int) arr_0 [i_0])), (var_3))))), (((/* implicit */unsigned int) var_9))));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (arr_1 [i_0])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)182))))) : (max((((/* implicit */long long int) 1444433181U)), (arr_1 [i_0])))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) arr_3 [i_0]))));
        var_15 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((2850534114U), (((/* implicit */unsigned int) arr_0 [i_0])))))));
    }
    var_16 = var_3;
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 3; i_3 < 18; i_3 += 3) 
                {
                    arr_11 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 + 2] [i_2] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32752)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_9 [i_3] [16U] [i_1]))))) : (((((/* implicit */_Bool) (short)32426)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_2 + 1])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_5 [i_1]), (arr_10 [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_2 - 1]))) : (max((2328701744U), (((/* implicit */unsigned int) arr_10 [i_1] [i_2 - 1]))))))) : (((((/* implicit */_Bool) ((signed char) (short)32426))) ? (((/* implicit */unsigned long long int) (+(arr_6 [i_1] [i_1])))) : (min((arr_7 [(unsigned char)10] [i_2] [i_1]), (0ULL)))))));
                    var_17 = ((/* implicit */short) min((var_5), (((/* implicit */unsigned long long int) ((((unsigned int) arr_7 [i_1] [i_1] [i_1])) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_8 [i_1] [i_2 + 1] [i_1])))))))));
                    arr_12 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((((/* implicit */int) (short)-18253)) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_2] [i_2 - 1] [i_3])) + (31953))))) - (((/* implicit */int) var_6))))), (((arr_4 [i_3 + 2]) ^ (((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) (short)-18253)))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)32426)) % (((/* implicit */int) arr_5 [i_1]))));
                    arr_15 [i_1] [i_2 - 1] [3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (var_3)));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 3) 
                {
                    arr_18 [i_1] [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-32429)) : (((/* implicit */int) arr_13 [i_1] [i_1]))))) : ((-(arr_7 [i_5] [i_5] [15U]))))), (((/* implicit */unsigned long long int) (((-(var_5))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (arr_5 [i_1]))))))))));
                    arr_19 [i_1] [i_2] = max((((/* implicit */unsigned long long int) arr_13 [i_1] [i_2])), (arr_8 [i_5 - 1] [i_2 - 1] [i_1]));
                    arr_20 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1620242278)), (max((var_7), (arr_16 [i_1] [i_5] [i_1])))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    arr_23 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((arr_16 [i_1] [i_1] [0LL]) + (arr_8 [i_1] [i_2] [i_2]))))) ? (((/* implicit */int) max((((unsigned short) 525961698U)), (((/* implicit */unsigned short) (_Bool)0))))) : (((/* implicit */int) ((short) (!(((/* implicit */_Bool) (short)32426))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) (unsigned char)57)), ((~(((/* implicit */int) var_1)))))), (-1472412057)));
                        /* LoopSeq 4 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) (unsigned char)23);
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_27 [i_2] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_27 [i_7] [i_2 - 1] [i_1]))))) ? (((/* implicit */int) ((_Bool) arr_27 [i_7] [i_2 - 1] [i_2]))) : ((-(((/* implicit */int) arr_27 [i_2 - 1] [i_2 - 1] [2U]))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            arr_32 [i_1] [i_6] [i_1] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-23668)) ? (((/* implicit */unsigned long long int) max((arr_25 [i_2 + 1]), (((/* implicit */unsigned int) 389785584))))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) : (1961019930459613426ULL)))));
                            var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_6 [i_2] [i_2 - 1])) % (4294967295ULL)))) ? (((((((/* implicit */_Bool) var_7)) ? (12499967516267617169ULL) : (((/* implicit */unsigned long long int) 4294967290U)))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)10861)) - (-389785612)))))) : (min((arr_31 [i_1] [i_1] [i_2 - 1] [i_1] [(signed char)13]), (11543549654285940836ULL)))));
                        }
                        for (long long int i_10 = 3; i_10 < 19; i_10 += 3) 
                        {
                            var_23 += var_3;
                            var_24 = ((/* implicit */short) ((long long int) max((((((/* implicit */_Bool) var_7)) ? (4294967290U) : (((/* implicit */unsigned int) 389785613)))), (((/* implicit */unsigned int) arr_30 [i_2] [i_2 + 1] [i_6] [i_7] [i_10] [i_7] [i_6])))));
                        }
                        for (short i_11 = 1; i_11 < 19; i_11 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) (_Bool)0);
                            var_26 = -1946941307;
                            arr_39 [(short)15] [i_7] [i_7] [i_7] [i_7] [i_1] [i_7] = ((/* implicit */long long int) ((unsigned long long int) ((_Bool) ((_Bool) var_1))));
                            arr_40 [i_1] [i_7] [i_1] [i_7] [i_7] [i_7] [(_Bool)1] = ((/* implicit */_Bool) arr_22 [i_11 + 1] [i_2 + 1] [i_2 + 1]);
                        }
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_3))));
                    }
                    for (int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        arr_45 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_5)));
                        var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) var_3)), (5634487086132801501ULL)))))) ? (arr_36 [i_1] [i_2] [i_6] [i_12]) : (((/* implicit */int) var_0))));
                        arr_46 [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((_Bool) (!(arr_26 [i_12] [i_2 - 1] [i_1] [i_12] [i_2] [i_2 - 1]))));
                    }
                }
            }
        } 
    } 
}
