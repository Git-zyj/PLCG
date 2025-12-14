/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227844
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
    var_10 = ((((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1)))) : (((long long int) var_0)))) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_4)), ((short)7222))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [i_1] [i_1] [i_0]);
                arr_9 [i_0] [16LL] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (arr_6 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7223))) : (min((arr_6 [i_1] [i_0] [i_0]), (((/* implicit */unsigned int) arr_5 [i_1] [i_1] [i_0]))))));
                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) (short)-8178))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        {
                            arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned char) ((7341956357622729050LL) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_1])))))));
                            arr_16 [i_0] [i_1] [19ULL] [19ULL] = ((/* implicit */unsigned int) arr_3 [i_2]);
                            arr_17 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((unsigned long long int) 7341956357622729050LL)))));
                        }
                    } 
                } 
                arr_18 [i_1] [22U] [i_1] = ((/* implicit */unsigned short) ((_Bool) arr_6 [0] [i_1] [0]));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_4 = 2; i_4 < 9; i_4 += 2) 
    {
        arr_22 [i_4] = var_9;
        arr_23 [i_4] = ((/* implicit */unsigned int) ((unsigned char) arr_19 [i_4]));
        arr_24 [i_4] [i_4] = ((int) ((((/* implicit */_Bool) (short)32767)) ? (arr_14 [i_4 - 2] [i_4 + 1] [i_4] [i_4] [10LL] [i_4]) : (arr_14 [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4] [i_4 + 1])));
    }
    for (unsigned char i_5 = 1; i_5 < 11; i_5 += 1) 
    {
        arr_28 [i_5] |= ((/* implicit */_Bool) arr_0 [i_5]);
        var_12 += ((/* implicit */int) var_6);
        /* LoopNest 3 */
        for (long long int i_6 = 2; i_6 < 12; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            arr_41 [(short)4] [i_7] [5ULL] [i_7] [i_7] [3ULL] = ((_Bool) ((unsigned char) ((((/* implicit */int) (short)7212)) >> (((/* implicit */int) (unsigned char)0)))));
                            arr_42 [7ULL] [i_8] [i_7] [i_6] [i_5] = 3584933213037533888LL;
                            arr_43 [i_6] [i_8] [i_7] [i_5] [i_6] |= ((/* implicit */unsigned int) ((int) -7341956357622729050LL));
                            var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
                        }
                        arr_44 [i_8] [i_7] [i_7] [i_5 + 1] = ((/* implicit */signed char) ((unsigned short) min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) var_3)))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (15476284616520679395ULL))))));
    }
    for (signed char i_10 = 2; i_10 < 11; i_10 += 4) 
    {
        arr_47 [(short)9] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                {
                    arr_56 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-7212))))) ? (((/* implicit */int) ((((/* implicit */int) (short)7212)) <= (((/* implicit */int) (unsigned char)251))))) : (((/* implicit */int) var_5))));
                    var_15 += ((/* implicit */short) max((min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7213))) ^ (arr_14 [i_10 - 2] [i_10 - 2] [i_10] [i_11] [i_10 - 2] [i_12]))))), (((/* implicit */unsigned long long int) ((int) 7341956357622729050LL)))));
                }
            } 
        } 
        arr_57 [i_10] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10 + 1])) ? (((/* implicit */unsigned long long int) 0U)) : (arr_14 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10 - 1]))));
    }
}
