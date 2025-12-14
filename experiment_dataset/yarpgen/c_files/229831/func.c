/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229831
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
    var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (min((((/* implicit */unsigned int) (unsigned short)0)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_12)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)65510)) : (var_2)))) : (((arr_3 [i_0]) << (((var_1) - (880697237U)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) var_13);
                            var_15 *= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_4 [14U] [i_1] [i_0]))))));
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((min((((/* implicit */long long int) ((((/* implicit */int) (short)32767)) / (var_2)))), (((var_13) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) == (((/* implicit */long long int) min((((var_3) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)2)))), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned short)19)))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (((~(var_7))) | ((~(var_7))))))));
}
