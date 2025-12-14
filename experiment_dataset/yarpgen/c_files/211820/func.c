/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211820
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
    var_18 = ((/* implicit */signed char) (-((~((~(((/* implicit */int) (signed char)-57))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [(signed char)10] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) (signed char)-1))))) != (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-77)) || (((/* implicit */_Bool) arr_3 [i_3]))))))) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_3 - 1] [i_2])) ? (((/* implicit */int) arr_9 [i_3 + 3] [i_1] [i_2] [(signed char)14])) : (((/* implicit */int) arr_15 [i_0] [i_3 + 3] [i_2])))) : ((~(((((/* implicit */int) (signed char)-53)) - (((/* implicit */int) (signed char)24))))))));
                                arr_17 [i_0] [i_2] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) (+(max((((/* implicit */int) min(((signed char)32), (var_7)))), ((~(((/* implicit */int) arr_11 [(signed char)2] [(signed char)2] [i_2]))))))));
                                arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) min(((signed char)32), (arr_0 [i_2])))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) (signed char)76)))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) & (((/* implicit */int) min(((signed char)-106), (var_2))))))));
                                arr_19 [(signed char)14] [i_2] [i_2] [i_2] [i_0] = var_3;
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (signed char i_6 = 3; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (var_8)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [(signed char)2]))))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) max((arr_24 [i_0] [i_6] [i_5]), (var_5)))))))));
                            arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_6] = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_6])) : (((/* implicit */int) (signed char)-33)))), (((/* implicit */int) max((var_17), (var_3))))))));
                        }
                    } 
                } 
                arr_27 [i_0] [(signed char)1] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_15 [i_1] [i_1] [i_0])) % (((/* implicit */int) (signed char)-122))))));
            }
        } 
    } 
    var_20 = var_11;
}
