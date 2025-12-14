/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242479
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
    for (int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 2])) ^ (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)1848)) : (((/* implicit */int) var_10)))))) ^ (max((((((/* implicit */_Bool) (short)8697)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (unsigned short)13814)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                            var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (((((/* implicit */_Bool) (signed char)110)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13822)))))))) && ((!(((/* implicit */_Bool) arr_2 [i_1 - 1]))))));
                        }
                    } 
                } 
                var_13 += ((/* implicit */int) min((((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned int) arr_1 [(short)6])), (0U))))), (((unsigned long long int) ((((/* implicit */int) (unsigned short)65523)) / (((/* implicit */int) (unsigned short)51697)))))));
                arr_9 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) ((arr_7 [i_0] [(short)5] [i_0] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_2)))))));
            }
        } 
    } 
    var_14 -= ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 3; i_6 < 13; i_6 += 1) 
            {
                {
                    var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned long long int) (unsigned short)13823)) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_6])) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))) ? (((/* implicit */int) ((_Bool) (signed char)35))) : (((/* implicit */int) arr_12 [i_6]))));
                    var_16 = ((/* implicit */unsigned long long int) var_0);
                    var_17 = ((/* implicit */short) max((((_Bool) (unsigned short)28454)), (((_Bool) (unsigned short)50078))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_7))));
}
