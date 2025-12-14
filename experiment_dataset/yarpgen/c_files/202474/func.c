/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202474
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((long long int) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1]))))));
                    var_17 = arr_2 [i_0 - 1];
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_3 = 3; i_3 < 15; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 2; i_4 < 16; i_4 += 3) 
            {
                var_18 = ((((/* implicit */_Bool) ((unsigned short) -3991234106782500353LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1735071808U)))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (max((((/* implicit */long long int) (_Bool)0)), (7471246920435315720LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) arr_4 [i_3] [i_0] [i_3])))))))));
                arr_15 [4LL] [i_3] |= ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_2 [i_0]))))))));
            }
            var_19 = ((/* implicit */int) arr_1 [i_0] [i_3]);
        }
        for (signed char i_5 = 2; i_5 < 13; i_5 += 3) 
        {
            arr_19 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_5] [i_5] [i_5 - 2])) ? (min((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0 - 1])), (var_5))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_5] [i_5])) ? (var_14) : (arr_13 [i_0] [i_0] [i_5 - 1] [i_5]))))))));
            arr_20 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
            var_20 = ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 752021929U)) && (((/* implicit */_Bool) (signed char)2))))) >> (((((/* implicit */int) ((signed char) -3450184984606547860LL))) - (87)))))) < ((~(-3450184984606547832LL))));
        }
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) 3450184984606547835LL)) ? (3450184984606547861LL) : (((/* implicit */long long int) var_14))))))) || (((((((/* implicit */_Bool) 1354006518)) && ((_Bool)0))) || (((/* implicit */_Bool) var_10))))));
}
