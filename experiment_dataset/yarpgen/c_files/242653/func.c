/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242653
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
    var_19 = ((/* implicit */unsigned int) (!(((var_18) <= (((/* implicit */unsigned int) ((/* implicit */int) ((-4727022054596710927LL) != (var_4)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_20 = arr_4 [i_0] [i_0];
                                arr_14 [i_2] [i_0] [i_4] = ((/* implicit */int) ((unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-112)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_3 [i_1] [i_1]))))) : (((/* implicit */int) (short)-26486)))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2] [i_4])) ? (14638481585394068721ULL) : (((/* implicit */unsigned long long int) (~(((arr_2 [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-4727022054596710927LL))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_0] [i_1] [i_1] [i_0] [i_0]))) == (-4727022054596710927LL)));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((signed char) var_15)))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_1] [i_1] [i_1] [i_7] [i_0] = ((/* implicit */short) arr_5 [i_7] [i_1]);
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                }
                arr_24 [8U] [i_0] = ((/* implicit */short) var_5);
            }
        } 
    } 
}
