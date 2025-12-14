/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244155
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) == (((unsigned int) var_9))));
    var_11 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_12 += ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (-2147483647 - 1))), (min((((/* implicit */unsigned int) (unsigned short)7522)), (arr_3 [i_0] [i_0 + 4] [i_1]))))), (max((((/* implicit */unsigned int) ((arr_2 [i_0]) & (arr_2 [i_1])))), (min((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))))));
                var_13 = ((/* implicit */unsigned long long int) (-(((var_8) >> (((arr_3 [i_0 + 4] [i_0 + 3] [i_0 - 1]) - (651256629U)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) (-(var_7)));
    /* LoopNest 2 */
    for (unsigned short i_2 = 3; i_2 < 14; i_2 += 3) 
    {
        for (unsigned short i_3 = 2; i_3 < 15; i_3 += 3) 
        {
            {
                arr_10 [(signed char)14] [i_3] = ((((/* implicit */_Bool) (+(4216323883U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2 - 3])) ? (arr_6 [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 1] [i_3 - 1] [i_2])))))) && (((/* implicit */_Bool) var_7)))))) : (arr_8 [i_2]));
                arr_11 [i_2] [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_2 - 2]))))), (((((/* implicit */_Bool) ((unsigned char) arr_6 [i_2] [i_3]))) ? (((((/* implicit */_Bool) 4093675391363577191ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [(unsigned char)15] [i_2 + 3]))) : (arr_8 [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))) : (arr_6 [i_2] [8LL]))))))));
            }
        } 
    } 
}
