/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197082
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [12U]))) * (var_6)))))))));
        var_20 = ((/* implicit */unsigned int) var_2);
        arr_5 [i_0] [i_0] = var_8;
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                {
                    arr_15 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_12)), (2147483647)))) ? (((/* implicit */unsigned long long int) -543145147)) : (max((((/* implicit */unsigned long long int) arr_3 [i_2])), (var_17)))));
                    var_21 |= -543145151;
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_20 [i_2] [i_2] = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))), (((((/* implicit */_Bool) arr_11 [14U] [14U])) ? (4194375296U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209)))))))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_19))))))))))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(8753837375188420363ULL)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-118)))))))) >> (((var_15) + (2112278401)))));
                                arr_21 [i_2] [i_2] [i_5] [i_4] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) 467421897)), (1429364071U)));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (((!(var_12))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((((/* implicit */_Bool) 543145123)) && (((_Bool) var_7))))))))));
                }
            } 
        } 
    } 
}
