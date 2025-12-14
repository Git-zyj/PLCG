/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201839
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 = (+(((((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */long long int) var_12))))) ? (((/* implicit */long long int) max((((/* implicit */int) (short)29297)), (var_12)))) : ((+(var_14))))));
                var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -430567016)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)119)), (max((411835704U), (((/* implicit */unsigned int) (short)22967))))))) : (-1486252620487505643LL)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 12; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    arr_13 [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) 404823962114288189LL);
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(arr_7 [(unsigned short)4] [i_2]))))));
                    arr_14 [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((unsigned char) var_8));
                    var_20 = max((max((arr_8 [i_3 + 1] [i_4] [i_4]), ((+(var_14))))), (((((/* implicit */long long int) 0U)) + (0LL))));
                }
            } 
        } 
        arr_15 [i_2] [i_2] = ((/* implicit */long long int) (short)-12328);
    }
    var_21 = ((/* implicit */short) var_10);
}
