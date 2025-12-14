/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31140
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -4466501459737108252LL))))) < (max(((~(((/* implicit */int) (short)-1)))), (((/* implicit */int) ((short) var_9)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_14 [i_2] [i_1] = ((/* implicit */unsigned short) (+(((long long int) var_10))));
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((var_8), (((/* implicit */int) var_9))))) ? (((3546922887566520088ULL) << (((628978699U) - (628978657U))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 1269772818U)) : (var_7))))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)25443)) != (((/* implicit */int) (short)13159))))), ((unsigned char)221)))) ? (910185371452928122LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)92))))));
                var_16 = ((/* implicit */long long int) ((short) (((~(((/* implicit */int) var_5)))) | ((+(var_8))))));
            }
        } 
    } 
}
