/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248851
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
    var_12 = ((/* implicit */unsigned long long int) var_10);
    var_13 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_1] = ((/* implicit */short) (unsigned char)10);
                        arr_10 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) 633708969);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    {
                        var_14 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) 3722320123071699823LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)255)))));
                        var_15 += ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)50596))));
                    }
                } 
            } 
        }
        var_16 = ((/* implicit */unsigned long long int) (signed char)127);
        var_17 = ((/* implicit */unsigned long long int) arr_14 [i_0] [7ULL] [7ULL] [6ULL]);
    }
    for (unsigned char i_6 = 1; i_6 < 24; i_6 += 3) 
    {
        arr_19 [i_6] |= ((/* implicit */short) (~(max((268173312ULL), (((/* implicit */unsigned long long int) (signed char)-99))))));
        arr_20 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)176))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3458749805U)) ? (arr_17 [i_6 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)42)))))) : (0ULL)));
    }
    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        arr_23 [i_7] = ((/* implicit */unsigned short) (unsigned char)110);
        arr_24 [i_7] = max((((/* implicit */unsigned long long int) var_8)), (var_5));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) min(((~(18432185861041080441ULL))), (((/* implicit */unsigned long long int) (~(637561739))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            var_19 |= ((/* implicit */short) max((268173312ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0)))))));
            arr_31 [i_8] [i_8] [i_8] = ((/* implicit */short) 5899349494834138902ULL);
        }
        /* vectorizable */
        for (unsigned char i_10 = 3; i_10 < 23; i_10 += 4) 
        {
            var_20 = (+(0ULL));
            arr_36 [i_8] [i_10 - 2] [i_8] = ((/* implicit */unsigned short) ((arr_32 [i_8] [i_8]) ? (12547394578875412723ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
            /* LoopNest 3 */
            for (long long int i_11 = 1; i_11 < 21; i_11 += 2) 
            {
                for (unsigned int i_12 = 1; i_12 < 20; i_12 += 4) 
                {
                    for (long long int i_13 = 1; i_13 < 22; i_13 += 1) 
                    {
                        {
                            arr_44 [22ULL] [22ULL] [20U] [20U] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) (unsigned char)7)) : (-1572832661)));
                            var_21 = ((/* implicit */unsigned int) 4914583859812274720ULL);
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (5899349494834138902ULL)));
                            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_40 [i_12 + 3] [4] [i_13 + 1] [i_13]))));
                        }
                    } 
                } 
            } 
            arr_45 [i_8] [i_10] = ((/* implicit */unsigned char) arr_33 [i_8]);
            var_24 -= ((/* implicit */long long int) (~(arr_21 [i_10 - 3] [2U])));
        }
    }
}
