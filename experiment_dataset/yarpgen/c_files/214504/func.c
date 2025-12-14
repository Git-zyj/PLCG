/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214504
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) 96776299)) : (arr_0 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)41108)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))) : (arr_0 [i_0]))))));
                    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (signed char)-10))))))) : (((((/* implicit */_Bool) (unsigned short)24422)) ? (max((((/* implicit */long long int) var_9)), (-8816917014849839440LL))) : (((/* implicit */long long int) ((int) arr_1 [(_Bool)1]))))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 360972909)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24440)))))) ? (var_7) : (var_7)))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((((/* implicit */unsigned char) var_4)), (var_1))))));
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            {
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_7 [i_3]), (((/* implicit */signed char) ((((/* implicit */long long int) (-2147483647 - 1))) != (var_0))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [1LL])), ((unsigned short)24427)))) / ((+(((/* implicit */int) (unsigned short)24440))))))) : (((arr_8 [i_3]) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_3] [i_3] [(signed char)0] [i_4])) * (((/* implicit */int) var_9))))))))))));
                var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)41108))) || (((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_3])), (arr_4 [i_4]))))));
            }
        } 
    } 
}
