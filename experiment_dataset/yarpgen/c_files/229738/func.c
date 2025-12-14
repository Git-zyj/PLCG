/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229738
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (~((~(7863280073765667069ULL)))));
        var_17 = (!(((/* implicit */_Bool) (+(var_2)))));
    }
    var_18 -= ((/* implicit */long long int) (-(max((min((((/* implicit */unsigned long long int) (unsigned short)12288)), (10583463999943884546ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9)))))))));
    var_19 = ((/* implicit */short) max((min(((~(var_4))), ((-(24190353U))))), (min((max((((/* implicit */unsigned int) var_10)), (1156433084U))), (((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned short) (_Bool)0)))))))));
    var_20 = ((/* implicit */_Bool) min((var_20), ((!(((/* implicit */_Bool) (-((-(((/* implicit */int) var_10)))))))))));
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (signed char i_2 = 1; i_2 < 11; i_2 += 3) 
        {
            {
                var_21 = ((/* implicit */long long int) max((var_21), (min(((~(max((arr_4 [i_1] [i_1]), (((/* implicit */long long int) arr_1 [i_1])))))), (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) var_3)), (23U))))))))));
                /* LoopNest 2 */
                for (short i_3 = 4; i_3 < 12; i_3 += 4) 
                {
                    for (short i_4 = 3; i_4 < 10; i_4 += 3) 
                    {
                        {
                            arr_16 [i_3] [i_3 - 4] |= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 1833847446U))))));
                            arr_17 [0U] [i_2] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) (short)0))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_4))))))), (min(((~(5U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_3] [i_4 - 1]))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
