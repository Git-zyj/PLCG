/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248007
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
    for (short i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        var_12 = min(((short)0), ((short)4045));
        var_13 = ((/* implicit */short) ((((/* implicit */int) max((arr_0 [i_0] [i_0 - 3]), ((short)-32026)))) > (min(((-(((/* implicit */int) arr_3 [i_0 - 2])))), (((/* implicit */int) max((arr_1 [(short)10] [(short)3]), (arr_2 [(short)8] [i_0]))))))));
    }
    for (short i_1 = 4; i_1 < 15; i_1 += 3) 
    {
        var_14 = ((/* implicit */short) max((min((((((/* implicit */_Bool) (short)-18237)) ? (((/* implicit */int) (short)32752)) : (((/* implicit */int) (short)30720)))), (((/* implicit */int) arr_5 [i_1 - 1])))), (((/* implicit */int) arr_4 [i_1]))));
        arr_7 [i_1] = arr_4 [i_1];
    }
    for (short i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        arr_10 [(short)20] |= arr_8 [i_2];
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (short i_4 = 2; i_4 < 19; i_4 += 4) 
            {
                {
                    var_15 = ((/* implicit */short) (((~(((/* implicit */int) (short)10342)))) > ((+(((/* implicit */int) var_9))))));
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (~(max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_13 [i_4] [i_4])) : (((/* implicit */int) arr_9 [i_4])))), (((/* implicit */int) arr_14 [i_4 - 2])))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */short) max((var_17), (var_6)));
        /* LoopSeq 1 */
        for (short i_5 = 3; i_5 < 20; i_5 += 4) 
        {
            arr_17 [i_2] [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_16 [i_2] [i_2]))));
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    {
                        var_18 = ((/* implicit */short) (~(((/* implicit */int) var_6))));
                        arr_22 [i_2] [i_7] [i_2] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */int) (short)-32054)) > (((/* implicit */int) (short)-9423))));
                    }
                } 
            } 
        }
    }
    var_19 ^= ((/* implicit */short) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((var_8), (var_1)))) : ((~(((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((var_0), (var_3)))) : (((/* implicit */int) min((var_11), (var_9))))))));
}
