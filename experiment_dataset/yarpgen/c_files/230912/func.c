/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230912
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) max(((unsigned short)49790), (((/* implicit */unsigned short) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) 413100981)) : (arr_8 [i_2] [i_2] [i_1] [i_2])))) ? (((/* implicit */unsigned int) (~((~(var_8)))))) : (min((((/* implicit */unsigned int) max((var_11), (arr_7 [i_3] [i_2] [i_0])))), ((-(arr_8 [i_0] [i_0] [i_2] [i_2])))))));
                        var_14 = ((/* implicit */int) 958180668U);
                    }
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            arr_16 [i_2] [i_1] [i_2] [i_2] = var_6;
                            var_15 = var_9;
                            var_16 = ((/* implicit */_Bool) (unsigned short)15743);
                        }
                        var_17 = ((/* implicit */unsigned short) 1008);
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            var_18 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11))) : (-4738363203777690179LL)))) ? (((/* implicit */unsigned int) ((int) (_Bool)1))) : ((+(min((arr_6 [i_1] [i_2] [i_4] [i_6]), (((/* implicit */unsigned int) var_8)))))));
                            var_19 = ((/* implicit */unsigned int) ((1504389516U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49781)))));
                        }
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_7);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) var_4))));
}
