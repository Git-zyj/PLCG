/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222810
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 23; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_8 [i_1] [i_2 + 1] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_2 + 1] [i_1])) ? (arr_6 [i_1 + 4] [i_2 - 2]) : (arr_6 [i_1 + 4] [i_2 + 1])))));
                            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)19000)) ? (2732768566U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) + (var_8))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_7 [i_1] [(signed char)15] [18LL] [1LL]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))))) + (max((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (arr_6 [i_0] [i_1 + 4]) : (var_6))), (((/* implicit */long long int) ((_Bool) var_5)))))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 3; i_4 < 20; i_4 += 2) 
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) (short)12132)), (arr_1 [i_4 - 2] [i_1]))) == (max((arr_7 [i_1] [(signed char)18] [i_1 + 4] [i_1]), (((/* implicit */unsigned int) arr_0 [i_0])))))))) != (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_7 [i_1] [i_1 - 1] [i_4] [i_4 + 3]))) - ((+(var_4)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (long long int i_6 = 1; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) min((((/* implicit */int) var_0)), ((+(((/* implicit */int) ((arr_5 [4LL] [i_4 - 3] [i_5]) != (arr_13 [i_6 + 2] [i_4] [i_1 + 4] [i_0]))))))));
                                var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((10U) < (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (var_9))))));
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) min((arr_5 [i_1 + 3] [i_4 - 2] [i_4 - 3]), (arr_19 [i_0] [i_1] [i_4 + 3] [i_5] [i_6 + 3] [i_1 - 1])))))))));
                                var_18 += max((((unsigned int) min((arr_19 [i_0] [i_1] [i_4] [i_5] [i_6 - 1] [(signed char)18]), (((/* implicit */unsigned int) var_3))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3336945058U))))));
                                arr_20 [i_1] [i_4] [i_6 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_19 = var_4;
                        var_20 ^= ((/* implicit */unsigned short) var_7);
                    }
                    var_21 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-26)) : (((/* implicit */int) var_5))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned short) var_5)))))) == (max((((/* implicit */unsigned int) ((short) arr_18 [i_0] [i_0] [i_0] [i_1 + 4] [i_4] [i_4 - 1]))), (((((/* implicit */_Bool) var_4)) ? (arr_14 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_1 + 4] [i_1] [i_4] [i_4]))))))));
                }
                arr_24 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) ^ (var_4)))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-62)) ? (11U) : (1114583105U)))), ((~(var_6)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_9))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 36U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) var_7))));
}
