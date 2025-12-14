/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214546
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
    var_13 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */long long int) min(((~(arr_8 [i_1 - 1] [i_2] [i_2]))), (var_2)));
                    var_14 *= ((/* implicit */unsigned short) (+(min(((-(arr_3 [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1] [i_2]))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned short) var_2);
        var_15 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_16 = arr_13 [i_3];
        var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))) : (2679085029U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) (signed char)117)) : (arr_12 [i_3]))))));
    }
    var_18 = ((/* implicit */short) var_5);
    /* LoopSeq 2 */
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_18 [i_5 + 1] [i_5 + 2] [i_5 + 1])) >> (((((/* implicit */int) var_5)) - (15908)))))));
                    var_20 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(var_4)))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)125)) >> (((6289978286696251699ULL) - (6289978286696251680ULL)))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)18850)) || (((/* implicit */_Bool) (signed char)111))))), (1745461249U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [i_5 + 1]) <= (((/* implicit */long long int) min((arr_12 [i_6]), (((/* implicit */int) arr_15 [i_4] [i_4])))))))))));
                }
            } 
        } 
        arr_21 [i_4] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_6))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31527))))))), (((/* implicit */unsigned long long int) arr_14 [i_4]))));
        var_21 -= ((/* implicit */_Bool) arr_14 [i_4]);
    }
    /* vectorizable */
    for (short i_7 = 2; i_7 < 19; i_7 += 3) 
    {
        var_22 *= ((/* implicit */signed char) arr_23 [i_7]);
        arr_24 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (7015805540926398928LL) : (2381209444478816974LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 0ULL)))) : (arr_20 [i_7 + 1] [i_7 + 1] [i_7])));
    }
}
