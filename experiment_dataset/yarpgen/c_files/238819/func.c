/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238819
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_0)) ? (var_0) : (var_11))) : (((/* implicit */int) arr_0 [(unsigned short)6] [(unsigned short)6])))))));
        var_16 = ((/* implicit */int) ((long long int) arr_1 [i_0 + 1] [i_0]));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_1] [(unsigned char)14]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2)))) ? (min((((/* implicit */unsigned int) var_1)), (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) < (((/* implicit */int) arr_0 [i_1] [(short)14])))))))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */long long int) min((var_18), (max((max((((/* implicit */long long int) min((arr_9 [i_3] [i_2]), (((/* implicit */unsigned short) arr_0 [i_1] [i_4]))))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) + (arr_8 [i_4] [i_3] [4U] [4U]))))), (((/* implicit */long long int) (+((+(((/* implicit */int) var_9)))))))))));
                        arr_11 [i_1] [i_2] [i_1] [i_3] [4U] = ((/* implicit */unsigned int) var_14);
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_2] [i_3] [i_4])))))))));
                        var_20 += var_4;
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned int) max((var_21), (max((min((((/* implicit */unsigned int) arr_7 [(unsigned char)14])), (((arr_0 [i_1] [(unsigned char)12]) ? (((/* implicit */unsigned int) var_11)) : (arr_3 [(short)8]))))), (((/* implicit */unsigned int) ((signed char) arr_1 [i_1] [i_1])))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_5 = 1; i_5 < 10; i_5 += 3) /* same iter space */
    {
        arr_16 [i_5] [(short)5] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_5])) || (((/* implicit */_Bool) ((unsigned short) var_2))))))) / ((~(arr_8 [i_5 - 1] [i_5] [i_5 - 1] [i_5])))));
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_23 [i_5 + 2] [i_5] [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_7])) ? (((/* implicit */unsigned int) min((var_11), (var_3)))) : (max((((/* implicit */unsigned int) arr_17 [i_5 + 3] [i_5])), (arr_3 [8LL]))))), (((/* implicit */unsigned int) var_4)))))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_12 [i_5 + 1]))) ? (((long long int) arr_12 [i_5 + 2])) : (((/* implicit */long long int) (~(var_7))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_9 = 1; i_9 < 10; i_9 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_20 [i_9 - 1] [8] [i_9 + 2])) : (var_3)))) ? (((((/* implicit */int) var_5)) / (arr_12 [i_9 + 2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (min((((/* implicit */unsigned long long int) var_11)), (arr_21 [i_9 - 1] [6U] [6U] [i_9 + 3]))))))));
        var_25 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_17 [i_9 + 3] [i_9 + 2])), (arr_5 [12U]))))))), (max((arr_8 [(unsigned short)0] [i_9] [(unsigned char)6] [i_9 + 1]), (arr_2 [(signed char)0])))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((signed char) (short)-5152)))));
        arr_26 [i_9] = ((/* implicit */_Bool) var_0);
    }
    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((long long int) var_10)))));
    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (~((+(var_11))))))));
}
