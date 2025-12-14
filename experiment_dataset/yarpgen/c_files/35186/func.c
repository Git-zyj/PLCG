/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35186
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_11 = ((((/* implicit */_Bool) ((((-9223372036854775805LL) + (9223372036854775807LL))) << (((arr_4 [i_0 - 2]) - (533841831)))))) ? (((/* implicit */int) min(((unsigned short)3), (((/* implicit */unsigned short) (unsigned char)0))))) : (((var_1) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_1])) : (((/* implicit */int) var_2)))));
                var_12 = ((/* implicit */_Bool) (unsigned char)193);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_13 [9] [i_1] [9] [i_3] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)193)))))));
                            var_13 = ((/* implicit */_Bool) arr_6 [i_0] [i_2] [5U]);
                            arr_14 [i_2] &= ((/* implicit */short) ((max((arr_1 [i_0 - 2]), (((/* implicit */unsigned long long int) var_7)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_10))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            {
                arr_22 [i_4] = ((/* implicit */short) ((((max((((/* implicit */unsigned int) arr_17 [i_5] [i_4])), (var_7))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_4] [i_5] [i_4]))))) / (((/* implicit */unsigned int) ((((/* implicit */int) max((var_2), (arr_16 [i_4])))) * (((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_20 [i_4] [i_4])))))))));
                /* LoopNest 3 */
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    for (unsigned char i_7 = 1; i_7 < 21; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                arr_33 [i_4] [(short)15] [i_4] [i_8] [i_4] = ((/* implicit */short) ((((max((var_10), (((/* implicit */int) arr_29 [i_4] [i_4] [i_7 + 1] [i_4] [16])))) != ((-(((/* implicit */int) arr_16 [i_4])))))) ? (((min((var_10), (((/* implicit */int) arr_29 [i_4] [i_5] [(signed char)16] [i_5] [i_8])))) >> (((min((((/* implicit */int) arr_15 [i_4] [i_8])), (var_10))) - (24415))))) : (max((((/* implicit */int) var_9)), (var_10)))));
                                var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)0))))))), ((~(arr_25 [i_7] [i_7 - 1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (short)32767)) <= (((/* implicit */int) (unsigned char)26))))) & (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (long long int i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            {
                arr_42 [i_9] [i_9] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)96))))));
                arr_43 [i_10] [i_9] = (signed char)123;
                arr_44 [(short)9] [(unsigned short)1] [i_10] &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_18 [5LL]))));
                var_16 *= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_37 [i_9])) >= (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_1)))))))) * (((/* implicit */int) arr_24 [i_9] [i_10]))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        {
                            arr_50 [i_9] [i_10] [i_11] [i_12] = ((/* implicit */long long int) var_0);
                            arr_51 [i_11] [(_Bool)1] = ((/* implicit */short) (((-(((((/* implicit */_Bool) arr_19 [i_9] [i_9])) ? (((/* implicit */int) (unsigned char)26)) : (arr_45 [i_9] [(_Bool)0] [i_9] [i_9]))))) % ((~(((/* implicit */int) (unsigned char)109))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
