/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195123
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+(((/* implicit */int) var_4)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_7 [6] &= ((_Bool) (~(var_1)));
                    var_19 = ((/* implicit */long long int) max(((+((+(16722231292883621125ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)46)) : ((-(((/* implicit */int) arr_6 [i_2] [i_1] [i_1] [i_0])))))))));
                    arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (arr_3 [i_0] [i_1] [i_1])))), (((((/* implicit */long long int) ((/* implicit */int) var_17))) | ((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 1] [i_1])) : ((((!(((/* implicit */_Bool) var_2)))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_1 + 1] [i_2] [i_2])))))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) ((short) ((((((/* implicit */_Bool) 804631045)) ? (((/* implicit */long long int) arr_3 [i_0 + 2] [i_2] [i_1])) : (-9223372036854775807LL))) ^ (((((/* implicit */_Bool) var_10)) ? (8792837709369213721LL) : (var_13))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)29283))) != (var_10)))) | ((+(((/* implicit */int) arr_1 [i_0])))))))));
                            arr_13 [i_0] [i_1 + 1] [i_2] [i_3 + 1] [i_1] = ((/* implicit */long long int) 1625933349);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_14)))) ? ((~(min((((/* implicit */long long int) (unsigned char)60)), (377134975388744087LL))))) : (((/* implicit */long long int) (-((+(((/* implicit */int) arr_0 [i_1])))))))));
                            var_23 = ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) var_4)))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_24 += ((/* implicit */unsigned int) ((unsigned long long int) -1098579263));
                        arr_19 [i_1] [i_1] [i_2] [i_6] = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned short)2044))))));
                    }
                    var_25 = ((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) var_3))))), (max((-7873676863581350986LL), (((/* implicit */long long int) var_3))))));
                }
            } 
        } 
    } 
}
