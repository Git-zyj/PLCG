/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41805
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
    var_13 = 3136301503541679856ULL;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_14 = ((min((((((/* implicit */_Bool) 17134890898288103820ULL)) ? (786432ULL) : (15310442570167871736ULL))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [7]))) : (arr_1 [i_0]))))) == (3136301503541679865ULL));
        arr_2 [i_0] = max((3136301503541679886ULL), (min((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) ((10491742479554898022ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_6 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)85)), (10491742479554898001ULL)));
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (-(arr_4 [i_0] [(unsigned short)18] [(unsigned short)18]))))));
        }
    }
    var_16 = ((/* implicit */signed char) var_3);
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((11196120296881043659ULL) >> (((((/* implicit */int) (unsigned char)68)) - (14)))))))) : (((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)77))))) ? (4503599625273344ULL) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))))))))));
    var_18 = 18442240474084278265ULL;
}
