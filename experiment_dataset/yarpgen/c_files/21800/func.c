/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21800
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
    var_10 = ((/* implicit */signed char) ((_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)255))), (((unsigned long long int) var_1)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47709)) ? (6U) : (arr_1 [i_0])))), (((((/* implicit */_Bool) arr_1 [(signed char)7])) ? (9007199254740991ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1 + 1]))))))), (((unsigned long long int) min((var_5), ((unsigned short)26505)))))))));
                var_12 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_0) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) && (((/* implicit */_Bool) ((int) arr_2 [i_1] [i_1]))))) ? (((unsigned long long int) min((var_6), (((/* implicit */unsigned short) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_0])) : (var_4))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    arr_14 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) ((arr_11 [i_2] [i_2]) <= (((/* implicit */unsigned long long int) 965924339))))) : (((/* implicit */int) ((unsigned short) (unsigned short)17829)))));
                    var_13 ^= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (6296697464774945904ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))));
                    arr_15 [(signed char)13] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 4ULL)))))) * (((((/* implicit */_Bool) (unsigned short)47718)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [10]))) : (arr_6 [i_2] [(unsigned short)9])))));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_7)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (288230367561777152LL)))));
                }
                var_15 = min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)186)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_9)))))) - (min((((/* implicit */unsigned long long int) var_8)), (1842806262845826946ULL))))));
                var_16 = ((min((min((2867403586U), (((/* implicit */unsigned int) (unsigned short)11765)))), (((((/* implicit */_Bool) arr_13 [(signed char)13] [(signed char)13] [i_2] [(signed char)13])) ? (arr_13 [i_2] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) == (((unsigned int) min((arr_13 [i_3] [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) (signed char)-113))))));
            }
        } 
    } 
}
