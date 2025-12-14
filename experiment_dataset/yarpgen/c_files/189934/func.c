/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189934
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] &= (+(((((((/* implicit */_Bool) arr_0 [i_0] [(signed char)1])) ? (11237359263083899090ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0])))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [9U])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0]))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((long long int) ((unsigned long long int) arr_2 [i_0])));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_3]))));
                        /* LoopSeq 1 */
                        for (int i_4 = 3; i_4 < 15; i_4 += 1) 
                        {
                            arr_15 [i_4] [i_1] = ((/* implicit */unsigned char) ((_Bool) ((short) arr_4 [i_4 - 1])));
                            var_12 |= ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_14 [i_4 + 1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_0))));
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_4 - 2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_4 - 3]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_11 [i_4 - 2])) >= (var_10)))) : (((((/* implicit */_Bool) arr_11 [i_4 - 3])) ? (((/* implicit */int) arr_11 [i_4 - 3])) : (((/* implicit */int) arr_11 [i_4 - 3]))))));
                            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (7209384810625652546ULL) : (((/* implicit */unsigned long long int) var_0))))) || (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24576)) || (((/* implicit */_Bool) 11086615445891298569ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4 - 2])) || (((/* implicit */_Bool) arr_14 [i_4 - 3] [i_4 + 1]))))))))));
                        }
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_10 [i_3] [i_2] [i_2] [9ULL] [i_1] [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_4)))))))) && (((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_6]))) ? (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [6LL]))) % (arr_7 [i_1] [i_6] [i_2] [i_6]))), (((/* implicit */unsigned int) ((unsigned short) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_5])) >= (((/* implicit */int) arr_14 [i_1] [i_0]))))))));
                                var_16 = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_5] [i_6])))))))), (max((((/* implicit */unsigned int) (unsigned short)40984)), (2147483647U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            for (long long int i_9 = 4; i_9 < 15; i_9 += 4) 
            {
                for (unsigned int i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    {
                        arr_36 [i_8] = ((/* implicit */unsigned int) max((arr_25 [i_7] [i_7]), (max((((((/* implicit */_Bool) arr_30 [i_7] [i_8] [i_9] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_7]))) : (arr_30 [i_10] [i_9] [i_8] [i_7]))), (((/* implicit */unsigned long long int) arr_18 [i_7] [i_7] [i_7] [i_10]))))));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (-(((((/* implicit */_Bool) ((unsigned short) arr_34 [i_7] [i_9] [i_9] [i_10]))) ? (((/* implicit */int) arr_11 [i_7])) : ((~(arr_29 [(unsigned short)13]))))))))));
                        var_18 = ((/* implicit */int) max((var_18), ((~((~(((/* implicit */int) arr_5 [i_9 - 3] [i_9] [i_9]))))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) arr_12 [i_7] [i_7] [(signed char)8] [(unsigned char)2] [i_7] [i_7]);
        var_20 = ((/* implicit */unsigned char) var_0);
        var_21 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_33 [(signed char)1] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (15927447268871976916ULL) : (((/* implicit */unsigned long long int) arr_33 [(unsigned short)15] [3ULL] [(signed char)0] [i_7] [3ULL] [i_7])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))))));
    }
    for (int i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
    {
        arr_40 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 1599246522603558325ULL))) ? (((((/* implicit */_Bool) arr_14 [i_11] [i_11])) ? (-9223372036854775806LL) : (((/* implicit */long long int) 3052411916U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 7209384810625652524ULL)) ? (((/* implicit */int) (short)-13969)) : (((/* implicit */int) (signed char)68)))))));
        var_22 = ((/* implicit */long long int) ((((((arr_1 [i_11]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_11] [i_11]))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_11] [(signed char)14])) && (((/* implicit */_Bool) arr_13 [i_11] [i_11] [i_11] [i_11] [4ULL] [i_11])))))))) >> (((((/* implicit */int) arr_10 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) - (2115)))));
    }
    var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (11150943101970391799ULL)))) ? (((((/* implicit */int) var_8)) / (((/* implicit */int) var_6)))) : (((/* implicit */int) ((unsigned char) var_2)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((signed char) 93083347))) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_7))));
}
