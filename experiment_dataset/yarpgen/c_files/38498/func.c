/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38498
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)62)) << (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned char)202))))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((unsigned long long int) (unsigned char)192))))) ? (((var_11) << (((max((var_3), (var_1))) - (5904529443822033850ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((1313352645536774207ULL) == (((/* implicit */unsigned long long int) 976138974)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 976138974)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) (unsigned char)54))));
                                var_19 = ((/* implicit */signed char) var_7);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 127523176U)) ^ (((((/* implicit */_Bool) ((1609536009) + (((/* implicit */int) (signed char)97))))) ? (((((/* implicit */_Bool) -320494657)) ? (((/* implicit */long long int) var_10)) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) 17133391428172777409ULL))) == (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (_Bool)1))))))))) ^ ((-(((((/* implicit */_Bool) (signed char)44)) ? (422765098U) : (3393345573U)))))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                {
                    arr_25 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)54)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 575757530610371787LL)))))) : (((((/* implicit */_Bool) arr_16 [i_5] [i_6])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) ? (((var_12) & (((/* implicit */int) arr_16 [i_5] [i_6])))) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (short)-14696))))))));
                    arr_26 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_21 [i_6]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_6])))))))) ? (((((/* implicit */int) arr_16 [i_5] [i_6])) | (((/* implicit */int) (signed char)-3)))) : ((+(((/* implicit */int) (signed char)-22))))));
                    var_21 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)96))))))) ? (1531723604U) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_13)))))))));
                    var_22 = ((/* implicit */unsigned long long int) (unsigned short)2360);
                }
            } 
        } 
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) > (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (unsigned short)28828))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_4)) : (2628539617781003142ULL)))))));
    var_24 = ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26894)) | (((/* implicit */int) (_Bool)1))))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -953995131)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) (unsigned char)60))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)44))));
}
