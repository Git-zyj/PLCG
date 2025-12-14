/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202869
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
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) (-(2147483647)))) : (1955192360536356857ULL)));
                arr_6 [i_0] = ((/* implicit */short) ((var_2) != (((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) || (((/* implicit */_Bool) 15212228296166837276ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (var_2))) : (((/* implicit */unsigned long long int) ((547062057U) << (((/* implicit */int) var_7)))))))));
                var_14 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)65))) ^ (min((15212228296166837276ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [(unsigned char)16])))))));
                arr_7 [6U] [(_Bool)1] [i_1] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) min(((short)-32757), (((/* implicit */short) var_5))))) ? (((((/* implicit */_Bool) 3912747172U)) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) (unsigned char)0)))) : (((arr_0 [(unsigned char)20] [11U]) ? (((/* implicit */int) (unsigned short)60686)) : (((/* implicit */int) (signed char)2)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_15 += ((/* implicit */_Bool) max(((-(min((459010682207849919ULL), (((/* implicit */unsigned long long int) (short)-16898)))))), (((/* implicit */unsigned long long int) min((arr_12 [i_2] [i_2] [8] [i_2]), (((/* implicit */unsigned int) ((_Bool) arr_13 [i_0] [(unsigned char)0] [i_0] [i_0] [i_0 - 2] [i_0]))))))));
                                var_16 += ((((/* implicit */_Bool) min((arr_12 [i_3 + 2] [i_3] [i_3 + 2] [i_0 - 3]), (arr_12 [i_3 - 1] [i_0 - 2] [i_3 + 2] [i_0 - 2])))) && (((/* implicit */_Bool) (~(2860550442U)))));
                                arr_16 [i_2] [i_1] [i_2] [i_3] [i_1] [i_1] [17U] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_14 [i_0 - 3] [i_2])), ((unsigned short)33923))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (~(1136842423U))))));
}
