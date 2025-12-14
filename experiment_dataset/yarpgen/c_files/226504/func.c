/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226504
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) var_0);
                var_21 *= ((/* implicit */unsigned int) var_0);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
    /* LoopNest 3 */
    for (short i_2 = 4; i_2 < 22; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (unsigned char i_4 = 2; i_4 < 23; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_18 [i_6] [i_6] [i_6] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_14 [i_2 - 4] [i_2] [i_2]), (((/* implicit */unsigned int) var_3))))), (min((((/* implicit */long long int) (signed char)18)), (-261551559873627970LL)))))) ? (((/* implicit */long long int) arr_7 [i_2] [i_2 - 3])) : (min((((/* implicit */long long int) (~(arr_16 [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2] [i_2] [i_2])))), (arr_8 [i_6])))));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((long long int) arr_10 [i_2 - 3] [i_2 - 3])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_8 = 2; i_8 < 23; i_8 += 3) 
                        {
                            var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                            var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_8 + 2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_8))))))) : (((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_3] [i_4 - 1] [i_8 + 2])) ? (min((arr_14 [i_2] [i_3] [i_2]), (var_14))) : (var_14)))));
                        }
                        var_26 &= ((/* implicit */_Bool) var_8);
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_3] [i_4] [i_7])) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-59))))) & ((~(16099882121138327959ULL))))) : ((~(arr_13 [i_3] [i_4 - 2] [i_7])))));
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_8) : (2047LL)))) ? (((/* implicit */int) arr_12 [i_4] [i_4 - 2] [i_4] [i_4])) : (-1175955364));
                        var_29 += (~(((/* implicit */int) arr_19 [8U] [i_4 - 2])));
                        var_30 = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)47177));
                        var_31 = ((/* implicit */short) (~(arr_23 [i_2 + 3] [i_2] [i_4 + 2] [i_9 + 1])));
                        var_32 |= ((/* implicit */long long int) ((arr_7 [i_3] [i_9 + 1]) ^ (((/* implicit */unsigned int) 312862697))));
                    }
                    arr_26 [i_2 - 2] [i_2 - 2] [i_2] = ((/* implicit */unsigned int) arr_19 [i_2] [i_2]);
                    arr_27 [i_4] [i_3] [i_3] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 261551559873627981LL)) ? ((~(max((arr_7 [i_2] [(signed char)22]), (((/* implicit */unsigned int) var_19)))))) : (((((/* implicit */_Bool) arr_10 [i_2 - 3] [i_2 - 4])) ? (arr_10 [i_2 + 2] [(short)17]) : (arr_10 [i_2 + 3] [i_2])))));
                }
            } 
        } 
    } 
}
