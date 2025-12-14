/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217814
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
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_19)) ? (var_8) : (((/* implicit */unsigned long long int) var_7)))) ^ (((((/* implicit */_Bool) var_10)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36729))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] |= ((/* implicit */unsigned long long int) -1368142565);
                var_21 &= ((/* implicit */unsigned short) (-(arr_1 [i_0] [i_0])));
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) max((arr_4 [i_1] [i_0] [i_1]), (((/* implicit */unsigned short) arr_2 [i_0])))))) ? (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_2 [i_0]))))))) : ((~(18317041711776550288ULL)))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_23 |= ((((/* implicit */_Bool) (((-(((/* implicit */int) var_16)))) / (((/* implicit */int) min(((unsigned short)62496), (((/* implicit */unsigned short) var_15)))))))) ? (((((unsigned long long int) arr_0 [i_1])) >> (((max((((/* implicit */unsigned long long int) (short)16383)), (arr_1 [i_0] [i_1]))) - (2840842365154274168ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)0))))));
                    arr_10 [13] [i_0] = ((/* implicit */short) ((min(((+(0ULL))), (arr_9 [i_0] [i_0] [i_0] [i_0]))) / ((+(var_10)))));
                    var_24 += ((/* implicit */unsigned long long int) arr_8 [i_2] [i_1] [i_0] [i_0]);
                    var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                    arr_11 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]);
                }
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_17))));
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_1] [i_0]), (arr_3 [(short)3] [i_1] [1ULL])))) || (((((/* implicit */_Bool) ((unsigned long long int) var_18))) || (((/* implicit */_Bool) arr_1 [i_0] [i_3])))))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)8078))))) - (var_10)))));
    var_29 &= max((var_0), (((var_0) | (((/* implicit */int) (!(((/* implicit */_Bool) (short)6297))))))));
    var_30 |= ((/* implicit */unsigned short) max(((+(18446744073709551615ULL))), (var_17)));
}
