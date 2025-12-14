/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33102
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
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] [i_1] [i_1] [i_1] [8ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1] [i_2])) * (((/* implicit */int) var_7))))) * (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) -3497864704126917964LL)) ? (var_0) : (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 - 1]))) / (6366602468808030644LL))))))));
                            var_11 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_2] [i_3 - 1])) + (((((/* implicit */_Bool) arr_6 [i_0 + 4] [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_6 [0LL] [i_2] [i_3 + 2])) : (((/* implicit */int) arr_6 [i_1 + 1] [i_2] [i_3 + 2]))))));
                            arr_11 [0LL] [i_1 + 1] [i_1 + 1] [i_1] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [14ULL])) > (((/* implicit */int) ((signed char) min((-6366602468808030645LL), (((/* implicit */long long int) var_5))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned short i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        {
                            arr_17 [i_1] [i_4] [i_5] = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2])))))))), (min((((/* implicit */unsigned long long int) arr_14 [i_0 - 3] [i_1 - 1] [i_4 - 1] [i_5 + 1])), ((-(9863177664224125882ULL))))));
                            arr_18 [i_1] [i_1] [i_4] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) < (arr_16 [i_0] [i_1] [i_4] [i_5])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) * (8583566409485425733ULL)))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */signed char) ((unsigned short) ((signed char) (~(((/* implicit */int) var_3))))));
            }
        } 
    } 
    var_13 += ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16334)) ? (var_0) : (var_0)))))));
}
