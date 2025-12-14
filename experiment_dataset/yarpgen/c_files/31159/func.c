/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31159
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
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((max((max((((/* implicit */unsigned int) (_Bool)1)), (arr_8 [0] [i_1] [i_1] [i_1] [3LL] [i_1]))), (((/* implicit */unsigned int) ((int) 2517740906U))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 - 1])) >> (((((/* implicit */int) var_3)) + (120))))))));
                        arr_10 [i_0 + 3] [i_1] [i_2] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((3800624595U) % (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) <= (((/* implicit */unsigned int) max((var_0), (((/* implicit */int) arr_3 [i_0] [i_0]))))))))) / (((((/* implicit */_Bool) 494342700U)) ? (2517740906U) : (1777226388U)))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 23; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                for (unsigned char i_6 = 2; i_6 < 22; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(unsigned short)8] [i_4 + 1] [4U])) ? (((/* implicit */int) arr_6 [i_4] [i_4] [i_4 - 1] [i_5])) : (((/* implicit */int) var_2))))) ? ((~(arr_4 [12U]))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6]))))))));
                        var_22 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((unsigned int) 31)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5] [i_6])))))))) >> (((((((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) + (var_12))) | (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 + 2] [i_0] [i_0 - 1]))))) + (3497684313541083815LL)))));
                    }
                } 
            } 
        } 
        arr_21 [i_0] = ((/* implicit */unsigned int) arr_4 [(unsigned short)16]);
        arr_22 [i_0] [i_0 + 2] = ((/* implicit */int) arr_13 [i_0] [i_0]);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        arr_26 [22ULL] [i_7] = ((/* implicit */unsigned short) arr_6 [i_7] [i_7] [(_Bool)1] [5U]);
        var_23 += ((((/* implicit */_Bool) min((arr_8 [i_7] [i_7] [i_7] [(_Bool)1] [17LL] [i_7]), (arr_8 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) ? (((int) (!(((/* implicit */_Bool) (unsigned char)198))))) : (((/* implicit */int) (signed char)18)));
    }
}
