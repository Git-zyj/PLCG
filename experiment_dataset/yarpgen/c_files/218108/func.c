/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218108
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) -4265441933195595434LL))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) 2147483639)), (356463685U)))) : (min((max((4265441933195595433LL), (-4265441933195595422LL))), ((+(4265441933195595422LL)))))));
                    arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (short)-27900))) ? ((~(4265441933195595423LL))) : (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (signed char)-1))))))));
                    arr_12 [i_0] [i_0] [i_0] = min((((/* implicit */long long int) ((short) (signed char)1))), (min((((/* implicit */long long int) (signed char)0)), (-4265441933195595420LL))));
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((long long int) 1126370919)), (((/* implicit */long long int) 173233975))))) ? (((/* implicit */int) ((signed char) (short)9280))) : (((/* implicit */int) (signed char)-34))));
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) (~(((unsigned int) (short)16368)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) (unsigned short)65515)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18753))))));
    var_14 = ((/* implicit */unsigned char) (~(((int) ((unsigned long long int) 4265441933195595423LL)))));
}
