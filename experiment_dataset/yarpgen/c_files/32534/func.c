/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32534
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_10 &= (~(var_6));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), (((arr_2 [i_0]) ? (((/* implicit */int) arr_10 [i_2] [i_1] [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_2 [i_0]))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])))))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 2; i_5 < 15; i_5 += 4) 
            {
                {
                    var_12 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((unsigned short) arr_6 [i_0] [i_4] [i_5]))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) : (((arr_14 [i_5] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8192)))))))));
                    arr_16 [i_0] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_14 [i_4] [i_4 - 1])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1)))), (1521804080U)))) : (((((/* implicit */_Bool) min((arr_12 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_7))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7117552879293427609ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4 - 1] [i_5 - 2])))))));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 4; i_6 < 19; i_6 += 4) 
    {
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_9))))))))))));
        arr_20 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_3)) : (arr_19 [i_6]))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54852))))))))) >> (((((/* implicit */int) var_4)) - (33050)))));
        arr_21 [i_6 + 1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_19 [i_6]) / (((/* implicit */long long int) arr_17 [i_6] [i_6]))))) ? (arr_17 [i_6 - 2] [i_6 - 4]) : (arr_17 [i_6 - 4] [i_6 - 4])))) >= ((~(arr_19 [i_6 - 3])))));
    }
    var_14 = ((/* implicit */_Bool) var_7);
    var_15 = ((/* implicit */long long int) (signed char)119);
}
