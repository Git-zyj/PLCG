/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246697
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        var_11 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))), (arr_1 [i_0 - 1] [i_0])));
        arr_3 [(_Bool)1] [i_0 - 2] &= min((((/* implicit */unsigned int) max(((~(var_0))), ((-(((/* implicit */int) (unsigned short)65535))))))), (((8U) / (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
        var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_7)) > (arr_0 [i_0] [i_0])))), (arr_1 [i_0 - 1] [i_0])))));
        arr_4 [i_0] = (i_0 % 2 == 0) ? ((+((~(((((/* implicit */int) (unsigned char)27)) >> (((arr_0 [i_0] [i_0]) + (7719193115537079863LL))))))))) : ((+((~(((((/* implicit */int) (unsigned char)27)) >> (((((arr_0 [i_0] [i_0]) - (7719193115537079863LL))) - (1197146099860546836LL)))))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_1]);
                arr_13 [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (arr_6 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_1] [i_2])))))));
            }
            for (short i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                arr_18 [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) -1);
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((arr_17 [(signed char)2] [i_2] [i_1] [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_4])))))) ? (((/* implicit */int) arr_8 [i_4] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) 22U)))))))))));
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((arr_14 [i_2] [i_2] [i_4]) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2]))) : (arr_9 [i_1] [i_1]))) : (((/* implicit */long long int) var_7)))))));
            }
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1] [i_1] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_6)))))));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) min((arr_16 [i_2] [i_1] [i_1] [i_1]), (((/* implicit */unsigned char) arr_14 [i_1] [i_2] [i_2]))))), (arr_5 [i_2]))))) >= (4294967275U)));
        }
        /* vectorizable */
        for (unsigned short i_5 = 3; i_5 < 17; i_5 += 2) 
        {
            var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_5 - 1])) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1])) : (((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_5] [i_5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))));
            arr_22 [i_1] [i_5] [i_5 - 3] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)255)) ? (var_0) : (-1209806957)))));
            arr_23 [i_1] [1] = arr_11 [i_5] [i_5 + 2] [i_1];
            arr_24 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_19 [8ULL] [i_5 + 1] [i_5]))));
            arr_25 [i_1] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_1] [i_5 + 3]))));
        }
        arr_26 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_6 [i_1]), (((/* implicit */unsigned long long int) arr_20 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_20 [i_1] [i_1])) ? (arr_20 [i_1] [i_1]) : (arr_20 [i_1] [i_1]))) : ((+(arr_20 [i_1] [i_1])))));
        arr_27 [i_1] = ((/* implicit */unsigned char) ((var_1) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) == (((/* implicit */int) arr_7 [2LL] [i_1] [i_1]))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) arr_17 [i_1] [i_1] [i_1] [i_1])) <= (arr_20 [i_1] [i_1])))))));
        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_1)) >> (((var_7) - (281075916U))))))) ? ((+(((((/* implicit */int) arr_21 [i_1] [i_1] [i_1])) & (var_0))))) : ((~(((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))))));
        arr_28 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))));
    }
    for (signed char i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_9))));
        arr_32 [i_6] [(short)12] = ((((/* implicit */_Bool) arr_19 [i_6] [12] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) (short)-9565)))) > (((/* implicit */int) max((((/* implicit */short) var_4)), (arr_7 [i_6] [i_6] [i_6])))))))) : (4294967292U));
    }
    var_20 = ((/* implicit */signed char) var_4);
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_3))));
}
