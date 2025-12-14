/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25528
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
    var_10 |= ((/* implicit */unsigned short) min(((+(2615466587U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), ((unsigned short)26910)))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) < (var_8)))) : (((/* implicit */int) ((unsigned short) var_3))))))));
    var_11 = ((/* implicit */unsigned int) (unsigned char)107);
    var_12 = ((/* implicit */_Bool) (+(max((var_1), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (var_6))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 *= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [(signed char)4] [12])), (((unsigned long long int) arr_7 [i_3 + 1] [(unsigned short)10] [i_0 + 2]))));
                                arr_13 [i_2] [i_0 + 1] [i_2] [i_0] [i_4] [i_0] [i_4] = ((((/* implicit */_Bool) 1613043241)) ? (var_6) : (((/* implicit */long long int) ((var_8) % (953965335)))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */short) 1145438785);
            }
        } 
    } 
}
