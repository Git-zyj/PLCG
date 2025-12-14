/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45045
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_2 [19U]) | (((long long int) var_11)))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (+((+(-1472419329372975527LL)))));
                var_12 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_1]))), (max((arr_5 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_5))))));
            }
        } 
    } 
    var_13 = var_8;
    var_14 ^= ((/* implicit */unsigned char) ((var_1) ^ (var_1)));
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-30508)))) * (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_14 [i_2] [i_3] [i_2] [i_2])) == (arr_5 [i_2] [i_4]))))) : ((-(((((/* implicit */_Bool) arr_12 [i_2] [i_3])) ? (var_1) : (((/* implicit */unsigned int) arr_0 [i_2])))))))))));
                    arr_16 [i_2] [i_4] [i_3] [i_4] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (15099389147078995879ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) || (((/* implicit */_Bool) arr_1 [i_3])));
                }
            } 
        } 
    } 
}
