/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37186
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_16 = (-(((((/* implicit */_Bool) 6322667072684706980ULL)) ? (((/* implicit */unsigned long long int) var_4)) : (7853686413048744204ULL))));
                        arr_10 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13081)) || (((/* implicit */_Bool) 6322667072684706980ULL))));
                    }
                    for (long long int i_4 = 2; i_4 < 18; i_4 += 1) 
                    {
                        arr_14 [i_4] [i_1] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_8 [(short)2] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 10593057660660807411ULL)) ? (-601813682) : (((/* implicit */int) (signed char)119))))))));
                        arr_15 [i_4] [i_2] [(signed char)16] [(signed char)16] [i_4] = ((/* implicit */int) (~(var_4)));
                        var_17 ^= ((/* implicit */signed char) 7853686413048744204ULL);
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_6 - 1])) : (((/* implicit */int) ((unsigned short) arr_1 [i_1])))));
                                arr_22 [i_6] [i_6] [(_Bool)1] [i_2] [i_6] [i_0 - 3] = ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                    arr_23 [i_0] [4ULL] [i_2] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_0 - 3] [i_0] [i_0])) ? (arr_13 [(unsigned char)12] [i_1] [i_0 - 1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (arr_13 [i_2 - 4] [i_1] [i_0 - 3] [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */unsigned short) var_11);
    var_20 -= (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_13))))))));
}
