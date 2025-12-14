/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244011
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_1] = ((((((/* implicit */int) (unsigned short)0)) < (((var_13) ^ (var_17))))) ? (((/* implicit */int) max(((unsigned short)65524), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65524)) == (((/* implicit */int) (unsigned short)20)))))))) : (((int) ((((/* implicit */_Bool) var_15)) ? (var_11) : (1748800670)))));
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65524)), (var_17)))) ? (((/* implicit */int) (unsigned short)65528)) : (((((var_13) + (2147483647))) << (((((var_17) + (1923964383))) - (15))))))), (((/* implicit */int) ((unsigned short) (unsigned short)65527)))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_6 [i_0] [i_2 - 1])) : (arr_0 [i_2 - 2])))) ? ((-(var_7))) : (min((((/* implicit */int) arr_6 [i_2] [i_2 + 1])), (arr_2 [i_2 - 2])))));
                    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_3 [i_2 - 1] [i_1])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 2) 
        {
            {
                arr_16 [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)788)) ? (-707640970) : (1103303328))))));
                arr_17 [i_4] = ((/* implicit */int) ((unsigned short) (unsigned short)36));
                var_20 = ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_6 [i_4 + 1] [i_3])))), (arr_0 [i_4 + 1])))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_4 [i_3] [i_3])))), ((!(((/* implicit */_Bool) (unsigned short)15684))))))) : (((/* implicit */int) (unsigned short)64753)));
            }
        } 
    } 
}
