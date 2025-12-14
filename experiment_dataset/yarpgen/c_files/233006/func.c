/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233006
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
    var_13 |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((var_2) >> (((274877905920ULL) - (274877905915ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_10)), (var_4))))) : (min((var_5), (((/* implicit */unsigned long long int) var_6))))))));
    var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min(((signed char)45), ((signed char)-45)))) == (((/* implicit */int) var_12)))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_4)))) : (((/* implicit */int) var_12))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) var_8)) - (var_5)))))) ? (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_2))) | (((/* implicit */unsigned int) (~(442820974)))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)2111)) : (((/* implicit */int) var_12)))), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)10946)))))))));
        arr_2 [i_0] [(unsigned char)17] = ((/* implicit */unsigned char) max((((((/* implicit */int) (signed char)-48)) & (((((/* implicit */int) (unsigned char)253)) << (((/* implicit */int) var_7)))))), (max((arr_1 [i_0] [i_0 + 1]), (min((((/* implicit */int) (short)18552)), (-442820953)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 442820966)), (arr_4 [i_1 + 1])))) ? (max((((/* implicit */unsigned int) var_3)), (arr_5 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)12), (((/* implicit */unsigned char) arr_0 [i_1])))))))))));
        arr_6 [(short)10] &= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_9))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            for (unsigned int i_3 = 4; i_3 < 14; i_3 += 2) 
            {
                {
                    var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2899561173U)) ? ((-(((((/* implicit */_Bool) var_8)) ? (241758585351409606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) 3853548516U))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 3; i_4 < 14; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned short)54590)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2]))) : (2427556030U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)154)), ((short)-29149))))))), ((((-(441418786U))) << (((575798760U) - (575798732U)))))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_8 [i_3]) : (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)17336))) - (2757872378U))) + (((/* implicit */unsigned int) var_9)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) : (max((((/* implicit */int) var_12)), (arr_1 [7] [9ULL])))))), (arr_20 [i_6] [i_6])));
        var_21 = ((/* implicit */unsigned char) (+(0)));
    }
    /* vectorizable */
    for (unsigned int i_7 = 1; i_7 < 14; i_7 += 2) 
    {
        var_22 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_17 [i_7] [14U] [14U] [i_7 - 1] [i_7] [8U] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7]))) : (9345946600607509996ULL))) * (arr_8 [i_7 + 1])));
        var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_21 [i_7 - 1] [i_7 + 1]))));
    }
}
