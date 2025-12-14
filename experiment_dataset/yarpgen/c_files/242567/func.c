/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242567
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_12 &= ((/* implicit */unsigned short) 1073741568);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 10; i_2 += 3) 
            {
                for (signed char i_3 = 3; i_3 < 9; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */int) ((long long int) ((arr_7 [i_1] [i_1] [i_2] [i_3] [(_Bool)1] [i_1]) ? (arr_3 [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [1ULL] [i_2] [(unsigned short)3] [i_2] [(_Bool)1] [i_0]))))));
                        arr_10 [i_0] [i_1] &= ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 + 1] [(_Bool)1])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_2])))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_9 [i_0] [i_1])))));
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned short)32622))) + (((/* implicit */int) ((signed char) arr_0 [i_3]))))))));
                        arr_11 [i_3] [i_1] [(signed char)3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [(_Bool)0] [i_1] [(_Bool)0])) == (((/* implicit */int) arr_7 [i_0] [i_1 + 3] [(unsigned short)1] [i_3] [i_2 - 3] [i_2 - 2]))))) % (((arr_7 [i_3 + 1] [i_2 - 1] [i_2] [i_1 + 2] [i_0] [i_0]) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_3])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) (((!(arr_14 [i_4] [4LL] [i_4] [i_4]))) ? (((((/* implicit */_Bool) (unsigned short)32914)) ? (var_4) : (var_9))) : ((~(arr_18 [i_0] [i_0] [i_0] [i_0])))));
                        arr_20 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32652)) ? (((/* implicit */int) arr_17 [i_0] [i_4] [i_0] [i_6])) : (-1073741568)))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_4] [i_5] [6LL])) : (((/* implicit */int) var_2))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            for (unsigned int i_8 = 1; i_8 < 7; i_8 += 3) 
            {
                {
                    arr_26 [i_7] [i_8] [i_7] = ((/* implicit */long long int) ((((arr_6 [i_0] [i_0] [i_8] [i_8]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_7] [i_8] [i_0]))) : (var_5))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [(signed char)1] [i_7] [i_8] [i_8]) && (((/* implicit */_Bool) arr_23 [i_8] [i_0] [i_0]))))))));
                    arr_27 [i_0] [i_8] [i_8 - 1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_9 [i_8] [i_0])) ? (((/* implicit */int) (unsigned short)32914)) : (((/* implicit */int) arr_12 [i_0]))))));
                    arr_28 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0])) * (((/* implicit */int) arr_23 [i_0] [i_0] [i_0]))))) * (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_7] [i_8 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_8 + 4] [i_7] [i_0]))) : (arr_21 [i_0])))));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) ((((arr_3 [i_0] [i_0]) + (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [(_Bool)1] [i_0])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [(signed char)0] [i_0])))));
    }
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32913)))))))))));
}
