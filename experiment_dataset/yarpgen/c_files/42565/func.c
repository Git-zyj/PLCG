/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42565
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
    var_12 = ((/* implicit */unsigned short) (signed char)-74);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 - 4] [i_1] [i_1 + 2])) / (((/* implicit */int) arr_3 [i_0 - 4] [i_1] [i_1 - 1]))));
                    arr_7 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [(unsigned char)6] [i_0 - 1]))));
                }
                arr_8 [i_0 - 3] [(unsigned char)8] |= ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)74)) : (arr_2 [i_1 + 4]))))) < (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [11ULL] [3ULL]))) ^ (-8196628724587855997LL))) < (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0 - 1] [14LL] [i_0 - 1]))))))))));
                var_14 = ((/* implicit */_Bool) arr_0 [i_0]);
                arr_9 [i_0 + 1] [i_0] [i_1] = ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0 - 4]))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (arr_2 [i_0]) : (((/* implicit */int) var_3)))) >> (((((unsigned int) arr_2 [(_Bool)0])) - (1388367524U)))))) : (((unsigned int) arr_4 [i_0] [i_1 + 2])));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_3)) % (((/* implicit */int) (signed char)-74))))) ^ (max((var_6), (((/* implicit */long long int) (signed char)98))))));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((unsigned int) arr_12 [i_3])) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)98)))))) ? (((var_9) - (4178075155U))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) arr_14 [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2949))) : (var_9)))))));
                var_17 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_3 + 1]))));
                arr_16 [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 3630036954U)))))));
            }
        } 
    } 
}
