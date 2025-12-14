/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225570
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)28672)) : (((/* implicit */int) var_7)))) % (((/* implicit */int) var_18))))) > (((unsigned int) min((((/* implicit */unsigned int) var_14)), (var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_2 [i_0]))))), (3071868636U)))) ? (((((/* implicit */_Bool) ((arr_0 [i_2]) ? (((/* implicit */int) arr_3 [20LL])) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0]), ((signed char)-39))))) : (((((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_0] [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4183974157U)) ? (1223098653U) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)14), (((/* implicit */unsigned char) (signed char)17))))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
                }
                var_21 = ((/* implicit */unsigned short) ((int) max((arr_4 [i_1 + 1] [i_0] [i_0]), (arr_4 [i_1 + 1] [i_0] [i_0]))));
                arr_8 [i_0] [i_1 + 1] = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) (_Bool)1)), (14064965621842170475ULL)))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (((_Bool)1) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (536870912U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (max((1590074923999456788LL), (((/* implicit */long long int) -7)))))) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
}
