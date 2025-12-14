/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216148
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
    var_20 = ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned char)44)) ? (24ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) << (((((var_13) ? (var_1) : (((/* implicit */long long int) var_7)))) + (1575815041LL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) <= (((((/* implicit */int) var_19)) ^ (((/* implicit */int) var_6))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */_Bool) 31);
                var_22 ^= var_19;
                var_23 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_16))))))) || (((/* implicit */_Bool) -234629486575629212LL))));
                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (((-(((((/* implicit */_Bool) arr_3 [i_0])) ? (-2750997937236206867LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)211))))))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))))))));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -234629486575629226LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-17841)) : (((/* implicit */int) arr_7 [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_4 [(unsigned char)1] [i_1])))))) || (((((((/* implicit */_Bool) arr_2 [i_0])) ? (-234629486575629217LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))));
            }
        } 
    } 
}
