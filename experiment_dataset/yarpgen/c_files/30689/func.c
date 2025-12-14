/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30689
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))))))));
        var_19 -= ((/* implicit */long long int) max((((((/* implicit */_Bool) 31204340)) ? (115801748) : (-115801728))), (((int) arr_0 [i_0]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            var_20 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [8LL] [i_1 + 1] [8LL]))));
            arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 - 1])) ? (arr_1 [i_1 - 1] [i_1]) : (arr_1 [i_0] [i_0])));
            var_21 = arr_3 [i_0] [i_1 - 2];
        }
        for (int i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                var_22 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                var_23 *= ((/* implicit */int) ((_Bool) 909418531872645351LL));
                var_24 = ((int) 909418531872645351LL);
            }
            arr_12 [i_0] [i_0] = ((/* implicit */_Bool) max((((long long int) -6736453301307457691LL)), (((/* implicit */long long int) 1830201063))));
            arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1032917051)) ? (-1024LL) : (((/* implicit */long long int) 330977033))));
            arr_14 [i_0] [i_0] [i_2] = ((/* implicit */int) ((1529031031) <= (-1519568810)));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                arr_17 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -115801736)) ? (((/* implicit */int) ((((/* implicit */long long int) -2144322498)) == (6736453301307457682LL)))) : (((/* implicit */int) arr_11 [i_0] [i_2] [i_2 + 2]))))));
                arr_18 [i_0] [i_0] [i_2 + 2] [i_4] = (!(arr_5 [i_2 + 3] [i_2 - 1]));
            }
        }
        for (int i_5 = 2; i_5 < 12; i_5 += 1) 
        {
            arr_21 [i_0] = ((/* implicit */int) arr_6 [i_0] [i_5 + 1]);
            var_25 = ((/* implicit */int) min((((arr_6 [i_5] [i_5 + 2]) == (((/* implicit */long long int) (~(var_9)))))), (((min((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0])), (arr_7 [i_0]))) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 36028797018963967LL))))))));
            var_26 = ((/* implicit */long long int) ((562949953417216ULL) + (2697298336494163201ULL)));
        }
        var_27 ^= ((/* implicit */int) ((((int) arr_3 [i_0] [i_0])) < (((/* implicit */int) arr_2 [2LL] [i_0] [i_0]))));
    }
    for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 1) 
    {
        var_28 *= ((_Bool) ((int) (((_Bool)1) ? (883883419415236896LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
        var_29 ^= ((/* implicit */_Bool) arr_22 [0ULL]);
    }
    for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
    {
        var_30 -= arr_15 [i_7] [i_7] [i_7];
        var_31 = ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned long long int) 353341194)), (var_2))));
        arr_26 [3ULL] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_15 [i_7] [i_7] [i_7]) >> (((/* implicit */int) var_17))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_7] [(_Bool)1])) >> (((arr_3 [2LL] [i_7]) - (5931325122922556736LL)))))) : (max((((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (-632059839)))), (arr_22 [12])))));
    }
    var_32 += var_12;
    var_33 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) min((var_16), (var_11))))) : (((((/* implicit */_Bool) 6053231290556121891LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */int) var_0)) ^ (((/* implicit */int) (_Bool)1)))) : (max((((/* implicit */int) ((var_11) && ((_Bool)1)))), (430214858))));
}
