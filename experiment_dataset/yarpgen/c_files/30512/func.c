/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30512
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_9)), (1064300141226221543LL)));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_1 [i_0]))))))), (((4294967295U) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) var_3))))))))))));
    }
    for (int i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        arr_5 [i_1] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))));
        var_22 *= ((/* implicit */unsigned short) (short)0);
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)104)), ((short)12514)))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-1))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_15))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (arr_4 [i_1] [i_1]))))))))))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 4) 
            {
                {
                    var_24 = ((int) arr_7 [i_2]);
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (~((+(((/* implicit */int) max(((short)-1), ((short)-1)))))))))));
                }
            } 
        } 
        var_26 = (short)1;
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        for (short i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            {
                arr_16 [i_4] [i_4] [i_5] |= ((/* implicit */short) arr_12 [i_4]);
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)0))))) ? (((((/* implicit */int) arr_13 [i_5])) & (((/* implicit */int) (short)-1)))) : (((/* implicit */int) max((arr_13 [i_5]), (var_12))))))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_6))));
            }
        } 
    } 
}
