/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235985
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
    var_16 = ((/* implicit */short) max((7207562141643342560ULL), (9404060788119339739ULL)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_17 *= ((/* implicit */short) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-18088)) : (((/* implicit */int) var_13))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_11 [i_4] [i_4] = ((/* implicit */short) (+((-(((/* implicit */int) arr_9 [i_1] [i_1] [i_1 - 1] [i_1 + 3] [i_3] [i_3]))))));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1 - 1])) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 2])) : (((/* implicit */int) arr_8 [i_1 + 3] [i_1 + 3]))))) ? ((+((~(((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) ((((/* implicit */int) (short)-32763)) > (((/* implicit */int) (short)16384))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((unsigned long long int) var_5));
}
