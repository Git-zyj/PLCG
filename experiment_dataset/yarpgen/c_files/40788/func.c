/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40788
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
    var_11 = var_9;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_12 |= ((/* implicit */int) (!(((/* implicit */_Bool) -16872120))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_13 = ((((((/* implicit */unsigned long long int) var_1)) / (arr_2 [i_0 + 1]))) / (((((/* implicit */_Bool) 0)) ? (arr_2 [i_0 - 1]) : (arr_1 [i_0 + 1]))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (15421838617497726773ULL) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1680135618)) ? (3024905456211824843ULL) : (536739840ULL)))) ? (((/* implicit */unsigned long long int) min((774352386), (3)))) : (var_6)))));
            var_14 *= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 14191108378086767229ULL)) ? (-537587344) : (-176356468))) + (2147483647))) >> (((2147483647) - (2147483619)))));
        }
    }
    for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 1) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_9 [i_2 - 3]) != (3024905456211824842ULL)))), (var_8)))) ? (((((((/* implicit */_Bool) arr_9 [i_2])) ? (7735701872906256612ULL) : (((/* implicit */unsigned long long int) -176356468)))) | (var_8))) : (((((/* implicit */_Bool) 1275243918)) ? (arr_9 [i_2 - 2]) : (arr_9 [i_2])))));
        var_16 = 18446744073709551615ULL;
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (int i_4 = 3; i_4 < 17; i_4 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -325014105)) : (arr_13 [i_4 - 2]))) * (min((15779895340538323868ULL), (arr_13 [i_4 - 2])))));
                    var_18 = ((int) (!((!(((/* implicit */_Bool) 1981633089))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        arr_18 [i_2] [i_2] [i_4] [i_2] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((15779895340538323868ULL) * (10024469212218813189ULL)))) ? (3200225935119701470ULL) : (((((/* implicit */_Bool) var_5)) ? (min((var_6), (4428644102419479084ULL))) : (7307442254494369704ULL)))));
                        var_19 = min((((unsigned long long int) min((((/* implicit */unsigned long long int) 0)), (5155438683926678297ULL)))), (((((/* implicit */_Bool) min((-771961823), (var_0)))) ? (arr_13 [i_5]) : (min((13426567540743951918ULL), (var_7))))));
                        var_20 = min((3024905456211824836ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (15421838617497726779ULL) : (((/* implicit */unsigned long long int) -1744778234)))))))));
                        arr_19 [i_2] = ((/* implicit */unsigned long long int) ((min((min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (5155438683926678297ULL))), (var_7))) > (min((((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) -774352381)) : (arr_15 [i_2 - 1] [i_3] [i_3]))), (((3024905456211824843ULL) % (7159855574105629252ULL)))))));
                        var_21 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2])) ? (-1589927158) : (-2147483647)))) ? (arr_8 [i_2 - 2] [i_4 - 2]) : (((/* implicit */unsigned long long int) ((((-919946636) + (2147483647))) << (((15421838617497726779ULL) - (15421838617497726779ULL)))))))), (((/* implicit */unsigned long long int) 2115465255)));
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (~(min((arr_14 [i_6 + 1] [i_4 - 3] [i_4 + 1]), (8823048126198165905ULL))))))));
                        var_23 = var_0;
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((unsigned long long int) min((((((/* implicit */_Bool) 15413624823086039431ULL)) ? (((/* implicit */unsigned long long int) -774352386)) : (8823048126198165920ULL))), (arr_8 [i_6] [i_2])))))));
                    }
                    var_25 = ((/* implicit */unsigned long long int) 0);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 17; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                {
                    var_26 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) var_9)) * (0ULL))), (((/* implicit */unsigned long long int) (-(-774352396)))))))));
                    arr_28 [i_8] [i_2] [i_8] = min(((~(arr_22 [i_7] [i_2]))), (min((((/* implicit */unsigned long long int) ((arr_22 [i_2 - 3] [i_2 - 3]) > (((/* implicit */unsigned long long int) -437722918))))), (min((arr_22 [i_2 - 2] [i_2 - 2]), (var_7))))));
                }
            } 
        } 
    }
    var_27 = min((((/* implicit */unsigned long long int) ((int) var_9))), (11481179619616382586ULL));
}
