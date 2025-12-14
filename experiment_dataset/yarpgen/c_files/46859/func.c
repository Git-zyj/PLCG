/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46859
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
    var_10 = var_6;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) var_4);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (signed char i_3 = 4; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_12 = 381329703U;
                            arr_12 [i_3] [i_2] [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) ^ (((unsigned int) var_6))));
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_8))));
                            var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((arr_7 [i_0] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_5 [3U] [i_3 - 4] [i_2] [i_3])))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (4250086436U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) < (44880860U))))))));
                            arr_13 [i_3] [i_2] = (signed char)115;
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((2999230628U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97))))))));
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_0] [(signed char)16] [(signed char)4] [i_0]))))), (min((((unsigned int) 25165824U)), (((/* implicit */unsigned int) min((var_2), (var_1))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        for (signed char i_5 = 2; i_5 < 17; i_5 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    for (unsigned int i_7 = 1; i_7 < 17; i_7 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned int) var_0);
                                arr_28 [i_4] [(signed char)1] [i_4] [(signed char)1] [i_6] [i_7] [(signed char)1] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((var_4) < (25165829U))))) ^ (min((var_4), (((/* implicit */unsigned int) arr_10 [i_4] [i_4] [i_6] [i_8]))))))));
                            }
                            /* vectorizable */
                            for (signed char i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
                            {
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((signed char) arr_3 [i_5 - 2] [i_7 - 1])))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_5 - 1] [i_5])) >= (((/* implicit */int) arr_29 [i_5 + 1] [i_6] [i_6] [i_6] [i_6] [i_7] [i_7 - 1]))));
                            }
                            arr_32 [i_4] [i_4] = (signed char)103;
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (-(((((/* implicit */int) (signed char)127)) / (((/* implicit */int) arr_23 [i_7] [i_7 + 1] [i_5 - 1])))))))));
                        }
                    } 
                } 
                arr_33 [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((126U), (((/* implicit */unsigned int) (signed char)-1))))))))));
            }
        } 
    } 
}
