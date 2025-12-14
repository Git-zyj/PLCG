/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223428
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */_Bool) (-(((((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) <= (arr_3 [(_Bool)1] [i_1] [i_2])))) >> (((arr_3 [i_0] [i_1] [i_2]) - (10550343065897226600ULL)))))));
                    var_19 = ((/* implicit */int) arr_2 [i_0] [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        var_20 = ((/* implicit */short) ((((unsigned long long int) (short)-4768)) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [14U] [i_3] [i_3])) ? (((/* implicit */int) arr_2 [i_3] [i_3])) : (((/* implicit */int) (signed char)12))))) / (((long long int) (short)24127)))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2147483647), (((/* implicit */int) var_8))))) ? ((+(2147483647))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)19359)))))))) : (arr_3 [i_3] [i_3] [i_3])));
        var_22 = ((/* implicit */long long int) -748622705);
    }
    for (int i_4 = 1; i_4 < 17; i_4 += 1) 
    {
        arr_11 [i_4] [i_4 - 1] = ((/* implicit */unsigned int) max((var_10), (((/* implicit */short) arr_8 [i_4] [i_4 - 1]))));
        arr_12 [(_Bool)1] = ((/* implicit */unsigned char) var_3);
        var_23 = ((/* implicit */int) var_3);
        var_24 *= ((/* implicit */_Bool) min(((short)(-32767 - 1)), (((/* implicit */short) ((((/* implicit */int) arr_0 [i_4] [i_4])) < ((+(-370510961))))))));
    }
}
