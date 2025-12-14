/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37838
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
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_13))));
                    arr_8 [i_0 - 3] [i_1] [i_2] [i_1] |= ((/* implicit */unsigned long long int) (((~(min((((/* implicit */int) var_8)), (arr_3 [i_1]))))) ^ (((/* implicit */int) var_7))));
                    arr_9 [i_0] = (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (var_2) : (5383612322471609834ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (898312753) : (((/* implicit */int) (unsigned short)0)))))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)65531)), ((-2147483647 - 1))))) ? (34084860461056LL) : (((/* implicit */long long int) min((638702418U), (((/* implicit */unsigned int) (unsigned short)51398))))))) % (((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) var_8)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((short) var_3));
}
