/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237768
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_12 = arr_1 [i_0];
        var_13 -= ((unsigned short) ((((/* implicit */_Bool) arr_1 [6U])) ? (((/* implicit */int) (unsigned short)22330)) : (((/* implicit */int) arr_0 [i_0]))));
    }
    var_14 = ((/* implicit */long long int) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) -8309522952176764493LL))) || (((/* implicit */_Bool) -8309522952176764518LL))));
        arr_5 [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned short)58610))));
        arr_6 [i_1] = ((/* implicit */unsigned short) (short)-32756);
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_15 |= ((/* implicit */unsigned char) (((((-(((/* implicit */int) var_2)))) >= (((/* implicit */int) arr_2 [i_2] [i_2])))) ? (((long long int) (short)24075)) : (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) (signed char)91)), ((short)-1678)))) ^ (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_9 [i_2] [i_2])))))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            for (short i_4 = 1; i_4 < 15; i_4 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((long long int) (short)-7941)), (((/* implicit */long long int) arr_7 [i_3 - 1] [i_4 + 2]))))) ? (((/* implicit */int) (((-(((/* implicit */int) arr_9 [i_3 + 2] [i_2])))) > ((-(var_7)))))) : (((/* implicit */int) min((max((arr_15 [i_4]), (((/* implicit */unsigned char) arr_10 [i_2])))), (((/* implicit */unsigned char) arr_11 [(unsigned char)12] [i_3] [i_3])))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_3 + 2])) % ((~(((/* implicit */int) arr_8 [i_3 + 2]))))));
                }
            } 
        } 
    }
}
