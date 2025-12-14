/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49596
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
    var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3693345912U) & ((~(var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))) : (((((/* implicit */_Bool) var_2)) ? (max((601621384U), (((/* implicit */unsigned int) var_13)))) : (3693345902U)))));
    var_17 = ((/* implicit */long long int) var_2);
    var_18 = ((/* implicit */long long int) (signed char)-1);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (601621384U)))) ? (var_14) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12814))) : (var_11)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (70368744177663ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1798252990U)) ? (1767384597088722191LL) : (((/* implicit */long long int) 601621393U)))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (3ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))) + (var_11)))) : (((((/* implicit */_Bool) 15435581658431032469ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        arr_12 [(short)11] [i_4] [i_2] [(short)11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)64851)) ? (68719476735ULL) : (((/* implicit */unsigned long long int) -121686692))));
                        var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3))) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_13 [i_2] [i_2] [(unsigned char)0] [i_2] |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24337)) || (((/* implicit */_Bool) 601621384U)))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)41204)) / (((/* implicit */int) (short)3025))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
                    }
                    var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                    var_26 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)845)) ? (var_1) : (((/* implicit */long long int) -602515718))))));
                }
            } 
        } 
        var_27 += ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (601621385U))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_13)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (var_3)))));
    }
}
