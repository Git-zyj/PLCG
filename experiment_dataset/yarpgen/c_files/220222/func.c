/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220222
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((unsigned char) var_1)))) ? (((/* implicit */unsigned long long int) min(((+(860268319))), (((/* implicit */int) ((arr_0 [i_1]) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))))))))) : (max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (var_11)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned int) max((var_16), (var_5)));
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((520093696) << (((((/* implicit */int) var_7)) - (81)))))) ? (((int) 5155441536614131497LL)) : (((/* implicit */int) var_2))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        for (long long int i_5 = 1; i_5 < 10; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_14 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5])), (arr_15 [i_5 + 1] [i_5 - 1] [i_5 + 1])))) && (((/* implicit */_Bool) ((((unsigned long long int) var_7)) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) | (var_8)))))))));
                    var_19 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) var_7)), (((long long int) var_14)))), (((/* implicit */long long int) ((unsigned char) var_1)))));
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */unsigned int) var_11);
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))))));
    var_22 = ((/* implicit */short) var_13);
}
