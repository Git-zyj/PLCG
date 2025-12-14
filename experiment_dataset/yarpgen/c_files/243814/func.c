/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243814
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
    var_12 = ((/* implicit */long long int) 1879048192U);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((int) ((((arr_0 [i_0]) << (((((/* implicit */int) var_7)) - (119))))) >> (((((((/* implicit */int) var_0)) % (var_10))) - (14808))))))) : (((/* implicit */unsigned int) ((int) ((((((arr_0 [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) var_7)) - (119))))) >> (((((((/* implicit */int) var_0)) % (var_10))) - (14808)))))));
        var_13 = var_0;
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) arr_1 [i_1] [i_1]);
                                arr_13 [i_4] [i_4] [i_0] [i_4] [(signed char)9] = ((/* implicit */short) arr_7 [i_4] [i_4] [i_4]);
                                arr_14 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_4 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) arr_5 [i_3 - 1])) : (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_3 - 1] [i_0] [i_0] [i_4])))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_2))))))));
                    var_15 *= ((/* implicit */short) arr_0 [i_2]);
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_0)) - (14808))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            var_16 = ((/* implicit */int) var_9);
            var_17 = arr_10 [1ULL] [i_5] [1ULL];
            arr_19 [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((var_8) << (((var_6) - (3608031645U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))));
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = max((((/* implicit */unsigned int) ((signed char) arr_18 [(signed char)2]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6] [i_6]))) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_20 [i_6] [i_6])), ((short)29760))))) : (arr_5 [i_6]))));
        var_18 = ((/* implicit */short) var_6);
        var_19 = ((/* implicit */int) arr_7 [i_6] [i_6] [i_6]);
        arr_23 [i_6] [i_6] = var_5;
    }
    var_20 = ((/* implicit */unsigned char) var_8);
}
