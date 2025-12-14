/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198634
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18919)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (min((8751902547300187942ULL), (12512910719887259715ULL))) : (((((/* implicit */unsigned long long int) -9197500668575341787LL)) | (10743198310304946268ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (8751902547300187942ULL)));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = ((((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) (unsigned char)128)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_11))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) >= (((/* implicit */long long int) 65163239U)))))));
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_1 [i_0 + 1] [i_0 + 1]))))));
        var_19 *= ((/* implicit */unsigned int) ((signed char) 8751902547300187928ULL));
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [(short)7] [i_0])) ? (((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) arr_2 [i_0]))))) ? (max((12512910719887259709ULL), (((/* implicit */unsigned long long int) 4229804057U)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-12))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_1 [i_0] [i_0 + 1]) >= (arr_1 [i_0 - 1] [i_0 + 1]))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned char) (!(((4229804050U) < (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
            var_20 = ((/* implicit */unsigned long long int) -1216922258);
        }
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_21 = ((/* implicit */long long int) 10743198310304946266ULL);
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((12512910719887259726ULL), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) arr_11 [i_2] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) var_14)) : (1775715360700887222ULL))) : (((/* implicit */unsigned long long int) -629146617)))))))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5105))) : (arr_6 [i_0] [i_3] [i_0])));
            var_24 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) >= (18446744073709551610ULL))))));
        }
    }
    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        arr_16 [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)176)) == (-1216922254))) ? (((((/* implicit */unsigned long long int) arr_10 [i_4])) - (var_4))) : (min((var_4), (((/* implicit */unsigned long long int) arr_12 [i_4] [i_4] [i_4]))))));
        var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)229))));
        arr_17 [i_4] = ((((/* implicit */_Bool) min((arr_5 [i_4] [i_4] [i_4]), (((/* implicit */long long int) ((unsigned int) arr_9 [i_4] [i_4] [i_4])))))) ? (((arr_1 [i_4] [i_4]) & (((arr_1 [i_4] [i_4]) ^ (((/* implicit */unsigned long long int) arr_5 [i_4] [i_4] [i_4])))))) : (((/* implicit */unsigned long long int) max((-1595205262475919413LL), (((/* implicit */long long int) arr_10 [i_4]))))));
    }
}
