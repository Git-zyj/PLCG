/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245571
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
    var_18 = ((/* implicit */signed char) var_11);
    var_19 *= ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((11255326781807311270ULL) << (((((/* implicit */int) var_8)) + (17442)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (min((7191417291902240353ULL), (((/* implicit */unsigned long long int) (signed char)-114))))))));
    var_20 ^= ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((arr_4 [i_0] [i_0] [i_1]) | (1459798317007291795LL))) : (((1459798317007291805LL) & (1459798317007291805LL))))) & (((/* implicit */long long int) var_5))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_3 [(_Bool)1] [i_1] [i_1]))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_23 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) 3697902538308535656LL)) && (((/* implicit */_Bool) ((unsigned short) arr_2 [i_0]))))))));
                    arr_8 [i_0] [i_1] [i_2] &= ((/* implicit */unsigned short) ((min((((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)15264)) <= (var_5)))))) & (((((/* implicit */_Bool) arr_0 [i_2] [(_Bool)1])) ? (((/* implicit */int) var_9)) : (((int) 11255326781807311276ULL))))));
                }
                for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 22; i_4 += 2) 
                    {
                        for (signed char i_5 = 1; i_5 < 23; i_5 += 2) 
                        {
                            {
                                arr_17 [i_4] [i_1] [i_3] [i_4] [i_4 - 3] [i_3] = ((/* implicit */unsigned short) var_4);
                                var_24 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) -7985353114665667280LL)) ? (9006099743113216LL) : (3272732783833939531LL)));
                                arr_18 [i_0] [i_1] [(unsigned short)8] [i_4] [(unsigned short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_4] [i_5] [i_5 - 1] [i_5 + 1] [i_4 - 3] [i_4]) & (arr_14 [i_4] [6LL] [i_5 + 1] [i_5 - 1] [i_4 + 1] [i_4])))) ? ((~(11255326781807311264ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (arr_4 [i_4 - 1] [i_5 + 2] [i_5 + 2]))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [6] = arr_12 [i_3] [i_0] [i_0] [i_0];
                    arr_20 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) arr_11 [i_0] [i_1] [7ULL] [i_1]);
                }
            }
        } 
    } 
}
