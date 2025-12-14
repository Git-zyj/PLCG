/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4065
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((short) ((17649966142586100729ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) >= (((((/* implicit */_Bool) max((-257611729), (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((11551700654500171920ULL) <= (((/* implicit */unsigned long long int) var_3))))) : (((-257611729) | (arr_1 [i_0])))))));
        var_14 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_0));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((((/* implicit */int) ((arr_1 [i_1]) > (((/* implicit */int) (_Bool)1))))) <= (((((((/* implicit */int) (short)-22383)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min(((+(((/* implicit */int) arr_5 [14] [14])))), (min((arr_1 [i_1]), (((/* implicit */int) arr_5 [(signed char)2] [i_1])))))))));
        arr_6 [i_1] = ((/* implicit */_Bool) (~((+(((/* implicit */int) ((signed char) arr_0 [i_1] [i_1])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((_Bool) (+((~(arr_0 [i_1] [i_1]))))));
        var_17 *= ((/* implicit */unsigned long long int) 7457283947539604250LL);
    }
    var_18 = ((var_0) >= (var_10));
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) 
    {
        for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((/* implicit */int) (_Bool)1)))))));
                arr_13 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)240)), (min((((/* implicit */short) var_12)), (arr_12 [i_3 + 1] [i_3] [i_2]))))))) + ((((+(var_7))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3])))))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) -402403061))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)9159)) < (((/* implicit */int) var_5))))) <= (((/* implicit */int) var_5))))) : (((((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_5)) - (48684))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)211)))))))));
    var_22 = ((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_12))));
}
