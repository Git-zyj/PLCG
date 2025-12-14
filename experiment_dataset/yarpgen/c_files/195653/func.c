/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195653
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_2])))) : (var_9)));
                    arr_7 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [3ULL] [i_2] [i_2])) ^ (((/* implicit */int) (unsigned char)182))));
                    var_11 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))));
                    var_12 = ((/* implicit */_Bool) ((signed char) arr_5 [i_0 - 1] [(short)4] [i_2]));
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */int) (unsigned char)180)) >= (((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 1) 
        {
            for (long long int i_4 = 2; i_4 < 10; i_4 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [i_0 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 11; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [(short)0] [(short)0] [(short)0] [i_0] [i_0 + 1] [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_3] [i_0 - 1] [(signed char)8]))));
                                var_15 = ((arr_1 [(unsigned char)2]) == ((~(var_5))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_3 - 1] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(var_2)))) >> (((((var_2) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [2U] [i_3] [2U] [2U]))))) - (46ULL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 12; i_7 += 1) 
                    {
                        for (short i_8 = 2; i_8 < 12; i_8 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_4 [i_0] [(short)0]))))));
                                var_17 = ((/* implicit */unsigned int) arr_14 [i_0 + 1] [i_7] [(unsigned char)0] [i_3] [i_0 + 1] [i_0 + 1]);
                                var_18 = ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_7 - 1] [i_4 + 1] [i_0 + 1] [i_3 - 2]))));
                                var_19 -= ((/* implicit */unsigned int) arr_16 [i_0 + 1] [i_0] [i_0 - 1]);
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */long long int) (((-(((/* implicit */int) arr_24 [i_0] [i_0] [i_0])))) << (((arr_2 [i_0] [i_3] [5ULL]) + (8320424410510829737LL)))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned int) var_6);
}
