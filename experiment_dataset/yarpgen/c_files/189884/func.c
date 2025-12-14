/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189884
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [(unsigned short)6] [6U] &= ((/* implicit */unsigned int) ((signed char) min((((/* implicit */int) ((signed char) var_2))), (max((1042534713), (((/* implicit */int) (_Bool)1)))))));
                var_18 = ((/* implicit */int) (-(min((((((/* implicit */_Bool) 1418543814U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (4405872905636365731ULL))), (((/* implicit */unsigned long long int) min((arr_2 [(unsigned char)5] [i_1]), (var_8))))))));
                var_19 = ((/* implicit */signed char) 4405872905636365731ULL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (signed char i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            {
                arr_9 [i_2] [i_3] = ((/* implicit */signed char) min(((~(((/* implicit */int) var_5)))), ((~(((/* implicit */int) (unsigned char)152))))));
                var_20 *= ((/* implicit */signed char) (+(min((((/* implicit */int) (signed char)126)), ((+(-234233708)))))));
                var_21 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_8 [15ULL] [2ULL] [i_3])), (var_3)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) arr_14 [i_4] [i_5] [i_5]);
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    arr_17 [i_4] [i_4] [(signed char)20] = (+(((/* implicit */int) arr_11 [i_6])));
                    arr_18 [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_13 [i_6] [(unsigned short)8]);
                }
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    arr_21 [i_4] [i_7] = ((/* implicit */unsigned char) (-(((arr_16 [i_4] [i_5] [i_7] [1]) ? (((/* implicit */int) arr_16 [i_4] [i_5] [i_7] [i_7])) : (((/* implicit */int) arr_16 [(_Bool)1] [i_5] [i_5] [i_5]))))));
                    arr_22 [(signed char)19] [(short)8] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) (signed char)-120)), (14040871168073185885ULL)))));
                    var_23 = ((/* implicit */int) max((8791153359666738977ULL), (((/* implicit */unsigned long long int) (signed char)120))));
                    var_24 -= ((/* implicit */unsigned char) max((var_10), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_11 [i_7])), (var_15)))))))));
                }
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (signed char)126))));
            }
        } 
    } 
}
