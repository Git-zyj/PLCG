/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199714
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
    var_15 = -7804475649094190794LL;
    var_16 ^= ((/* implicit */long long int) 13686393708074635951ULL);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_17 = (-(((((/* implicit */_Bool) min((arr_1 [8]), (var_0)))) ? (max((arr_1 [0LL]), (((/* implicit */unsigned long long int) 15)))) : (((/* implicit */unsigned long long int) -3527077186184530219LL)))));
        arr_2 [i_0] = ((/* implicit */int) (unsigned short)4249);
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_18 = ((/* implicit */int) var_9);
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_8 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_2])) : (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)8191)) : (var_12))) + (((((/* implicit */int) arr_5 [i_2] [i_1])) + (((/* implicit */int) arr_3 [i_1]))))))));
            var_19 = ((/* implicit */int) arr_7 [i_1] [0LL] [i_2]);
        }
        var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) arr_6 [14LL] [i_1] [(_Bool)1]))))) ^ (-11LL)))) ? (((((((/* implicit */_Bool) (unsigned short)18057)) ? (((/* implicit */int) (unsigned short)18057)) : (((/* implicit */int) arr_5 [i_1] [12LL])))) & (((((/* implicit */_Bool) var_11)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-8204)))))) : ((~(((/* implicit */int) (_Bool)0))))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            {
                arr_14 [i_3] [i_3] [i_4] = ((/* implicit */short) min((((int) -30LL)), (((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */int) arr_13 [i_3] [i_3] [i_3])) : (((/* implicit */int) ((unsigned short) 6LL)))))));
                var_21 = arr_13 [1] [i_3] [i_4];
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6478355197852761178LL)) ? (((((((/* implicit */_Bool) 1770749537225728624ULL)) || (((/* implicit */_Bool) var_12)))) ? (var_10) : (-6165246622972420734LL))) : (9223372036854775807LL)));
                    arr_17 [i_3] [i_3] [i_4] [20] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_11)) * (((/* implicit */int) (unsigned short)1417)))) : (((arr_10 [i_4]) * (((/* implicit */int) (_Bool)0))))))) / (((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_4] [i_4])) ? (arr_15 [i_3] [i_3] [i_4] [i_5]) : (arr_15 [i_3] [i_3] [i_3] [i_3])))));
                    arr_18 [i_3] [i_5] [i_3] = arr_11 [8];
                }
                for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    arr_21 [i_4] [i_3] = ((/* implicit */unsigned short) arr_19 [i_3] [i_4] [i_6] [i_4]);
                    arr_22 [i_3] [i_3] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_4] [i_6])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) > (arr_12 [i_3])))) : (((((/* implicit */int) arr_19 [i_3] [i_4] [i_6] [i_6])) >> (((((/* implicit */int) var_1)) - (17975)))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    var_23 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max((4200139556683773415LL), (arr_15 [i_4] [i_4] [i_7] [i_4]))))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 4; i_8 < 24; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            {
                                var_24 = ((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) arr_19 [i_3] [i_4] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (short)8204))) : (arr_28 [i_3] [i_3] [i_3] [4] [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((((/* implicit */_Bool) arr_12 [i_3])) ? (14071185901827344242ULL) : (arr_24 [i_4] [i_4] [4]))) / (((/* implicit */unsigned long long int) arr_12 [i_3])))));
                                var_25 = ((/* implicit */unsigned short) max(((-(min((((/* implicit */long long int) 0)), (arr_26 [(unsigned short)12] [23LL] [i_8] [i_3]))))), (min((((/* implicit */long long int) (short)8204)), (min((((/* implicit */long long int) arr_19 [i_3] [i_8 - 4] [i_7] [i_8])), (arr_30 [i_3] [(short)22] [i_7] [i_8 - 3] [i_7] [i_9] [i_3])))))));
                                var_26 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-8204))));
                                var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)45094))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            {
                                var_28 ^= ((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_7]);
                                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
                arr_37 [i_3] = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))) ^ (var_13))) >= (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) arr_20 [i_4] [i_3])) <= (var_7)))))))));
            }
        } 
    } 
}
