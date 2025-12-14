/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222200
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
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((max((((/* implicit */long long int) ((var_13) ? (((/* implicit */int) (unsigned short)63)) : (((/* implicit */int) var_2))))), (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_0]) >> (((arr_3 [i_1]) - (1750092895778143784LL)))))) ? (((/* implicit */int) arr_6 [i_0 - 2] [i_0])) : (((/* implicit */int) var_10))))))))));
                arr_7 [i_1] [i_0] &= ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_13))))))) ? (((min((((/* implicit */long long int) arr_0 [i_1] [i_0 + 1])), (var_8))) | (((/* implicit */long long int) (+(((/* implicit */int) (short)-22633))))))) : (((/* implicit */long long int) (((~(arr_5 [i_0]))) >> ((((~(var_8))) + (2474971042881037830LL)))))));
                var_16 = ((/* implicit */short) max((373719526), (((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 + 2])) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (short)22609))))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((arr_1 [i_0 - 1]) < (((/* implicit */unsigned int) var_0)))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (7047566812316894400LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))))))));
                var_18 |= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (8328985949559726565LL) : (((/* implicit */long long int) arr_5 [i_0 - 1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_14))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22636)) ? (16777215LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)84), ((signed char)84))))) : (3155772863U)))) : (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)252))))))))))));
    var_20 = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) -1466309697965483222LL)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (short)22635)))) & (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (signed char)-116))))) ? (max((359795435), (((/* implicit */int) var_4)))) : ((+(((/* implicit */int) (unsigned short)65535))))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) != ((+(((/* implicit */int) max((((/* implicit */short) var_4)), (var_2))))))));
}
