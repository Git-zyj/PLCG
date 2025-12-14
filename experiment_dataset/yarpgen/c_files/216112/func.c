/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216112
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((max((((unsigned int) var_7)), (((/* implicit */unsigned int) (~(var_0)))))) % (max((((/* implicit */unsigned int) var_2)), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (426877747U)))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_2 - 3]);
                    var_13 = ((((/* implicit */_Bool) 3868089557U)) ? (1143846566) : (((/* implicit */int) (!(((/* implicit */_Bool) min((-1143846577), (((/* implicit */int) (_Bool)1)))))))));
                    arr_9 [i_0] = ((/* implicit */long long int) arr_4 [i_2]);
                    var_14 = ((/* implicit */_Bool) (-((~(3470386237U)))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_6 [i_0]))))))) : (max((min((-1143846595), (((/* implicit */int) (short)0)))), (((/* implicit */int) arr_0 [i_2] [i_1]))))));
                }
                for (signed char i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((426877747U) % (3868089557U))))))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) % (((/* implicit */int) (signed char)(-127 - 1)))));
                }
                for (signed char i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_16 [i_0]))))));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (-(min((min((var_12), (((/* implicit */unsigned long long int) 1906263140)))), (((/* implicit */unsigned long long int) ((signed char) (signed char)-127))))))))));
                }
                var_17 = ((/* implicit */long long int) ((max((arr_7 [i_0] [i_1] [i_1] [i_0]), (arr_7 [i_0] [i_0] [i_1] [i_1]))) % (((/* implicit */int) var_8))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (~(max((((((/* implicit */int) var_8)) % (((/* implicit */int) var_6)))), (((/* implicit */int) (short)-8890))))));
}
