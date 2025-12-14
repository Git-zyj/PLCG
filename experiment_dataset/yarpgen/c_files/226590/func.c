/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226590
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (arr_1 [i_0 + 2])));
        var_21 &= ((4870064786268390761ULL) ^ (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])));
    }
    for (short i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_4 [i_1 - 1])))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 1]))) == (13576679287441160833ULL))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            arr_10 [i_2] = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) 4870064786268390782ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))) : (arr_3 [i_2]))) - (((/* implicit */unsigned long long int) ((-714922304) | (((/* implicit */int) arr_8 [i_1])))))));
            arr_11 [i_1] [i_1] = ((/* implicit */short) ((signed char) ((((/* implicit */int) (short)17703)) / (((arr_9 [i_1] [i_2]) >> (((1557708463) - (1557708459))))))));
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_2])) || (((/* implicit */_Bool) var_15))));
            arr_13 [i_2] = min((((/* implicit */unsigned long long int) 485393576)), (arr_3 [i_1]));
        }
        var_22 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_8 [i_1 - 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1 - 1])))))));
        /* LoopNest 3 */
        for (short i_3 = 1; i_3 < 13; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    {
                        arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) (-(min((arr_6 [i_4] [i_5]), (((/* implicit */int) arr_15 [i_3]))))));
                        arr_25 [i_3] [i_4] = ((/* implicit */int) ((((unsigned long long int) arr_7 [i_5] [i_3 + 2])) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_6 = 1; i_6 < 16; i_6 += 3) 
    {
        for (int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            {
                arr_30 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((-1319026444) + (arr_27 [i_6 - 1])))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_26 [i_6])), (arr_27 [i_6 - 1])))) : (((unsigned int) arr_26 [i_6]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_33 [i_6] [i_6] [i_8] [i_8] = ((/* implicit */_Bool) 714922304);
                    var_23 = (i_6 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_31 [i_8] [i_6] [i_6]) + (2147483647))) << (((((arr_27 [i_8]) + (804980238))) - (2)))))) ? (arr_31 [i_6 + 1] [i_6] [i_8]) : ((~(((/* implicit */int) (unsigned char)186))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((arr_31 [i_8] [i_6] [i_6]) - (2147483647))) + (2147483647))) << (((((arr_27 [i_8]) + (804980238))) - (2)))))) ? (arr_31 [i_6 + 1] [i_6] [i_8]) : ((~(((/* implicit */int) (unsigned char)186)))))));
                    arr_34 [i_8] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180))) <= (2227330876208266243ULL)));
                }
                arr_35 [(_Bool)0] [i_7] [i_7] &= (~(((/* implicit */int) arr_28 [(_Bool)1] [(_Bool)1])));
            }
        } 
    } 
}
