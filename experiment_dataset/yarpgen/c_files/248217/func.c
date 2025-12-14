/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248217
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */short) var_10);
        arr_3 [0U] [0U] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [(unsigned char)6])) ? (((/* implicit */int) arr_2 [0])) : (((/* implicit */int) (unsigned short)47151))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (-(arr_1 [(unsigned short)0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned char)10))))));
        var_16 = ((/* implicit */long long int) arr_1 [0ULL]);
        var_17 = ((/* implicit */_Bool) (unsigned short)32768);
        /* LoopNest 3 */
        for (unsigned int i_2 = 2; i_2 < 8; i_2 += 1) 
        {
            for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */int) var_4);
                        arr_18 [i_4] [i_3 - 2] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_4] [i_2]);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                {
                    var_19 += ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_5] [i_5]))))))), ((((-(((/* implicit */int) var_12)))) == (arr_24 [i_5] [i_6] [i_7] [i_7])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            {
                                arr_30 [i_9] [i_5] [i_5] = ((/* implicit */unsigned char) max((arr_27 [i_5] [i_6] [i_7] [i_9] [i_9]), (((/* implicit */unsigned int) ((max((-1639931222), (((/* implicit */int) arr_28 [i_6])))) > (min((1639931222), (((/* implicit */int) arr_28 [i_5])))))))));
                                arr_31 [i_9] [i_8] [i_6] [(unsigned short)3] = ((/* implicit */unsigned int) max((min((arr_22 [i_7]), (arr_22 [i_7]))), (min((arr_21 [i_6] [i_6] [i_6]), (min((var_13), ((unsigned short)65535)))))));
                                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)48251)), (((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_9])) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) arr_20 [i_7] [i_8]))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? ((-(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned char) (signed char)96)))))))) : (var_9)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((1639931225), (((/* implicit */int) var_10))));
    var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((int) (unsigned short)65535)), (977502802)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), ((unsigned short)65534)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_11))))) : (var_5)))));
}
