/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45389
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
    var_20 -= ((/* implicit */unsigned long long int) max((((var_5) / (((((var_5) + (9223372036854775807LL))) >> (((var_15) - (10181102224715350727ULL))))))), (((/* implicit */long long int) var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_21 += ((/* implicit */int) arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_1] [(signed char)4] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) min((arr_8 [i_1] [i_3 + 1] [i_2] [i_1]), (arr_8 [(unsigned char)4] [i_3 + 1] [i_2] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_3 + 1] [i_2] [(short)13]))) : (arr_9 [i_0] [i_1] [i_2] [i_3])));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((arr_3 [i_1]) >> (((var_16) - (8292446316414493280LL)))))) ? (((var_19) ? (((/* implicit */int) var_6)) : (arr_1 [i_0] [i_0]))) : (((arr_6 [i_1]) / (((/* implicit */int) var_10)))))), (((/* implicit */int) arr_0 [i_0])))))));
                            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) arr_8 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_0])))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) 12128738615060374629ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_2] [i_3 + 1])))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_3] [i_2] [i_1] [i_0])), (var_8)))) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
                            var_25 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) arr_9 [i_3] [i_0] [(unsigned short)16] [i_3])) <= (var_9))) ? (((/* implicit */int) ((398298359) != (arr_2 [i_0] [i_0])))) : ((~(arr_1 [i_3 + 2] [i_3 + 1])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (int i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_26 = arr_0 [i_0];
                                arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((int) min((arr_14 [i_5 + 2]), (arr_14 [i_5 + 1]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    for (long long int i_8 = 3; i_8 < 17; i_8 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)224)) : (min((arr_21 [i_7] [i_8]), (((/* implicit */int) var_19)))))) * (((/* implicit */int) arr_20 [i_1]))));
                            var_28 = ((/* implicit */unsigned short) (~(var_3)));
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) arr_3 [i_1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) max(((signed char)-72), (((/* implicit */signed char) ((_Bool) min((((/* implicit */long long int) var_2)), (var_7)))))));
}
