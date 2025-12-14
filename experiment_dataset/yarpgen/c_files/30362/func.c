/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30362
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_20 += ((/* implicit */unsigned short) var_9);
        var_21 += ((/* implicit */short) ((((/* implicit */_Bool) (-(-2147483644)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48824))) : (3825895776679844493LL)));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((_Bool) 4169762826083936990LL))));
                    arr_11 [i_1] = ((/* implicit */short) min((((unsigned long long int) arr_6 [i_1] [i_1] [i_2 + 1])), (((/* implicit */unsigned long long int) max((arr_6 [i_1] [(short)3] [i_2 - 1]), ((unsigned short)16733))))));
                    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_7))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            var_24 = ((/* implicit */short) ((max((arr_13 [i_1] [i_1]), (((/* implicit */int) (unsigned short)55864)))) | (max((14), (((/* implicit */int) var_16))))));
            var_25 -= max((arr_6 [i_4] [i_4] [i_4]), ((unsigned short)48819));
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_4 [i_1]))) ? (((var_13) ? (max((((/* implicit */long long int) (short)6906)), (arr_10 [i_4] [i_4] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-84))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned short) 6)))))));
            arr_14 [i_1] [i_4] = (unsigned short)55882;
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_7 [14])) & (((/* implicit */int) arr_7 [i_1]))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_28 = ((/* implicit */unsigned short) max((var_28), (((unsigned short) (((-(var_19))) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            arr_17 [i_1] [(short)7] [(short)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1])))) ? (((/* implicit */int) max((var_3), (arr_16 [i_1] [i_5])))) : (max((arr_3 [i_1]), (var_2)))));
            var_29 &= ((/* implicit */unsigned short) min((18370594229853063287ULL), (((/* implicit */unsigned long long int) ((arr_16 [i_1] [i_1]) || (arr_16 [i_1] [i_5]))))));
        }
        var_30 = ((/* implicit */unsigned long long int) -2147483639);
        arr_18 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [(unsigned short)0] [i_1])) ? (((/* implicit */unsigned int) arr_13 [i_1] [i_1])) : (arr_15 [(short)12] [i_1] [i_1]))))));
    }
    for (int i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                {
                    var_31 = ((((/* implicit */_Bool) max((min((16417036744611209747ULL), (((/* implicit */unsigned long long int) arr_22 [i_6] [i_7] [i_8])))), (((/* implicit */unsigned long long int) arr_21 [i_6] [i_7] [i_8]))))) ? (((/* implicit */int) arr_25 [i_6] [i_6] [i_8] [i_6])) : (((((/* implicit */int) arr_7 [i_6])) & (((/* implicit */int) (_Bool)1)))));
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) 2609735539U))));
                    arr_26 [i_6] [i_8] [i_8] = ((/* implicit */short) min((var_17), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [i_8] [i_7] [i_8])), (arr_3 [i_8]))))));
                    var_33 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_9)), (arr_23 [i_6] [i_7])));
                    var_34 = ((/* implicit */_Bool) (+(var_5)));
                }
            } 
        } 
        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)16702)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((arr_16 [i_9 - 1] [i_10]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_10] [i_10])))))));
            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_9 + 1])) ? (((/* implicit */int) arr_27 [i_9 - 1])) : (2147483620)));
        }
        var_38 = ((/* implicit */_Bool) arr_15 [i_9] [i_9 - 1] [(unsigned char)2]);
        arr_33 [i_9] [i_9] = ((/* implicit */int) arr_8 [i_9] [i_9] [i_9]);
        arr_34 [i_9] [i_9 + 1] &= ((/* implicit */int) var_4);
        var_39 = ((/* implicit */int) arr_29 [i_9]);
    }
    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_11))));
    var_41 = ((/* implicit */unsigned long long int) max((var_41), ((-(var_5)))));
    var_42 = ((/* implicit */unsigned short) max((var_42), (min(((unsigned short)1494), (((/* implicit */unsigned short) var_8))))));
}
