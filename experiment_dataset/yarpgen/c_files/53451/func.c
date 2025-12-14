/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53451
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = min((-13LL), (((/* implicit */long long int) (signed char)121)));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)14035)) >> (((-2880671495430132795LL) + (2880671495430132806LL)))));
                arr_6 [i_1] = ((((unsigned long long int) var_11)) | (max((((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 1])), (arr_0 [i_0 - 1]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 3; i_3 < 12; i_3 += 1) 
        {
            arr_12 [14ULL] [i_3] = ((/* implicit */signed char) max((((7036281760068907761ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14034))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3 + 1])) ? (((/* implicit */int) arr_8 [i_3 - 1])) : (((/* implicit */int) arr_8 [i_3 + 1])))))));
            var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (var_11))))))) * (((/* implicit */int) ((((/* implicit */int) arr_8 [i_3 - 1])) > (((/* implicit */int) arr_8 [i_3 - 3])))))));
        }
        arr_13 [i_2] [i_2] = min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) >= (arr_11 [i_2])))), (max((((/* implicit */unsigned long long int) 5437037107318642375LL)), (18446744073709551611ULL))));
        arr_14 [(_Bool)1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 10459441773503640607ULL)) ? (6459049674342492270ULL) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (12ULL) : (((/* implicit */unsigned long long int) 1893328615384748268LL)))))), (max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) (unsigned short)65518)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) 1594670532930307397LL))))))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51970))) < (arr_11 [i_2])))) : ((~(((/* implicit */int) arr_8 [i_2]))))));
        arr_15 [i_2] [14ULL] = var_6;
    }
    var_15 = ((/* implicit */unsigned short) var_7);
}
