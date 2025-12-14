/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21588
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (+(var_0))))));
    var_14 |= (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (1518075536)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((_Bool) var_1))))));
    var_15 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_10)) % (((/* implicit */int) var_9)))) : (((/* implicit */int) var_7)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))));
                    arr_8 [i_0] [i_0 + 2] [(signed char)2] = ((/* implicit */short) max((arr_1 [i_0]), (min((((/* implicit */unsigned short) max((((/* implicit */short) arr_6 [i_1] [i_2])), (var_11)))), (arr_1 [i_0])))));
                }
            } 
        } 
        arr_9 [i_0] = ((((/* implicit */_Bool) (((-(var_8))) >> (((max((((/* implicit */unsigned long long int) var_10)), (var_12))) - (4955682512840435533ULL)))))) ? (1069999366) : (max((max((1069999377), (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) arr_4 [i_0] [i_0 + 2])))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                {
                    arr_19 [i_4] [i_3] = ((/* implicit */unsigned char) var_8);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_16 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 72057594037796864ULL)) ? (((/* implicit */unsigned long long int) var_1)) : (var_12))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [i_5] [i_5])))));
                        var_17 -= ((/* implicit */unsigned long long int) arr_21 [i_3] [i_4] [i_5] [i_6] [i_4]);
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 2; i_7 < 9; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((11U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        var_19 = ((/* implicit */int) (+(18374686479671754765ULL)));
                    }
                    arr_25 [i_3] [i_5] = ((/* implicit */unsigned short) arr_17 [(short)7] [i_4] [i_4]);
                    var_20 = ((/* implicit */short) ((int) 11U));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) (-(arr_23 [i_3] [i_3] [i_3] [i_3])));
            var_22 = max((((/* implicit */unsigned long long int) arr_21 [i_3] [i_3] [i_8] [i_8] [i_3])), (((unsigned long long int) arr_3 [i_8] [i_3] [i_3])));
        }
    }
    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1069999377)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (4294967285U)))) ? (((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13599))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))))) : (var_8));
}
