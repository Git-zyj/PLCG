/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41345
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */unsigned int) var_1))))) ? (((((((/* implicit */int) var_9)) + (2147483647))) >> (((arr_1 [i_0] [i_1]) + (660857291))))) : (((((-2038613157) + (2147483647))) << (((4884934709718700252ULL) - (4884934709718700252ULL)))))))), (max((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) 4884934709718700252ULL)) ? (var_7) : (((/* implicit */unsigned int) var_15))))))));
                var_16 = ((/* implicit */short) arr_4 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            {
                var_17 *= ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
                var_18 = ((/* implicit */int) max((arr_10 [i_2] [i_3]), (((/* implicit */unsigned int) ((((/* implicit */long long int) (~(arr_10 [i_2] [5ULL])))) != (arr_9 [i_2] [(_Bool)1]))))));
                var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((short) var_5))), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), (max((13561809363990851363ULL), (((/* implicit */unsigned long long int) arr_10 [i_2] [(short)15]))))))));
                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
            }
        } 
    } 
}
