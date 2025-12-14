/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32103
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
    var_17 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + ((+(3675687722U))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */unsigned char) ((_Bool) arr_2 [i_0 - 1]));
        var_18 *= ((/* implicit */short) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (_Bool)0))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-25370)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) ^ (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))));
                        var_20 = ((var_4) == (((/* implicit */unsigned long long int) ((arr_4 [i_3] [i_2]) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (unsigned char)233))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-25370))))))));
                        var_22 = ((/* implicit */unsigned int) arr_8 [i_3]);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)47097)) / (((/* implicit */int) var_8))))) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) (short)25369)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))))));
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) arr_6 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
    }
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 4) 
    {
        var_24 += ((/* implicit */long long int) arr_7 [i_4]);
        var_25 = ((/* implicit */int) arr_0 [i_4 + 2]);
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 4) 
    {
        var_26 = 1805829866U;
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) -553585068))) && (((/* implicit */_Bool) arr_7 [i_5])))))));
        var_28 = ((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) ((unsigned char) (unsigned char)2))) : (((((/* implicit */int) var_15)) | (((/* implicit */int) (signed char)-49)))));
        arr_16 [i_5] = ((/* implicit */unsigned short) (short)25376);
    }
    for (short i_6 = 1; i_6 < 18; i_6 += 2) 
    {
        arr_21 [i_6] = ((/* implicit */unsigned long long int) (unsigned char)180);
        arr_22 [i_6] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 7817953850989828815ULL)) ? (((/* implicit */int) (short)15904)) : (((/* implicit */int) (unsigned short)47097))))) ? (((/* implicit */int) ((unsigned short) var_11))) : ((-(((/* implicit */int) (signed char)40)))))), (((/* implicit */int) (signed char)46))));
        var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)47)) ? (((((/* implicit */_Bool) min((-1079097208429365642LL), (((/* implicit */long long int) (short)25370))))) ? ((-(((/* implicit */int) var_16)))) : (((/* implicit */int) ((short) (unsigned char)213))))) : ((+(((/* implicit */int) arr_9 [i_6] [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6]))))));
    }
    var_30 = (-(((/* implicit */int) (_Bool)1)));
    var_31 = ((/* implicit */unsigned short) min((min((2634551317392602013ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)40))))))), (((/* implicit */unsigned long long int) (short)7))));
    var_32 = ((/* implicit */unsigned int) ((unsigned short) (signed char)46));
}
