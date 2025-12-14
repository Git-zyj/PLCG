/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213819
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
    var_16 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_1))))), (((unsigned long long int) 2669791299U))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (signed char)121))))))) : ((((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (short)1)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) (signed char)-122)), (((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1 + 1])) ? (((/* implicit */long long int) arr_0 [i_0])) : (var_4))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(signed char)8] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (arr_0 [i_0]))))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)7702))) >= (1457214022U)))), (var_8)))) ? (((/* implicit */long long int) min((arr_0 [i_0]), ((((_Bool)1) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25)))))))) : (((long long int) arr_3 [i_1] [i_1] [i_1 - 1]))));
                arr_9 [i_0] [i_1 + 2] = ((/* implicit */_Bool) (-(4809584913482253327ULL)));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_17 -= ((/* implicit */signed char) ((_Bool) 1625175997U));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-114)) ? (18446744073709551592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3)))));
                        }
                    } 
                } 
                var_19 = var_2;
            }
        } 
    } 
    var_20 = var_12;
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((var_9) / (-393083312275570739LL))) >= (((/* implicit */long long int) ((unsigned int) var_0)))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
}
