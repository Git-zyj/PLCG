/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33917
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) | (arr_1 [i_0] [i_1]))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_0 [i_0 - 2])), (arr_4 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((260616021) >> (((/* implicit */int) (_Bool)1)))) >= (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0])))))))) : (((((/* implicit */_Bool) ((arr_0 [i_0]) ? (arr_2 [i_0 + 1] [4U]) : (((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) arr_3 [(_Bool)1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) 458986299)) : (16376469572601831878ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 458986286))) ? (((/* implicit */unsigned long long int) ((255) ^ (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))))) : (((unsigned long long int) max((16376469572601831853ULL), (((/* implicit */unsigned long long int) (signed char)49)))))));
                arr_6 [i_0 - 2] [i_0] [(short)16] = max((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 2])) ? (arr_1 [i_0 + 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned char)15] [i_0 - 1]))))), (((/* implicit */unsigned long long int) arr_4 [i_1])));
            }
        } 
    } 
    var_13 = ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (var_0))) ? (((/* implicit */unsigned long long int) var_2)) : (((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) != (((/* implicit */unsigned long long int) var_2)));
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        for (unsigned short i_3 = 2; i_3 < 13; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) max((arr_2 [i_3] [i_3 + 1]), (((/* implicit */int) ((unsigned char) arr_2 [i_2] [i_3 + 3])))));
                    var_15 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) arr_1 [i_3] [i_4])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) ((unsigned char) ((_Bool) ((var_5) - (var_5)))));
}
