/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215831
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) ((short) (unsigned char)119))))), (((((/* implicit */_Bool) ((var_12) / (-9054712474895197235LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) 717949481U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 664041187U)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((long long int) 0));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 585410715)) ? (((/* implicit */int) ((signed char) ((long long int) 810258521U)))) : (((/* implicit */int) (unsigned char)136))));
                    arr_11 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16405))) : (((((/* implicit */_Bool) 3577017814U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_13)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                var_20 -= ((/* implicit */short) max((1330508273), (((/* implicit */int) (_Bool)1))));
                                arr_25 [i_6] [i_4] [i_6] [i_4] [i_4] [i_3] = ((/* implicit */long long int) (signed char)-1);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) ((int) ((long long int) max((0), (19)))));
                    arr_26 [i_3] [i_4] [i_4] = ((/* implicit */int) max((((/* implicit */long long int) ((int) ((signed char) (short)-12425)))), (((long long int) ((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */unsigned long long int) 16LL)))))));
                }
            } 
        } 
    } 
}
