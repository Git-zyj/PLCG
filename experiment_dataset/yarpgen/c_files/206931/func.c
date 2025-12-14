/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206931
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((10026755559802618088ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-32755)) : (((/* implicit */int) arr_1 [i_1 - 4]))));
            var_19 &= ((/* implicit */signed char) (_Bool)1);
            arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 1305615751U)) && (((/* implicit */_Bool) arr_4 [i_1 - 4] [i_0]))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((arr_5 [i_0]) != (arr_4 [i_0] [i_0]))))));
            var_20 -= ((/* implicit */signed char) var_0);
        }
        for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_6)) * (min((((((/* implicit */_Bool) 8882717670393001277LL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32731))))), (((/* implicit */unsigned int) var_1))))));
            arr_12 [i_0] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_10 [i_2])), (2550893455U)));
            arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0]);
        }
        arr_14 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) != (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) & (9223372036854775807LL)))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_3 = 1; i_3 < 18; i_3 += 4) /* same iter space */
        {
            var_21 &= ((/* implicit */unsigned char) (~(8419988513906933528ULL)));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) ((_Bool) arr_6 [i_3]))) : (((/* implicit */int) var_5))));
            arr_17 [i_0] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) >= (((8419988513906933511ULL) >> (((/* implicit */int) (_Bool)1))))));
            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -8882717670393001278LL)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) var_9)))) ^ (var_10)));
        }
        for (short i_4 = 1; i_4 < 18; i_4 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */int) ((((arr_4 [i_4 - 1] [i_4 + 1]) * (arr_4 [i_4 + 1] [i_4 + 1]))) & (min((var_2), (((/* implicit */unsigned int) arr_0 [i_4 - 1]))))));
            var_25 = ((/* implicit */short) ((((/* implicit */int) var_1)) < (((/* implicit */int) min((((/* implicit */signed char) max((var_1), (arr_15 [i_4] [i_4])))), (arr_21 [i_0] [i_0] [i_4 + 1]))))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_5]))));
            arr_26 [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) var_13)))));
            var_27 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 134216704U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5]))) : (var_12))));
            arr_27 [i_5] [i_5] = 2097151U;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            arr_30 [i_6] [i_6] [i_6] = ((((unsigned int) var_13)) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (var_10))))));
            arr_31 [i_6] [i_6] [i_0] = ((/* implicit */short) (~(arr_20 [i_0] [i_6] [i_6])));
        }
        arr_32 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) ((var_10) != (((/* implicit */int) var_9)))))) | ((-(var_3)))));
    }
    for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        arr_37 [i_7] = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))))));
        arr_38 [i_7] [i_7] = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_7])) ? (var_16) : (((/* implicit */int) var_4))))) ? (min((1724754625U), (((/* implicit */unsigned int) (short)-32755)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
    }
    var_28 = min((((/* implicit */unsigned int) max((var_4), (((_Bool) 8419988513906933519ULL))))), (((4271758478U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
    var_29 *= ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_8))))))) ^ (13U));
}
