/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42130
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) - (1222676704U))))), (max((((/* implicit */long long int) arr_2 [i_1 - 2] [i_1 - 2] [i_1 + 1])), (((6643203253939690470LL) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_1 [i_1 + 1] [i_1]))))) : (((var_13) ? (((((/* implicit */_Bool) var_9)) ? (var_12) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                arr_14 [16] [i_2] [i_3] = ((/* implicit */short) arr_12 [3LL] [(signed char)1]);
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            var_16 *= ((/* implicit */short) max((((/* implicit */unsigned short) arr_19 [i_2 + 3] [i_4] [i_4] [i_4 + 1] [i_4 + 1])), (((unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_18 [i_2] [i_2] [i_2] [i_2 + 2]) : (var_3))))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_2))));
                            arr_20 [i_4] [i_3] [i_4] [(_Bool)1] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_10 [i_2 - 1] [i_4 + 1])) + (((/* implicit */int) arr_10 [i_2 + 3] [i_4 + 1]))))));
                        }
                    } 
                } 
                var_18 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_8 [i_2 + 3])))) ? ((+(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)39106), (((/* implicit */unsigned short) var_1))))))));
                var_19 = ((/* implicit */long long int) (+(min((((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) (~(min((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (unsigned short)39106))))), ((~(((/* implicit */int) (unsigned short)39106))))))));
    var_21 += ((/* implicit */long long int) var_13);
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : ((~(var_2)))));
}
