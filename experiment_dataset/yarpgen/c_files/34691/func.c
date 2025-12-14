/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34691
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
    var_16 = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) (signed char)-113))))) ? (var_7) : (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_4)) & (var_10)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned char) (((!((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (var_0)))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 4; i_3 < 9; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (signed char)94))));
                        var_19 &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-116)) | (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_15))) / (var_11))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_1] [i_1]))))))))));
                        var_20 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_9 [i_3 - 4] [i_2] [i_2] [8U] [i_0] [i_0])) ? (min((var_13), (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        arr_13 [i_4] = ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) > (arr_11 [i_4])))) != (((/* implicit */int) ((arr_10 [i_4] [i_4]) != (arr_10 [i_4] [i_4])))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            for (unsigned int i_6 = 2; i_6 < 13; i_6 += 1) 
            {
                for (unsigned int i_7 = 1; i_7 < 11; i_7 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) ^ ((-(arr_20 [i_6] [i_4] [(signed char)4] [i_6] [(_Bool)1])))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_7 - 1] [i_6 + 1] [i_6 - 1] [i_6 - 1])) && (((/* implicit */_Bool) arr_19 [i_6] [i_6 - 1] [0] [i_5]))));
                    }
                } 
            } 
        } 
        arr_21 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) (short)14)) > (((/* implicit */int) arr_12 [i_4]))))) : (arr_20 [i_4] [i_4] [i_4] [i_4] [i_4])));
        arr_22 [i_4] = ((/* implicit */unsigned char) (+(arr_17 [i_4])));
    }
}
