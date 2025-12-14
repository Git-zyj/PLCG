/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243238
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(-882699218))), (((/* implicit */int) (unsigned short)64680))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (var_5))) : (((/* implicit */unsigned int) -882699235))));
    var_18 = ((/* implicit */unsigned long long int) (signed char)-119);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 3; i_2 < 19; i_2 += 4) 
                {
                    arr_9 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) arr_6 [i_0] [(unsigned short)21] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_17 [i_2] = ((/* implicit */short) ((9223372036854775807LL) ^ (((/* implicit */long long int) (~(3599724097U))))));
                                var_19 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (short)-8650)) || (((/* implicit */_Bool) (unsigned char)216)))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_2] [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_7 [i_2] [i_2] [i_2])) | (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2])))) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_2])) : (((/* implicit */int) (short)-8650))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        arr_22 [i_2] = ((/* implicit */unsigned short) ((unsigned int) arr_8 [i_5 - 1] [i_1] [i_2] [i_2 + 2]));
                        var_20 = ((((/* implicit */_Bool) 18220685183753703727ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-1)));
                    }
                }
                arr_23 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */int) arr_3 [i_1])) & (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_15 [i_0]))))))));
                arr_24 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (signed char)-115))) ? ((-(arr_21 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [(_Bool)1] [(_Bool)1]))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0])) <= (arr_4 [i_0] [i_0] [i_0]))))))) & (((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17))))) - (((/* implicit */unsigned int) min((((/* implicit */int) arr_7 [i_1] [i_1] [i_1])), (-882699235))))))));
            }
        } 
    } 
}
