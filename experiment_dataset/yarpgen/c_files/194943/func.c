/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194943
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
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */short) (-(((/* implicit */int) min((arr_2 [i_1] [i_0]), (arr_2 [i_1] [i_0]))))));
                var_12 = ((/* implicit */long long int) min((((7053471006594753177ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((int) arr_2 [i_1] [i_0])))));
                arr_4 [i_1] = ((unsigned long long int) ((((/* implicit */_Bool) (~(2031616)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1] [i_0])) | (((/* implicit */int) arr_2 [i_0] [2]))))) : (((unsigned int) (unsigned short)13135))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) max((2031637), (((/* implicit */int) var_9))))), (-3771021516934386291LL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) min((((unsigned int) var_9)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_4])))))));
                    arr_13 [i_2] [i_3] [i_2] = ((/* implicit */short) var_1);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (min(((((_Bool)1) ? (var_7) : (((/* implicit */long long int) 63U)))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_6)))))))));
}
