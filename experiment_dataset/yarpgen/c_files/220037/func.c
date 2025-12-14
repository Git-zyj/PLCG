/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220037
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)194)) ? ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) (unsigned short)20524))))))) : ((((-2147483647 - 1)) & (max((((/* implicit */int) (unsigned short)20520)), (132919981)))))));
                    arr_10 [i_0] = ((/* implicit */unsigned char) ((int) max((((/* implicit */short) (_Bool)1)), ((short)32748))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)62))))), (((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_2])))))))) ? (((((/* implicit */_Bool) ((var_13) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189)))))) ? (((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [10ULL] [(signed char)7] [i_0])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((arr_14 [i_3] [i_4]), ((+(arr_13 [i_4]))))))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_14 [i_4] [14])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (14683036003626997631ULL))))))));
            }
        } 
    } 
    var_22 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
}
