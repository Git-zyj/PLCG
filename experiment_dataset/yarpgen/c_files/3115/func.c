/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3115
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
    var_15 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (var_3))) : (((/* implicit */int) var_10))))));
    var_16 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) ((signed char) var_8))))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7))))))))));
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 19; i_1 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    for (long long int i_4 = 4; i_4 < 18; i_4 += 3) 
                    {
                        {
                            var_18 += ((/* implicit */signed char) (+(min((arr_1 [i_1 - 3] [i_4 - 2]), (((int) var_9))))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_1 [i_1 - 3] [i_4 - 2])))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) 11412291280118352337ULL))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (-669853810))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) 4215849966781155006ULL)))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    {
                        var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [i_0] [(signed char)6] [(unsigned short)3] [(signed char)6])), (arr_14 [i_6] [i_5] [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) var_14))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_10)))))) - (var_11)))));
                        arr_21 [(_Bool)1] [i_1] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (201326592ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))) ? (((-4188634204339585842LL) - (arr_13 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)4080))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (3185199343U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4080))))))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) 15890094821525538644ULL))));
                            arr_25 [i_5] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) var_5)), (min((var_11), (((/* implicit */unsigned long long int) (unsigned short)12523)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_14 [i_0] [i_0] [i_5 - 1] [i_6]))))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_24 [i_5] [i_6])) : (((/* implicit */int) var_14))))) ? (max((arr_22 [i_5] [12] [i_5 - 1] [i_6] [12]), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)60782)))))))));
                            arr_26 [i_0] [i_6] [i_5 - 1] [i_6] [i_7] &= min((((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_14)), (164177839263728776LL)))) : (var_12))), (((/* implicit */unsigned long long int) ((((long long int) (unsigned short)53012)) / (min((((/* implicit */long long int) var_2)), (var_1)))))));
                            var_23 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_2 [i_1 + 1])), (min((((/* implicit */long long int) (+(((/* implicit */int) var_8))))), (arr_5 [i_7])))));
                        }
                        arr_27 [i_0] [(signed char)2] [i_1 - 2] [i_5 - 1] [i_5 - 1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1601949172)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1 - 3] [i_1 - 2] [i_1 + 1]))) : (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_15 [i_1 - 2] [i_1 - 1] [i_5] [i_1 - 1] [i_1 - 1])))) : (((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1 - 1] [i_1 - 1] [i_5] [i_1] [i_1 - 1])))))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (min((var_1), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) (~(arr_23 [i_5] [i_0] [i_1 - 2] [i_0] [(signed char)13]))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))));
                    }
                } 
            } 
        }
        for (signed char i_8 = 3; i_8 < 19; i_8 += 4) /* same iter space */
        {
            arr_31 [i_0] [i_8] [i_8 - 3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_8 - 3])) & (131839248))) + (((((/* implicit */_Bool) ((1601949185) & (((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) (unsigned short)4076)))) : (((((/* implicit */_Bool) var_6)) ? (-1601949184) : (((/* implicit */int) var_5))))))));
            arr_32 [i_8] = ((/* implicit */unsigned char) arr_30 [i_8 - 2] [i_8]);
        }
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) max((arr_28 [i_0] [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_14)))))))))))));
    }
    var_26 = ((/* implicit */unsigned int) ((long long int) (((+(840883513))) << (((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) (signed char)4))))))));
}
