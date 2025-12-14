/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4043
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
    var_11 = ((/* implicit */signed char) var_5);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)59)) ? (arr_5 [i_3] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_1])))))) ? (1921665470U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [(short)10] [(short)10] [i_1] [i_1] [(_Bool)1] [8LL]))))))), (((/* implicit */unsigned int) max((arr_1 [i_3 - 1] [i_1]), (arr_1 [i_0] [i_1 + 2]))))));
                        arr_12 [i_0] [i_1 - 1] [i_1] [i_1] [i_2] [i_3 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_1 + 1] [i_1 + 3] [i_1]))) ? (arr_3 [i_0 - 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_4 [i_1] [(_Bool)1]))))));
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_5 [i_0 - 1] [i_3 - 2] [i_2]))))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((unsigned int) ((arr_9 [i_0 - 1] [i_0 - 1] [(short)0] [(_Bool)1]) ? ((+(((/* implicit */int) arr_6 [(unsigned short)8] [i_0 - 1] [(unsigned short)8])))) : (((((/* implicit */_Bool) arr_6 [(signed char)2] [i_0 - 1] [10])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned char)4])) : (((/* implicit */int) (short)3156))))));
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */int) (unsigned char)19))))) ? ((-(arr_3 [i_0 - 1] [i_0 - 1] [6LL]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_8 [i_0] [(short)14] [(short)6] [i_0])))))) / (((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) arr_2 [i_0])))))))))));
        arr_14 [i_0 - 1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) min((arr_2 [9]), (((/* implicit */int) var_6))))) : ((+(var_7))))) <= (((long long int) arr_3 [i_0 + 1] [(short)8] [(short)8]))));
    }
    for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 19; i_5 += 4) 
        {
            for (unsigned short i_6 = 3; i_6 < 17; i_6 += 3) 
            {
                {
                    var_15 &= ((/* implicit */int) min((min((arr_18 [i_4 - 3] [i_5 - 1] [i_5]), (arr_18 [i_4 - 3] [i_5 - 3] [i_5]))), (((((/* implicit */_Bool) arr_18 [i_4 - 3] [i_5 - 2] [i_5])) ? (arr_18 [i_4 - 1] [i_5 + 2] [i_5]) : (arr_18 [i_4 - 2] [i_5 - 1] [i_5])))));
                    arr_22 [8U] [i_4] = ((/* implicit */short) ((((/* implicit */long long int) ((max((arr_15 [i_5 - 3]), (arr_19 [i_4] [10] [i_5 - 1] [i_6]))) ? (min((var_3), (((/* implicit */unsigned int) (_Bool)0)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))))) & (min((((((/* implicit */_Bool) arr_17 [(signed char)15] [i_5] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15))) : (arr_16 [i_5] [i_6]))), (((/* implicit */long long int) ((arr_18 [6] [i_4] [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [i_5 - 3] [i_4 + 1]))))))))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_4] [i_6] [i_6] [i_6]))) ^ (arr_20 [i_4 + 2] [i_5] [(signed char)20] [(signed char)20]))), (((arr_15 [i_5]) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5])))))))))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) -1495696587701869516LL))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) var_1);
        var_19 ^= ((/* implicit */unsigned int) ((_Bool) max((min((arr_18 [i_4 + 1] [i_4] [4]), (((/* implicit */unsigned int) arr_21 [(_Bool)0] [i_4 - 3] [4U] [i_4 - 1])))), (((/* implicit */unsigned int) arr_19 [1] [i_4] [i_4 + 1] [4LL])))));
    }
    for (unsigned int i_7 = 3; i_7 < 19; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (short i_9 = 2; i_9 < 19; i_9 += 2) 
            {
                {
                    arr_29 [i_7 - 2] [(_Bool)1] [10] = ((/* implicit */_Bool) (-((~(min((((/* implicit */long long int) (short)-3157)), (-1094958070078364898LL)))))));
                    arr_30 [i_7] = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_19 [i_8] [12U] [i_8 - 1] [i_7 + 2])))), ((~(((/* implicit */int) arr_17 [i_9] [i_9 + 1] [i_9 + 1]))))));
                }
            } 
        } 
        arr_31 [i_7] [(unsigned short)18] = ((/* implicit */signed char) var_8);
        var_20 = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) arr_20 [i_7] [i_7] [i_7 - 2] [i_7])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [i_7] [i_7]))))) & (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_7]))))), (((/* implicit */long long int) ((_Bool) arr_15 [i_7 + 2])))));
    }
}
