/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230371
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
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) (-9223372036854775807LL - 1LL))))));
    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), ((((~(var_16))) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1])))) % (((/* implicit */int) max((((/* implicit */unsigned short) ((-9223372036854775787LL) != (((/* implicit */long long int) ((/* implicit */int) var_17)))))), (var_14))))));
        arr_3 [i_0 + 1] [i_0 + 1] = ((/* implicit */short) min((((/* implicit */unsigned short) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) | (9223372036854775787LL))))), ((unsigned short)0)));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_22 = ((/* implicit */_Bool) (~(11468050768895766133ULL)));
            var_23 = ((/* implicit */_Bool) max((var_23), ((!(((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) || (((/* implicit */_Bool) 3570042609572349991LL))))))));
            arr_7 [i_1] = ((/* implicit */short) 3867499027U);
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 16; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
        {
            {
                var_24 ^= ((/* implicit */unsigned short) (-(((int) ((((/* implicit */_Bool) 5034322649929364231LL)) ? (((/* implicit */int) arr_5 [i_3 + 1] [i_2] [i_2])) : (((/* implicit */int) arr_0 [i_3])))))));
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 16; i_4 += 2) 
                {
                    for (long long int i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_6 = 3; i_6 < 14; i_6 += 1) 
                            {
                                arr_19 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 - 1]))) >= (-321470351816249297LL)));
                                arr_20 [i_2 - 1] [i_3] [i_2] [i_5] [i_3] [i_4 + 2] = ((/* implicit */short) ((8191U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3 - 1])))));
                            }
                            /* vectorizable */
                            for (long long int i_7 = 1; i_7 < 15; i_7 += 4) 
                            {
                                arr_25 [i_3] [i_4] [i_3] = -5034322649929364234LL;
                                var_25 ^= ((/* implicit */unsigned short) ((_Bool) -3474497111098243654LL));
                                arr_26 [i_7] [i_3] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) (!(arr_24 [i_3] [i_7 - 1] [i_3 - 1] [i_3 + 3] [15U] [i_3] [i_3])));
                                var_26 ^= ((/* implicit */signed char) (+(((/* implicit */int) ((9223372036854775787LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6505))))))));
                                arr_27 [i_3] [i_5 + 2] [i_4 - 1] [i_4] [i_3] [i_2] [i_3] = ((/* implicit */int) ((short) arr_23 [i_3] [i_3]));
                            }
                            arr_28 [i_2] [5LL] [i_4] [i_4 + 2] [i_5 - 1] [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_21 [i_5] [i_5 + 1] [i_5] [i_3] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4))) : (321470351816249296LL)))));
                            var_27 = ((((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)64))))) / (((3570042609572349991LL) / (((/* implicit */long long int) ((/* implicit */int) var_14))))))) > (((((/* implicit */long long int) ((/* implicit */int) max((arr_10 [i_5]), (arr_12 [i_4]))))) / (arr_17 [i_2 + 1] [i_3] [i_4] [3LL] [i_3] [i_3 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
