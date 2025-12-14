/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215098
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((_Bool) (~(((/* implicit */int) ((unsigned short) var_15))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_0] [i_4])) : (((/* implicit */int) (unsigned short)52782)))))), (((((/* implicit */int) ((signed char) arr_9 [i_0] [i_1] [8ULL] [i_4] [i_4]))) >> (((max((((/* implicit */unsigned long long int) var_15)), (var_2))) - (16230561903641938903ULL)))))));
                                arr_12 [i_3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1])) : (((/* implicit */int) (signed char)126))))));
                                var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)23009)));
                                arr_13 [i_4] [(_Bool)1] [i_2] [i_1] [i_0] = (!(((/* implicit */_Bool) max((arr_11 [i_1 + 1]), (((/* implicit */unsigned short) arr_1 [i_1] [i_1 + 3]))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (signed char)-29))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            {
                var_21 = ((unsigned short) (_Bool)1);
                arr_18 [i_5] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) <= (18446744073709551615ULL))))) * (((((/* implicit */_Bool) (unsigned short)16383)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))));
                var_22 = arr_17 [i_5] [i_6];
                var_23 = ((/* implicit */unsigned short) arr_17 [(signed char)7] [i_5]);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min((var_24), (var_6)));
}
