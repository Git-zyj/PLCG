/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217540
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 = ((((/* implicit */_Bool) 8386585137983517244ULL)) ? (411950884704890959LL) : (((/* implicit */long long int) 3855112386U)));
                var_15 = min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)125)) && (((/* implicit */_Bool) (unsigned short)22925)))))) : (arr_2 [i_0] [i_0])))), (max((max((3693752168072286991LL), (3693752168072286991LL))), (((/* implicit */long long int) (_Bool)0)))));
                var_16 = ((/* implicit */unsigned short) ((min((var_1), (arr_1 [i_0]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1623673830)) ? (((/* implicit */int) ((((/* implicit */_Bool) 1623673830)) && (((/* implicit */_Bool) (unsigned char)116))))) : (((/* implicit */int) (unsigned char)90)))))));
                var_17 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_5 [i_0] [i_1]) : (arr_5 [i_0] [i_1]))) : (arr_5 [i_0] [i_1])));
                var_18 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -3693752168072286991LL)), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (4333289802577283212ULL)))))) && (((/* implicit */_Bool) max((arr_1 [i_1]), (arr_1 [i_0])))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((8388608) + (((/* implicit */int) (unsigned short)57405))))) && (((/* implicit */_Bool) var_2))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) var_10))))) - (((var_9) ? (var_8) : (((/* implicit */unsigned long long int) -1623673830))))))));
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((var_2) % (((/* implicit */int) var_9))))), (var_8)));
    var_21 = ((/* implicit */unsigned long long int) var_11);
}
