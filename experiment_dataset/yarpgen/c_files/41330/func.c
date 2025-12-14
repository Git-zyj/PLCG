/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41330
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
    var_11 = max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (1903265681U)))) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_9)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */int) arr_0 [i_0]))))) <= (arr_2 [17LL]));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((var_0) | (((/* implicit */int) (_Bool)1)))))));
            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58666))) : (1918407096U)))) % (((((/* implicit */_Bool) -711133916)) ? (1325155268801157413LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))))))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        {
                            arr_13 [i_3] [2U] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) (unsigned char)255);
                            arr_14 [i_4] [i_3] [i_1 + 2] [i_1 + 2] [i_0] = ((/* implicit */long long int) var_8);
                            var_14 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-8)) : (-711133914)));
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((-1077865645) + (((/* implicit */int) var_8))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45))) ^ (387836075U))) : (((/* implicit */unsigned int) 711133915))));
                            var_16 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)47)) % (((/* implicit */int) (signed char)107))));
                        }
                    } 
                } 
            } 
            arr_15 [i_0] = ((/* implicit */_Bool) var_5);
        }
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            var_17 = ((/* implicit */unsigned long long int) var_5);
            arr_18 [i_0] [i_5] = ((/* implicit */unsigned long long int) ((arr_2 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0])))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1077865645)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)180))));
        }
        for (signed char i_6 = 2; i_6 < 18; i_6 += 4) 
        {
            var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_0 [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0])) || (((/* implicit */_Bool) arr_6 [i_0])))))) : (((((/* implicit */_Bool) (short)-11792)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (-2397849699787542561LL)))));
            var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0])) >> (((var_2) - (3732183988U)))))) ? (((/* implicit */int) arr_10 [i_0] [13LL])) : (((/* implicit */int) arr_10 [6] [6]))));
        }
    }
    /* vectorizable */
    for (long long int i_7 = 1; i_7 < 19; i_7 += 3) 
    {
        arr_23 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3300384324346757125ULL)) ? (-2740558648817203060LL) : (((/* implicit */long long int) 4294967295U))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-41))) : (((arr_21 [i_7]) << (((((((/* implicit */int) (short)-17331)) + (17388))) - (55)))))));
        var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 309252340)) ? (((/* implicit */int) ((arr_22 [i_7] [(_Bool)1]) || (((/* implicit */_Bool) (unsigned short)26257))))) : (var_0)));
        arr_24 [i_7] [i_7] = arr_22 [i_7] [i_7];
        var_22 = ((/* implicit */unsigned int) -1939962144);
        var_23 = ((/* implicit */signed char) 18446744073709551615ULL);
    }
}
