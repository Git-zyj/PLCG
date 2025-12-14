/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205666
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [(unsigned char)19] = ((/* implicit */unsigned char) (!((_Bool)1)));
                    arr_9 [i_1] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)18680)) ? ((+(((/* implicit */int) (signed char)-105)))) : ((-(((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) (-(var_9)))) ? ((~(((/* implicit */int) (signed char)105)))) : (((/* implicit */int) min(((signed char)105), (((/* implicit */signed char) var_7)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            {
                var_11 += ((/* implicit */signed char) min((var_1), (((/* implicit */unsigned long long int) (-(1078778823028928882LL))))));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)87)), ((short)-26258)))) ? ((+(((/* implicit */int) var_3)))) : ((+(((/* implicit */int) (signed char)-111))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : ((~(var_9)))));
                /* LoopNest 3 */
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) (signed char)-124);
                                arr_30 [10ULL] [10ULL] [i_7] [i_8] [i_8] [i_9] = min((max(((short)26258), (((/* implicit */short) (signed char)87)))), (((/* implicit */short) min(((_Bool)1), (var_2)))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) var_7)), ((-(((/* implicit */int) var_5))))));
                arr_31 [i_5] = ((/* implicit */long long int) var_2);
            }
        } 
    } 
}
