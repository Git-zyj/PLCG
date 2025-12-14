/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222700
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 19U)) ? (2942944727U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47765)))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((max((arr_1 [i_0]), (arr_1 [i_0]))) ? (((/* implicit */int) ((unsigned short) var_11))) : (((/* implicit */int) ((short) arr_1 [i_0])))));
                var_12 &= ((/* implicit */unsigned short) (+(((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (var_11))) ? (var_10) : (96612896513056873ULL)))));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)54341), (((/* implicit */unsigned short) (short)-17869))))) ? (((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) min((var_9), (var_9)))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7))))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) var_5))))))) | (min((((/* implicit */unsigned int) var_9)), (var_11)))))));
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2 - 1])) || (((/* implicit */_Bool) var_5)))))));
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 18; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_17 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_2])))))));
                            var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)55524))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (long long int i_7 = 3; i_7 < 13; i_7 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((((_Bool) 472524653)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((arr_16 [i_6] [i_7] [6LL]), (var_2)))))) >> (((((((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_7])) || (((/* implicit */_Bool) var_0))))) - ((+(((/* implicit */int) (unsigned short)34158)))))) + (34164)))));
                var_18 = ((/* implicit */signed char) ((long long int) ((arr_12 [i_6] [i_7 - 3] [i_7 + 2] [i_7 - 2]) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))));
}
