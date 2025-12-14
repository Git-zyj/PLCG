/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23214
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1044831651U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39789))) : (702104233U)))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_5 [i_2] [i_1] [i_0]))))), (((/* implicit */unsigned long long int) var_16))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) var_15);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_3] &= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_4] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) var_15)) : (arr_5 [i_4] [i_2] [i_1]))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1386)) ? (((/* implicit */int) (short)-1386)) : (((/* implicit */int) (unsigned short)39763))))) ? ((+((+(14980156971987305432ULL))))) : (((/* implicit */unsigned long long int) (+(9033597333296429911LL))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((int) arr_5 [i_0] [i_1] [i_2]));
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */signed char) (~((~(((/* implicit */int) ((unsigned char) -9033597333296429912LL)))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-28070)) ? (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)25747))))), (17898624191295977476ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3)))));
}
