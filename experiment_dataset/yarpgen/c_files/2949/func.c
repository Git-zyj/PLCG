/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2949
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
    var_12 = ((/* implicit */long long int) (~(max((var_8), (-385704541)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) min((var_13), ((~(((/* implicit */int) var_6))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */_Bool) ((long long int) 537547766));
                    var_15 = ((/* implicit */unsigned char) var_4);
                    arr_9 [i_0] = ((/* implicit */int) var_4);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */short) ((unsigned char) var_2));
                        arr_12 [3U] [3U] [i_1] [i_2 - 1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) var_2)))));
                        var_17 &= ((/* implicit */int) var_3);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            arr_17 [i_0 + 2] [i_0 + 2] [i_2] [i_3] [i_0] [i_3] [4] = (+(((unsigned long long int) -537547766)));
                            var_18 = ((/* implicit */unsigned long long int) var_8);
                            var_19 = -537547765;
                        }
                    }
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                    {
                        var_20 = var_11;
                        var_21 = ((/* implicit */int) (+(var_0)));
                    }
                }
            } 
        } 
    }
    for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_7 = 3; i_7 < 17; i_7 += 3) 
        {
            arr_25 [(signed char)5] [i_7] [i_7] = (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), ((short)28512))))))));
            var_22 += min((((/* implicit */unsigned long long int) ((short) (unsigned char)114))), (min((var_2), (((/* implicit */unsigned long long int) var_10)))));
        }
        for (int i_8 = 3; i_8 < 18; i_8 += 3) 
        {
            var_23 = ((/* implicit */long long int) 67108736);
            var_24 = ((/* implicit */unsigned int) max((var_4), (((/* implicit */short) (unsigned char)151))));
        }
        arr_28 [13ULL] [i_6] = ((/* implicit */unsigned int) var_4);
    }
}
