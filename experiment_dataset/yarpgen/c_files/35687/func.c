/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35687
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_14 += ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */signed char) arr_3 [i_3]);
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)93)) >= (((/* implicit */int) ((((/* implicit */int) arr_6 [i_3 - 2] [i_3] [i_3 - 1] [i_3 - 1])) >= (((/* implicit */int) arr_7 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 1]))))))))));
                        var_17 = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2] [i_3 - 2]);
                    }
                    for (unsigned char i_4 = 2; i_4 < 15; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 1; i_5 < 16; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [(_Bool)1] [i_5 - 1])))), (max((309035988), (((/* implicit */int) var_10))))))), (((((_Bool) var_12)) ? (min((((/* implicit */unsigned int) var_11)), (2048756878U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_7 [i_1] [i_2] [(_Bool)1] [3ULL]))))))))));
                            arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_4 - 2]))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0] [i_4 + 2] [i_5 - 1] [(short)10] [i_5]))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_9 [(_Bool)0])))) : (var_4)))));
                            arr_16 [i_0] [i_0] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */short) ((unsigned long long int) max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) var_5)))));
                        }
                        arr_17 [i_4 - 1] [i_4] [i_1] [i_1] [i_1] [(unsigned short)6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned short)45450))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_3 [i_4 + 2])))) : (((((/* implicit */_Bool) arr_3 [i_4 - 1])) ? (((/* implicit */int) arr_3 [i_4 - 2])) : (((/* implicit */int) (signed char)-22))))));
                        arr_18 [i_1] [i_2] [i_4 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned char) arr_14 [i_0] [i_1] [i_4 + 1] [(_Bool)1] [i_1] [i_1])), (arr_3 [(_Bool)1]))))))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) var_0))))));
                        arr_19 [i_0] [i_0] [i_1] [i_4 + 2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */short) arr_7 [i_0] [i_0] [i_2] [i_4])), (min((((/* implicit */short) (signed char)-39)), (min(((short)31), (((/* implicit */short) (signed char)(-127 - 1)))))))));
                    }
                    arr_20 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)7591))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) var_3);
    var_20 = ((/* implicit */short) var_11);
}
