/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19953
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) max(((signed char)-72), (((/* implicit */signed char) var_11))))))) < (((/* implicit */int) ((_Bool) (_Bool)1)))));
                var_13 = (~(((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? ((~(((/* implicit */int) arr_4 [i_0] [18])))) : (((/* implicit */int) ((var_8) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-28661)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            {
                arr_12 [2] [i_3] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_2]), (arr_0 [i_3])))) ? (((/* implicit */int) max((arr_0 [i_2]), (arr_0 [i_2])))) : (((/* implicit */int) max((arr_0 [i_3]), (arr_0 [i_2]))))));
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [(unsigned char)17]), (((/* implicit */unsigned int) var_1))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_11 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_1))) == (((/* implicit */int) arr_5 [i_3])))))) : (max((((unsigned int) var_2)), (var_6))));
            }
        } 
    } 
}
