/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214505
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_6 [5ULL] [i_1] [i_0] = (~(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (arr_2 [i_2] [i_2] [i_2])))) ? (min((((/* implicit */long long int) (unsigned short)49623)), (arr_0 [(short)16]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)65528)))))));
                    var_12 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65513))))) != (min((min((var_9), (((/* implicit */unsigned long long int) arr_0 [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)42281)))))))));
                    arr_7 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */int) ((long long int) arr_2 [i_0] [i_0] [i_0]));
                    var_13 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_3 [i_0 + 1]))))));
                    var_14 = ((/* implicit */int) (unsigned short)42281);
                }
            } 
        } 
    } 
    var_15 = (unsigned short)23;
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)22))));
    /* LoopSeq 2 */
    for (unsigned int i_3 = 3; i_3 < 24; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_4 = 2; i_4 < 24; i_4 += 2) 
        {
            arr_13 [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) (short)(-32767 - 1));
            arr_14 [i_3] [i_3] = ((/* implicit */signed char) max((-6014508914333268129LL), (((/* implicit */long long int) ((2147483617) != (((/* implicit */int) (short)-32740)))))));
            arr_15 [i_3] [i_3] [i_4] &= ((/* implicit */unsigned int) arr_10 [i_4] [i_4]);
            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)65513)) + (((/* implicit */int) arr_10 [i_3] [i_3 - 3])))) - (((/* implicit */int) max((arr_10 [i_3] [i_3 - 2]), (var_4))))));
        }
        for (short i_5 = 1; i_5 < 23; i_5 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(1293007698)))), (((long long int) ((unsigned short) -6LL)))));
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [16LL] [i_3 - 3]))) == (-1689410682526248912LL)))), (((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_12 [8LL] [i_3 - 1])))))))));
            var_20 |= ((/* implicit */unsigned short) ((signed char) ((var_5) << (((1395018998U) - (1395018998U))))));
            var_21 = ((/* implicit */signed char) ((long long int) ((unsigned int) var_0)));
        }
        var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (min((var_9), (((/* implicit */unsigned long long int) 1764144093)))))))));
    }
    for (int i_6 = 2; i_6 < 17; i_6 += 3) 
    {
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_4 [i_6] [i_6 - 2] [i_6] [i_6]))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) min((min((var_10), (((/* implicit */unsigned short) arr_10 [6] [i_6 - 1])))), (((/* implicit */unsigned short) ((short) arr_18 [i_6 + 1] [i_6 + 1]))))))));
    }
}
