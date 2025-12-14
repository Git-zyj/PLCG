/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192620
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_18 *= (!(((/* implicit */_Bool) (signed char)112)));
                    arr_9 [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_5 [i_0]);
                }
            } 
        } 
        arr_10 [i_0] = ((unsigned short) arr_4 [i_0] [i_0 + 1]);
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_14 [i_3] [i_4 + 1])))) ? (((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (arr_14 [i_3] [i_4]) : (((/* implicit */unsigned long long int) arr_13 [i_4] [(signed char)14])))) : (arr_14 [i_3] [i_4]))))));
                arr_15 [i_3] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3855388623U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))) : (3855388629U)))) : (((arr_14 [i_3] [i_4]) | (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned int) arr_13 [i_3] [11ULL])) >= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [1])))))))))));
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_13 [i_4 + 3] [i_4 - 1])) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_12 [i_3])))) << (((((((/* implicit */int) arr_11 [i_5])) & (((/* implicit */int) arr_18 [i_4] [i_3])))) - (84)))));
                    var_21 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_18 [(signed char)2] [(signed char)2])) ? (((/* implicit */int) arr_12 [(signed char)14])) : (arr_13 [i_3] [i_3]))) ^ (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_17 [i_3] [0U] [i_3])) : (var_1)))))) ? (((/* implicit */int) (unsigned short)7515)) : (arr_13 [i_3] [14ULL]));
                    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [10]))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */int) arr_11 [i_4])) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) ((((/* implicit */_Bool) 1977352577U)) && (((/* implicit */_Bool) (unsigned short)65533))))) : (-1954749482)))));
                }
                /* vectorizable */
                for (signed char i_6 = 3; i_6 < 14; i_6 += 2) 
                {
                    var_24 += ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_17 [14U] [i_4] [14U])) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_12 [i_4])))));
                    arr_22 [i_3] [(signed char)2] [i_4] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 8892120282522549024ULL))) ? (((/* implicit */unsigned int) arr_20 [i_3])) : (1977352593U)));
                    arr_23 [i_3] [(_Bool)1] [i_6] &= ((/* implicit */unsigned short) var_8);
                }
            }
        } 
    } 
}
