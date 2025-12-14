/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249311
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */short) (~((+(((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))))));
                    arr_9 [i_1] = ((/* implicit */long long int) (((((!(arr_4 [i_0] [i_0] [i_0]))) || (((/* implicit */_Bool) max((-5884219243416398393LL), (arr_0 [i_0])))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (arr_3 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_7 [10U] [i_1] [(unsigned short)4] [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_1])) ? (arr_7 [i_0] [i_1] [i_2] [i_1]) : (arr_7 [1U] [i_1] [i_2] [i_1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            {
                var_10 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_3))) ? ((~(((/* implicit */int) arr_10 [i_4])))) : ((~(((/* implicit */int) arr_13 [i_3]))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) : ((+(0U)))));
                var_11 = ((/* implicit */long long int) min((var_11), ((~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2264030488069126105LL)) ? (((/* implicit */long long int) arr_2 [(_Bool)1] [i_4])) : (-8259754992508073178LL)))) ? (min((((/* implicit */long long int) arr_12 [i_3] [i_3])), (2264030488069126105LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3] [i_3]))))))))))));
                arr_14 [i_3] [i_4] [i_3] = ((/* implicit */long long int) arr_2 [i_3] [(unsigned char)14]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        for (long long int i_6 = 2; i_6 < 12; i_6 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_19 [i_6 + 1] [i_6 + 2] [i_6 + 1])) ? (arr_19 [i_6 + 1] [i_6 - 2] [i_6 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6 + 1] [i_6 + 1] [i_6 - 2])))))))));
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_6 + 2] [(short)10])) ? (25U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18346))))))) == (((/* implicit */unsigned int) ((/* implicit */int) max(((short)14933), (((/* implicit */short) arr_15 [i_6 - 1] [i_6])))))))))));
                arr_21 [i_5] = ((/* implicit */_Bool) (short)18346);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (((+((+(((/* implicit */int) var_4)))))) <= (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_4)))))));
    var_15 = ((/* implicit */long long int) var_4);
}
