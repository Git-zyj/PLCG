/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204033
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) min(((unsigned char)24), ((unsigned char)231)))) ? (arr_3 [i_1] [i_0]) : (((/* implicit */unsigned int) (-(var_11)))))) : (((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)23)))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned long long int) ((long long int) ((-32949396) > (((/* implicit */int) (_Bool)1)))));
                    arr_10 [i_0] [i_1] [i_2] = max((((long long int) var_1)), (((/* implicit */long long int) 2147483647)));
                }
            }
        } 
    } 
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) min((max((var_8), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))))))) : (var_8)));
    var_14 = (short)-30564;
}
