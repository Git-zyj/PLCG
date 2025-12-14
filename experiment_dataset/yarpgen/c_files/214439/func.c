/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214439
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5449588627156172473ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (-(((/* implicit */int) ((short) (unsigned char)113))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (-1452208648) : (((/* implicit */int) (unsigned char)62))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 7; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */int) arr_5 [i_0] [i_2 - 2] [i_2]);
                                var_16 *= (signed char)5;
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_6);
}
