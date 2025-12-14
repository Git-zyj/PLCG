/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51495
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
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_1 [i_0 + 2])), ((unsigned char)199)))), (((1134907106097364992ULL) % (((/* implicit */unsigned long long int) 1307050718)))))));
        var_21 = ((((/* implicit */int) (!(arr_1 [i_0 - 1])))) - ((~(((/* implicit */int) (short)511)))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */signed char) arr_4 [i_1 + 1] [i_0 - 2] [i_0]);
            arr_8 [i_1] = ((/* implicit */_Bool) 6319489745818910863ULL);
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                var_22 -= ((/* implicit */unsigned int) ((long long int) ((arr_1 [i_1]) ? (arr_9 [i_0 + 3] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))));
                arr_11 [i_0] [i_0] [i_2] = ((/* implicit */int) ((6319489745818910836ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))));
            }
        }
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */signed char) -1940117492);
        var_23 = arr_12 [i_3] [i_3];
    }
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 22; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            {
                var_24 *= ((/* implicit */unsigned char) var_0);
                var_25 -= ((/* implicit */short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (arr_13 [i_4 + 1]))))) <= (min((((/* implicit */long long int) arr_19 [i_4 - 1])), (-2897994921681453636LL))))));
            }
        } 
    } 
}
