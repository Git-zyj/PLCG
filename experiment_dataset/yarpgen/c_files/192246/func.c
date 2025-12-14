/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192246
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
    var_17 = ((/* implicit */unsigned short) (~(var_16)));
    var_18 = min((var_16), (((/* implicit */int) max((((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) var_8)))), (var_4)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 1416216945U))) ? ((~(2147483640))) : (((/* implicit */int) ((unsigned char) -2147483634)))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551603ULL))))) != ((+(((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_2 + 1])) : (((((/* implicit */_Bool) (signed char)-126)) ? (var_7) : (((/* implicit */int) (unsigned char)247))))));
                var_21 = (_Bool)1;
                var_22 *= ((/* implicit */short) ((unsigned char) (~(8461104736683011087ULL))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) (signed char)127);
                            var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) ((unsigned char) -2147483629))) : (((/* implicit */int) (unsigned char)15))));
                        }
                    } 
                } 
            }
            arr_17 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_16))));
        }
        arr_18 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
    }
    var_24 = ((/* implicit */short) var_16);
    var_25 ^= ((/* implicit */_Bool) var_0);
}
