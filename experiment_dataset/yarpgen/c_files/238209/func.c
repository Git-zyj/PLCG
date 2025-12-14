/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238209
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
    var_13 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) 8106507962321925679ULL)) ? (((/* implicit */int) var_1)) : ((-2147483647 - 1)))), (((/* implicit */int) max(((short)-4674), (((/* implicit */short) (signed char)7))))))), (((/* implicit */int) ((((((/* implicit */int) (unsigned short)1023)) >> (((/* implicit */int) var_0)))) == (((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) max((((((/* implicit */int) (unsigned short)40588)) == (((/* implicit */int) arr_3 [i_0] [i_0])))), (((((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9794))))) > (arr_2 [i_0] [i_0])))));
                var_14 = ((/* implicit */long long int) (unsigned short)24);
                arr_6 [11ULL] [4U] [i_1] = var_10;
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_2);
            }
        } 
    } 
}
