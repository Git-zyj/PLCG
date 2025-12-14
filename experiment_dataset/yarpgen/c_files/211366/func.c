/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211366
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) 3205367911U)))))) | (arr_1 [i_0])));
        arr_4 [6ULL] = ((/* implicit */signed char) (((((~(((/* implicit */int) arr_0 [i_0])))) + (2147483647))) >> (((/* implicit */int) ((arr_1 [i_0]) < (arr_1 [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 17; i_2 += 1) 
        {
            for (unsigned int i_3 = 2; i_3 < 17; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_1] [i_2 - 1] [i_3 - 1] = ((/* implicit */unsigned short) var_7);
                    arr_14 [(_Bool)1] [i_1] [i_1] [i_3 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)19099)) ? (((/* implicit */unsigned int) (-(((arr_9 [i_1] [i_1]) ? (arr_5 [i_1]) : (((/* implicit */int) arr_7 [i_1]))))))) : (max((((/* implicit */unsigned int) -288296595)), (((((/* implicit */_Bool) 288296582)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_5)))))));
                    var_10 = var_2;
                    arr_15 [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_1] [i_1])) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_11 [i_1] [i_2] [i_2]) + (9223372036854775807LL))) << (((var_0) - (1396475443730540489ULL)))))))))));
                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */_Bool) (short)32743);
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (-(var_5))))) ? ((+(var_2))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-32763)))))));
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_10 [i_1] [i_1] [i_1] [i_1]))) || (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 5470689805727230807ULL)) || (((/* implicit */_Bool) var_4))))))));
    }
    for (unsigned short i_4 = 3; i_4 < 16; i_4 += 2) 
    {
        var_13 *= ((/* implicit */unsigned int) (-2147483647 - 1));
        var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((int) 288296594))), (((((((/* implicit */unsigned long long int) -817446871)) % (var_0))) / (var_0)))));
        arr_19 [i_4] [0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 5090312813547465751LL)) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)2710)))))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [i_4 - 2]))) < (arr_18 [i_4 - 3] [i_4 - 3]))))) >= (((unsigned int) ((var_9) ? (var_0) : (((/* implicit */unsigned long long int) -1495691043)))))));
    }
    var_16 = ((/* implicit */signed char) (((-(var_1))) / (((/* implicit */unsigned int) 2001557183))));
}
