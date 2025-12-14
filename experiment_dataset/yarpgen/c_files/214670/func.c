/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214670
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
    var_17 = ((/* implicit */unsigned long long int) (~(min(((~(4294967289U))), (((/* implicit */unsigned int) (unsigned short)65518))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) 4862024750994584186ULL)))));
        arr_2 [i_0] = (-(((((/* implicit */_Bool) (unsigned short)3)) ? (1223618002U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)65513);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)60735)))) / (((/* implicit */int) ((unsigned short) 9450661156302397151ULL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned short i_3 = 4; i_3 < 9; i_3 += 2) 
                {
                    {
                        arr_16 [i_3 - 1] [i_2] [i_1] [i_0] |= 68169720922112ULL;
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            arr_20 [i_0] [i_2] [i_2] &= ((unsigned short) (unsigned short)0);
                            arr_21 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = (-(0U));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        arr_25 [i_5] = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)40501));
        arr_26 [i_5] = ((/* implicit */unsigned short) (-(0U)));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)60725)) ? (((((/* implicit */_Bool) (unsigned short)60733)) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60725))))) : (17U)));
    }
    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        arr_31 [i_6] [i_6] = ((unsigned int) ((((/* implicit */_Bool) (unsigned short)4789)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)4810)) ? (((/* implicit */int) (unsigned short)27217)) : (((/* implicit */int) (unsigned short)4811))))) : (4294967267U)));
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)39510))))), (0U))), ((+(3048360765U)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            arr_43 [i_10] [i_9] [i_8] [i_7] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) (unsigned short)4789)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) 2891287597U)))));
                            arr_44 [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)3));
                            arr_45 [i_7] [i_9] [i_10] = ((unsigned long long int) (unsigned short)25101);
                            arr_46 [i_6] [i_7] [i_8] [i_8] [i_9] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((2998001272U) >> (17U)));
                        }
                        arr_47 [i_9] = 4294967280U;
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_11 = 1; i_11 < 7; i_11 += 3) 
    {
        var_21 = (unsigned short)38319;
        arr_52 [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2U))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((0ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60722))))))) % (max((((unsigned int) (unsigned short)25096)), (((/* implicit */unsigned int) (unsigned short)50612)))))))));
    }
}
