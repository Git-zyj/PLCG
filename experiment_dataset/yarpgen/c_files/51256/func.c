/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51256
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
    var_19 ^= ((((((/* implicit */_Bool) max((15U), (((/* implicit */unsigned int) var_8))))) ? (max((((/* implicit */unsigned int) var_6)), (36U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) & (((/* implicit */unsigned int) ((/* implicit */int) (((~(4294967267U))) <= ((+(var_10))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_8)), (arr_1 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) || ((!(((/* implicit */_Bool) 4294967257U)))))))) : (var_4)));
                    var_20 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (_Bool)1)), (4294967257U))), (((/* implicit */unsigned int) min((arr_2 [14] [i_1] [i_2]), (((/* implicit */unsigned char) ((arr_1 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))));
                    var_21 *= ((/* implicit */unsigned int) ((long long int) (+(arr_5 [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 3; i_3 < 11; i_3 += 3) 
    {
        arr_9 [4ULL] [4ULL] |= ((/* implicit */unsigned short) (!(arr_3 [i_3])));
        arr_10 [i_3] [i_3] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_3] [i_3] [i_3]))))) ? ((~(((/* implicit */int) arr_4 [i_3] [4LL] [i_3])))) : (((/* implicit */int) arr_4 [i_3] [i_3] [i_3])));
        var_22 ^= ((/* implicit */int) 3632493431U);
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned int) arr_12 [i_3] [i_7]))), (max((min((arr_0 [i_5]), (((/* implicit */long long int) arr_2 [i_3 + 3] [i_4] [i_5])))), (((/* implicit */long long int) ((int) var_2))))))))));
                            arr_23 [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_21 [i_3 + 3] [i_4] [i_5] [i_3 + 2] [i_3])) ? (((/* implicit */int) arr_18 [i_3] [(signed char)2] [i_3] [i_3 - 2] [i_3])) : (arr_11 [i_3] [i_3])))));
                        }
                    } 
                } 
            } 
            var_24 *= ((/* implicit */short) arr_0 [i_3]);
            arr_24 [i_3] = ((/* implicit */int) (((+(min((var_3), (((/* implicit */long long int) arr_4 [i_3] [i_4] [i_4])))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_18 [i_3] [i_3] [i_3] [i_3] [1ULL]))))));
        }
    }
    var_25 &= ((/* implicit */int) ((short) ((unsigned char) (!(((/* implicit */_Bool) var_18))))));
    var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) ((_Bool) var_18)))) > (((/* implicit */int) var_5))));
}
