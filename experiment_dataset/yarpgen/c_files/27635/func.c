/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27635
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((arr_3 [i_0]), (arr_3 [i_1])))), (min((((/* implicit */unsigned long long int) var_9)), (arr_0 [i_0])))));
                arr_6 [i_0] [i_0] [(unsigned char)13] = ((/* implicit */long long int) ((700074334) & (arr_4 [i_0] [i_1])));
                var_15 = ((/* implicit */unsigned int) -1910774113);
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_8);
    var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1910774113)) ? (((6076005473737832471ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1103863643U)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_18 = ((/* implicit */unsigned char) (~(max((((((/* implicit */long long int) 1910774137)) | (8589410304LL))), (((/* implicit */long long int) (~(var_4))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) 3191103668U);
                arr_14 [i_3] [i_3] [i_2] = arr_0 [i_3];
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) arr_9 [5] [i_3]);
                            var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_8)))))), (((unsigned long long int) ((((/* implicit */int) arr_10 [i_3] [15LL])) != (((/* implicit */int) arr_17 [i_2] [i_2] [i_3] [i_3] [i_2] [7LL])))))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5] [i_3])) ? (((/* implicit */int) arr_10 [i_4] [i_3])) : (((/* implicit */int) arr_10 [i_2 - 2] [i_4]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_4] [14U])) : (((/* implicit */int) arr_10 [i_2] [i_5])))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_4])) ? (((/* implicit */int) arr_10 [i_5] [i_3])) : (((/* implicit */int) arr_10 [i_3] [i_5]))))));
                        }
                    } 
                } 
                arr_20 [i_3] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2646606540830965765LL)))));
            }
        } 
    } 
}
