/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222890
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_10 [(_Bool)1] [i_0] [i_2] = arr_9 [i_0] [4U] [i_2] [i_0];
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned int) (!(var_5)));
                        arr_14 [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (!((_Bool)1)))) <= (((/* implicit */int) (_Bool)0))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 16; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */short) (~((-(((var_9) / (var_0)))))));
                            arr_23 [i_0] [4U] [i_2] [i_4 - 1] [i_0] = ((/* implicit */unsigned short) arr_3 [i_1 - 2] [i_0]);
                            var_13 = ((/* implicit */unsigned int) var_8);
                            var_14 = ((unsigned short) (~(min((((/* implicit */long long int) var_7)), (var_9)))));
                            var_15 = ((/* implicit */unsigned int) var_8);
                        }
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            arr_26 [i_0] [i_4 + 1] [1U] [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
                            arr_27 [i_0] [i_0] [i_0] [4U] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_19 [i_6] [i_6] [i_0] [i_6] [i_6]) | (((/* implicit */long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) (_Bool)1)))))))) || (min(((_Bool)0), (var_6)))));
                        }
                        arr_28 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_4])) || (((/* implicit */_Bool) (+(((long long int) 1073741808U)))))));
                    }
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) % (((/* implicit */int) arr_15 [4U] [4U] [i_1 - 2] [15LL]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((var_7) - (var_11)));
}
