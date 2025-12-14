/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198005
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-31))) - (var_10)));
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_6)), (18446744073709551615ULL)));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) min((-1294035750951379834LL), (((/* implicit */long long int) ((unsigned int) arr_2 [i_0] [i_0])))));
        arr_4 [8U] |= ((/* implicit */unsigned char) (+(((((/* implicit */int) ((short) (signed char)-18))) | (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
        arr_6 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_13 |= ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_1 [i_1] [i_1])), (((long long int) arr_1 [i_1] [i_1]))));
        var_14 = ((/* implicit */long long int) ((short) ((unsigned char) (-(((/* implicit */int) (short)-28993))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(var_10)))), (((((/* implicit */_Bool) (short)-29005)) ? (((/* implicit */long long int) var_1)) : (var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_9 [i_1])), (var_6))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (arr_2 [i_1] [i_1])))));
        arr_11 [i_1] [i_1] = ((/* implicit */short) (unsigned short)57679);
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        arr_14 [i_2] [i_2] = ((/* implicit */short) ((signed char) var_4));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (-(-4017055597961396280LL))))));
    }
    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) var_4);
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */long long int) var_1)), (3469204919656588157LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5])))))) ? ((-(arr_13 [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3]))))))));
                    var_19 = ((/* implicit */unsigned char) var_10);
                    var_20 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) max(((signed char)-27), (var_3)))) != (((/* implicit */int) (!(((/* implicit */_Bool) (short)29004)))))))), ((-(arr_19 [i_5] [i_5] [i_5])))));
                    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_19 [i_5] [i_4] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_19 [i_5] [i_4] [i_3]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)-28993)) : (((/* implicit */int) (unsigned char)66))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)57668)) * (((/* implicit */int) (short)0)))))))))));
                    var_22 |= ((/* implicit */unsigned short) min((((/* implicit */short) (signed char)27)), ((short)-29011)));
                }
            } 
        } 
        var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) max((((/* implicit */unsigned short) var_7)), ((unsigned short)51350))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3]))) : (12138170709434069611ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3])))))) : (arr_21 [i_3])))) : (max((((/* implicit */long long int) (unsigned char)99)), (((((/* implicit */_Bool) (short)-28993)) ? (3469204919656588148LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_3] [i_3] [i_3])))))))));
    }
}
