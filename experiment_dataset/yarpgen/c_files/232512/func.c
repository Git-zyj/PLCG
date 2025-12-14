/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232512
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
    var_13 = ((/* implicit */unsigned char) min((((/* implicit */signed char) ((((/* implicit */int) (signed char)73)) == (((/* implicit */int) min((((/* implicit */short) var_12)), (var_11))))))), (var_6)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 7; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) ((((((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (arr_6 [i_0] [i_0] [i_0])))) == (arr_5 [i_2 + 1] [i_3]))) && (((/* implicit */_Bool) ((18024494918306572178ULL) << (((((arr_9 [i_0] [0LL]) | (((/* implicit */int) (_Bool)0)))) + (596016415))))))));
                            arr_10 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_0])) ? (max((((/* implicit */long long int) (short)9432)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_1] [i_1] [i_2] [i_0])))))) && (((/* implicit */_Bool) var_1))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_0] &= ((signed char) ((((/* implicit */unsigned int) arr_5 [i_0 - 1] [i_1])) - (var_0)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))));
                    arr_18 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */long long int) arr_13 [i_4]);
                    arr_19 [i_4] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_4]))) : (var_7)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_12 [i_4])))) <= (((/* implicit */int) ((signed char) arr_14 [i_5] [i_4])))));
                    var_16 = ((/* implicit */_Bool) min((arr_15 [i_4] [i_5]), (((unsigned char) var_10))));
                }
            } 
        } 
    } 
}
