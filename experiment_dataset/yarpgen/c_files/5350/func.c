/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5350
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(-1437107334638053121LL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)17924))))) : (max((var_1), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (min((((/* implicit */long long int) -81844240)), (var_3))))))));
                var_11 = ((/* implicit */int) min((min((arr_4 [i_0] [i_1]), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned char)207)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (+(((unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -1543172966579542410LL))))))))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            arr_11 [i_2 - 1] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_1) & (var_0)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))), (var_0)));
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (!(arr_7 [i_2])))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) << (((max((((((/* implicit */_Bool) var_8)) ? (-1543172966579542410LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (min((((/* implicit */long long int) var_9)), (arr_10 [i_2] [i_3] [i_2]))))) - (46849LL))))))));
            var_14 = ((/* implicit */signed char) var_7);
            var_15 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        }
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (-(((/* implicit */int) (short)-17924)))))));
    }
}
