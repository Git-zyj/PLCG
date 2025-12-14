/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51513
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
    var_11 = ((/* implicit */unsigned short) var_7);
    var_12 = ((/* implicit */unsigned long long int) var_8);
    var_13 |= ((unsigned int) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_3);
                                var_14 |= -7249207552275733287LL;
                                arr_14 [(unsigned char)18] |= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((((/* implicit */_Bool) var_4)) ? (2251418100532039609LL) : (((/* implicit */long long int) var_7)))) : (((((arr_1 [(_Bool)1]) + (9223372036854775807LL))) << (((/* implicit */int) arr_5 [i_2] [16ULL])))))));
                                var_15 = ((((/* implicit */_Bool) ((((arr_3 [i_0] [i_0] [i_0]) < (((/* implicit */long long int) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)27))))) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_0] [i_4]))))) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (var_2)))) ? (arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))))));
                                arr_15 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((long long int) -5074805883392690801LL))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_0]))) : ((-(15251601303758756355ULL))))) != (((/* implicit */unsigned long long int) max((arr_6 [i_1] [i_3] [i_4]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_4]))))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) max((((int) (unsigned short)52746)), ((-(((/* implicit */int) (unsigned short)52751)))))))));
                    arr_16 [i_0] = ((/* implicit */unsigned long long int) ((long long int) 0U));
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_2 [i_0] [i_5] [i_6]))));
                                var_18 = ((/* implicit */int) max((var_18), ((+(-45228809)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
