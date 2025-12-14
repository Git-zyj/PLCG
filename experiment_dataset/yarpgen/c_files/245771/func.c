/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245771
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
    var_17 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))), ((((~(((/* implicit */int) var_5)))) ^ (((/* implicit */int) ((unsigned short) var_10)))))));
    var_18 = ((/* implicit */long long int) var_13);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_16 [i_4] [i_3] [i_1] [i_2] [i_1] [i_0] [i_0] = ((((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_2 + 1] [i_4 - 1])) && (((/* implicit */_Bool) arr_9 [i_1 - 1] [i_2] [i_2] [i_2 + 4] [i_4 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1] [i_2] [i_2 + 3] [i_4 - 2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1 - 1] [i_2] [i_2] [i_2 + 4] [i_4 - 3]))))));
                                arr_17 [0] [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((min((((long long int) -1950450959)), (((/* implicit */long long int) var_8)))) <= (((/* implicit */long long int) ((((_Bool) arr_0 [(unsigned char)7] [i_0])) ? (((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_0] [i_1] [i_0]))) : (((/* implicit */int) (unsigned char)255)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) max((var_19), (min((min((arr_15 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_2 + 2] [i_2 + 1]), ((unsigned char)169))), (((/* implicit */unsigned char) arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 2]))))));
                }
            } 
        } 
        arr_18 [i_0] = ((/* implicit */int) var_5);
        /* LoopNest 3 */
        for (unsigned char i_5 = 4; i_5 < 11; i_5 += 2) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_9 [i_6 - 1] [i_6 - 1] [i_6 - 1] [1] [i_7]))));
                        var_21 = var_11;
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            var_22 = ((/* implicit */int) var_13);
                            arr_30 [i_8] [(unsigned char)10] [8LL] [i_5] [(signed char)11] = arr_5 [i_5 - 2] [i_5 - 2];
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_9 = 1; i_9 < 21; i_9 += 4) 
    {
        arr_33 [i_9] = ((/* implicit */signed char) (+(arr_32 [i_9 + 1])));
        arr_34 [i_9] [i_9] = ((/* implicit */unsigned char) arr_31 [i_9]);
        arr_35 [i_9] [i_9] = ((/* implicit */unsigned int) ((long long int) 2287828610704211968ULL));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        arr_40 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)45486)) || (((/* implicit */_Bool) (unsigned char)128))));
        arr_41 [i_10] [i_10] = ((/* implicit */int) var_3);
        arr_42 [i_10] [i_10] = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
    }
    var_23 = ((/* implicit */signed char) ((unsigned char) (-(var_0))));
    var_24 -= ((/* implicit */int) (signed char)-111);
}
