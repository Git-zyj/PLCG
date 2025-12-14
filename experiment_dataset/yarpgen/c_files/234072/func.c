/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234072
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_13), (((/* implicit */short) (_Bool)1))))), ((+(3738605560U)))))) ? (((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */int) var_18)) : (min((((/* implicit */int) var_10)), (var_15))))) : (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_10))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_21 = max((max((((/* implicit */long long int) (~(-1031871894)))), (8440094421459803625LL))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (arr_5 [i_0]))));
                            var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(arr_0 [i_0] [i_0])))) ? (((int) arr_1 [i_0] [i_2])) : (((/* implicit */int) arr_4 [i_1]))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) max((var_23), ((-(((/* implicit */int) (short)28909))))));
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((long long int) (~((+(((/* implicit */int) arr_8 [13ULL] [13ULL] [i_1] [13ULL]))))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-6470612395827974688LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (max((3700461479U), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) : (var_3))))));
}
