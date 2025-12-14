/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31285
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
    var_19 = ((/* implicit */unsigned short) (((_Bool)1) ? (min((((long long int) var_8)), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) var_18))));
    var_20 = ((/* implicit */_Bool) max((min((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) 0))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_21 ^= max(((+(max((-3737367165112083152LL), (((/* implicit */long long int) (signed char)-87)))))), (min((((/* implicit */long long int) (signed char)-87)), (-9098525250223290886LL))));
        var_22 = ((/* implicit */unsigned short) min((arr_1 [i_0]), (max((3612300589412146637LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)60703)) && (((/* implicit */_Bool) (unsigned char)233)))))))));
        var_23 = ((/* implicit */_Bool) arr_2 [i_0]);
        var_24 = ((/* implicit */short) 3612300589412146637LL);
    }
    for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                for (unsigned int i_4 = 1; i_4 < 13; i_4 += 1) 
                {
                    {
                        var_25 = max((((unsigned int) arr_3 [(short)4])), (((/* implicit */unsigned int) max((((var_8) ? (((/* implicit */int) (signed char)86)) : (var_4))), ((-(((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 1 */
                        for (int i_5 = 2; i_5 < 11; i_5 += 4) 
                        {
                            var_26 += ((/* implicit */signed char) ((short) ((int) (unsigned short)60707)));
                            var_27 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-82)), (var_15)))), ((-(var_12))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((((/* implicit */int) (signed char)86)) | (-1564721757))) : (var_4))))));
                            var_28 = ((/* implicit */unsigned short) ((unsigned int) ((min((var_17), (-12))) % (((/* implicit */int) arr_6 [i_5])))));
                            var_29 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((var_4), (((/* implicit */int) arr_7 [5] [i_2]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)7)), ((unsigned char)196)))) : ((-(var_4)))))));
                        }
                    }
                } 
            } 
        } 
        arr_15 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_6 [i_1 + 2])) * (0))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1])))))));
        var_30 *= ((/* implicit */unsigned long long int) var_6);
    }
}
