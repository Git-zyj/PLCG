/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21260
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
    var_15 = ((/* implicit */short) ((((((var_3) > (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) (short)2205)) ? (((/* implicit */int) (short)-2206)) : (((/* implicit */int) (unsigned short)14276)))) : (var_13))) >= ((~(((/* implicit */int) max((((/* implicit */short) var_11)), ((short)2220))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_12 [i_1] [(unsigned short)3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2206)) ? (((/* implicit */int) arr_5 [i_1] [i_0 + 1] [i_4] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_2 - 1] [i_3 + 1])))))));
                                arr_13 [i_0] [i_1] [i_2 - 1] [i_3 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (unsigned char)241)))));
                                arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3 + 2] [i_4] |= ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-2205)))) >= (((/* implicit */int) (short)2205)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (short)-2213)) : (((/* implicit */int) (unsigned char)9))))))));
                                arr_21 [i_0] [i_6] [i_6] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)110))) - (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) (short)-2214))))), (min((((/* implicit */unsigned long long int) (unsigned short)38681)), (5433792114396419042ULL)))))));
                            }
                        } 
                    } 
                    var_17 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_8)))))) < ((~(-8916024013968113239LL)))));
                }
            } 
        } 
    } 
}
