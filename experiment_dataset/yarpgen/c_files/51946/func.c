/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51946
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
    var_19 = ((/* implicit */_Bool) var_13);
    var_20 &= ((/* implicit */unsigned short) ((var_9) > (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)0)), ((short)-8023)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_0])) - (16928510890166915524ULL))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) min((var_3), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 16928510890166915528ULL)) ? (1518233183542636116ULL) : (((/* implicit */unsigned long long int) 2147483647)))) > (min((var_10), (((/* implicit */unsigned long long int) (short)18806)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [8ULL] [(short)0] [(short)0] [i_3] &= ((/* implicit */unsigned long long int) (unsigned short)27657);
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)-1), ((short)-8023)))) ? (((/* implicit */int) ((_Bool) (unsigned short)5))) : (((/* implicit */int) (unsigned char)238)))))));
                    }
                    arr_13 [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 14725464905777905296ULL)) ? (((/* implicit */int) (unsigned short)65523)) : (((/* implicit */int) (short)18811)))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((-1709717838) + (((/* implicit */int) (short)18820)))), (-1709717857)))) & (3721279167931646333ULL)));
                }
            } 
        } 
    } 
}
