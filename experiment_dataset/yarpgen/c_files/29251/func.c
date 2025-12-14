/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29251
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((int) (+(((((/* implicit */_Bool) -437545514)) ? (8462135351627053329LL) : (8462135351627053315LL))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */int) (unsigned short)0);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) (+(8462135351627053329LL)));
                                var_14 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4 + 1] [i_4] [(short)5] [i_4 - 1]))))))) * (((((_Bool) var_7)) ? (arr_1 [i_4 + 2]) : (((/* implicit */unsigned long long int) arr_4 [i_4 + 2]))))));
                                var_15 = ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_0] [7]);
                                arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) min(((unsigned short)31910), (((/* implicit */unsigned short) var_11)))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_0] [i_1])) : (arr_3 [i_4] [i_1])))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)126))) : (8462135351627053321LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_4] [i_3] [i_1] [i_1] [i_0] [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534)))));
                            }
                        } 
                    } 
                    var_16 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1] [3] [i_2]))))) ? (max((((/* implicit */unsigned long long int) var_2)), (9541681641592695563ULL))) : (((/* implicit */unsigned long long int) (~(var_9)))))) >= (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2]))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) 989106429U))));
    }
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_5)) & (((/* implicit */int) (!(var_11)))))) : (((((/* implicit */int) ((_Bool) -1261579476751012058LL))) + (((/* implicit */int) (unsigned short)48329))))));
}
