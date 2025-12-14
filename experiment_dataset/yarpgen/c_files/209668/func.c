/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209668
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
    var_20 -= max((var_10), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_21 = var_9;
                    var_22 = ((/* implicit */unsigned int) ((var_4) & (((/* implicit */long long int) max((arr_3 [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_1])) * (((/* implicit */int) arr_6 [i_1] [i_1]))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        var_23 &= ((/* implicit */unsigned short) arr_1 [12U]);
        var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)7193))));
        var_25 = ((/* implicit */unsigned int) ((unsigned short) 0U));
        var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_12) : (4202735950188092918LL)))) ? (((/* implicit */int) arr_6 [i_3] [i_3])) : ((+(((/* implicit */int) arr_6 [i_3] [i_3]))))));
        var_27 = ((/* implicit */unsigned short) 2605723096U);
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        var_28 -= ((/* implicit */unsigned short) 4294967295U);
        /* LoopSeq 3 */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((unsigned int) arr_10 [i_5])))));
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) 6334783221334180370LL))));
        }
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
        {
            arr_16 [(unsigned short)10] &= ((arr_10 [(unsigned short)13]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6917))));
            var_31 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_6]))));
        }
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
        {
            var_32 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_4] [i_4] [i_4]))));
            var_33 &= (-((+(0U))));
            arr_20 [i_4] [i_4] = ((((/* implicit */_Bool) (~(0U)))) ? (((((/* implicit */_Bool) 3874159311U)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (arr_10 [i_4]));
            var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_7]))));
            var_35 -= ((/* implicit */long long int) arr_17 [i_4]);
        }
        var_36 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4])) ? (((unsigned int) 334549433535688392LL)) : (((unsigned int) 1158944365U))));
    }
}
