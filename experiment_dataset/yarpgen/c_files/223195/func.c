/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223195
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((698679481314990169LL), (((/* implicit */long long int) (signed char)44)))), (((/* implicit */long long int) arr_4 [i_0]))))) && (((/* implicit */_Bool) ((long long int) (unsigned short)3740)))));
                    var_18 = ((/* implicit */long long int) max((max((arr_9 [i_2 - 1] [(unsigned short)16] [i_2 - 1] [i_2 - 1]), (arr_9 [i_2 - 1] [(unsigned char)4] [i_2 + 1] [i_2 + 1]))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [0] [i_2 + 1] [i_2 + 1])) || (((/* implicit */_Bool) arr_9 [i_2 + 1] [(unsigned char)10] [i_2 + 1] [i_2 + 1])))))));
                    var_19 = ((/* implicit */unsigned short) max((((max((var_16), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [(signed char)12])))) - ((-(13452816090011437753ULL))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */int) (signed char)-45)), (-7))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_8 [i_0] [i_0])), (var_11)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                {
                    var_20 = min((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_17 [i_5] [i_4] [i_3]))))))), (max((((unsigned long long int) var_7)), ((+(6486230189059440348ULL))))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((_Bool) -3875877013650165094LL)))));
                    var_22 = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_17 [i_3] [i_4] [i_5])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_17 [i_3] [i_3] [i_3]))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            {
                                arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [10LL] [i_4] [10LL])) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_13 [i_3])), (arr_22 [i_3] [i_4] [i_5] [(short)0] [i_7])))) ? ((-(6486230189059440348ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32760))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [(_Bool)1] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_20 [(signed char)9] [(signed char)9] [i_4])) : (((/* implicit */int) (unsigned short)16384))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)41211)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_18 [i_3] [i_5] [(_Bool)1] [i_3]))))) : (-4788173694873136663LL))))));
                                var_23 = ((/* implicit */unsigned short) 3875877013650165091LL);
                                arr_25 [i_3] = ((unsigned short) arr_21 [i_3] [i_4] [i_5]);
                                var_24 = ((/* implicit */unsigned int) (~((+(((((/* implicit */int) var_7)) + (((/* implicit */int) (signed char)-8))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) var_5))));
}
