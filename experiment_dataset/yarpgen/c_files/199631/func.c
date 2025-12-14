/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199631
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32763))) <= (398472446U))))) != (((var_16) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3500613615U)) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))))));
        var_18 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        var_19 += ((/* implicit */_Bool) min((var_8), (((/* implicit */short) (signed char)-126))));
        arr_5 [(unsigned char)6] = ((/* implicit */_Bool) 5522571709741200596ULL);
    }
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (min((7U), (((/* implicit */unsigned int) (short)5589)))))))));
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 19; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                {
                    var_21 &= ((/* implicit */short) var_0);
                    arr_13 [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_2 + 4] [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 3])) : (((/* implicit */int) arr_6 [i_2 + 3] [i_2 + 4])))) <= (((/* implicit */int) arr_6 [i_2 + 3] [i_2 + 2]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) ((_Bool) var_15));
}
