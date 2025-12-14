/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207875
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */int) var_7);
                    var_12 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((1812888898721627003ULL) / (13867883104714409597ULL)))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0] [i_1])))))) : (((/* implicit */unsigned long long int) (~(-5347813160411783089LL))))));
                    var_13 |= ((/* implicit */unsigned short) arr_6 [i_0] [i_0]);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) var_7)), (((arr_1 [i_0 - 2]) + (411701121)))));
        var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 411701121)) ? (((/* implicit */unsigned int) 0)) : (1238051582U))) == (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0 - 2])))))));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])))))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (unsigned short i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                {
                    var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_0 + 1])), (arr_12 [i_0 + 2])))) ? (min((min((((/* implicit */unsigned int) 0)), (915423010U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)25)) + (((/* implicit */int) (signed char)-32))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4 - 1] [i_0 + 1] [i_0 + 1]))))))));
                    arr_16 [i_3] [i_3] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)231))));
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
    {
        var_17 = ((((/* implicit */_Bool) arr_18 [i_5])) ? ((((_Bool)1) ? (min((((/* implicit */long long int) (unsigned short)16274)), (arr_18 [i_5]))) : (((((/* implicit */_Bool) 3056915714U)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_18 [i_5]))))) : ((+(arr_18 [i_5]))));
        arr_19 [i_5] &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -411701121)) ? (((/* implicit */int) ((_Bool) arr_17 [i_5]))) : (((((/* implicit */_Bool) arr_18 [i_5])) ? (-1) : (-1152630791)))))));
    }
    for (signed char i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
    {
        var_18 -= ((/* implicit */unsigned char) var_7);
        arr_22 [i_6] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */long long int) (-(arr_17 [i_6])))) : (max((((/* implicit */long long int) arr_17 [i_6])), (-1LL)))));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            arr_25 [i_7] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (-(-1)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32752))) : (-1999938684614182951LL)));
            arr_26 [i_6] [i_7] = ((/* implicit */unsigned short) (+(1238051560U)));
            arr_27 [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((-1983868186) & (((/* implicit */int) var_6)))))));
            arr_28 [i_7] [i_6] [i_7] = ((/* implicit */long long int) ((min((((/* implicit */int) ((9LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)162)))))), ((+(((/* implicit */int) var_4)))))) >> ((((-(10LL))) + (15LL)))));
        }
        var_19 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) max((((/* implicit */unsigned short) arr_20 [i_6])), (var_1)))), (min((411701107), (((/* implicit */int) arr_24 [i_6] [i_6] [i_6]))))))));
    }
    var_20 = ((/* implicit */signed char) var_3);
    var_21 = ((/* implicit */short) var_9);
    var_22 = max((((/* implicit */unsigned int) var_10)), (3056915708U));
    var_23 = ((/* implicit */_Bool) var_8);
}
