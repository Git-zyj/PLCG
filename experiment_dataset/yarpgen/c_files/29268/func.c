/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29268
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
    var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_15))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1 - 1] [i_0] = ((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_0])) < (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_1])), (var_1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))) ? ((~(((/* implicit */int) arr_2 [(signed char)5] [(_Bool)1])))) : (((/* implicit */int) arr_2 [i_0] [16U]))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) arr_2 [(unsigned char)2] [i_1 - 1]);
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_3))));
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) var_14)), (var_13)));
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        for (int i_3 = 2; i_3 < 18; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (int i_5 = 3; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_4] [i_5])), (arr_8 [i_2]))))));
                            var_21 -= ((/* implicit */signed char) ((((/* implicit */int) min((var_16), (arr_11 [i_5 - 3] [i_4] [i_3 + 2])))) * (((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (((/* implicit */int) arr_11 [i_3 + 1] [i_4] [i_4])) : (((/* implicit */int) arr_11 [i_2 + 2] [i_3 + 1] [i_5 + 2]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 1; i_7 < 17; i_7 += 2) 
                    {
                        {
                            arr_24 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (+((+(arr_15 [(unsigned char)12] [i_3] [(unsigned char)12] [i_7])))))) ? (min((((/* implicit */unsigned int) (~(arr_14 [i_2] [i_2] [19LL])))), (arr_8 [i_2]))) : (((/* implicit */unsigned int) max((min((arr_20 [(unsigned short)1] [i_3] [i_7 + 2]), (((/* implicit */int) arr_2 [i_7] [i_7])))), (((/* implicit */int) arr_0 [i_2])))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) min((arr_8 [i_3 - 2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_6] [i_6] [(unsigned char)1] [i_2])) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) arr_23 [(signed char)17] [i_3 - 2] [i_6] [i_7])))))))) & (var_6)));
                            arr_25 [i_2 + 1] [i_3] [i_2 + 1] [i_7] [i_2] = ((/* implicit */int) var_8);
                            var_23 = ((/* implicit */long long int) ((arr_14 [i_2 + 2] [i_3 - 1] [i_3 + 2]) >= (((/* implicit */int) min((arr_23 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2 + 1]), (arr_23 [i_2 + 2] [i_3] [(unsigned short)0] [i_7]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
