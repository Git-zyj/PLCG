/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20293
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
    var_13 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((long long int) var_5)) : (min((var_7), (((/* implicit */long long int) var_3)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) 3470341660761866513ULL))))), (max((((/* implicit */long long int) arr_2 [i_2])), (arr_3 [i_1])))))) ? (((((unsigned long long int) 4294967289U)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22849))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((min((var_8), (((/* implicit */long long int) arr_6 [i_4 + 2])))) > (((((/* implicit */_Bool) arr_0 [i_3 + 4] [i_4 + 1])) ? (((/* implicit */long long int) arr_10 [i_2])) : (arr_3 [i_4 + 3])))));
                                var_16 += ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) (unsigned short)42664)))))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                                arr_18 [i_0] [i_2] [i_2] [i_4 + 2] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) (unsigned short)42664)) + (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (signed char)118))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
