/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192972
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_5)))) & (((/* implicit */int) ((arr_3 [i_0] [i_0] [(short)22]) >= (arr_1 [i_0])))))) / (((/* implicit */int) var_1))));
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2789598400349995058ULL)) ? (((/* implicit */int) (short)-1763)) : (((/* implicit */int) (unsigned char)177))))) ? (((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((((/* implicit */unsigned long long int) (-2147483647 - 1))) | (arr_1 [i_1])))));
                    var_13 *= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(short)13])) ? (692671133) : ((-2147483647 - 1))))) >= (arr_4 [i_2] [(short)20] [i_2] [i_2]))) ? (((/* implicit */int) (short)-4975)) : (((/* implicit */int) var_8))));
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (arr_4 [i_2] [i_1] [i_2] [i_2]) : (max((11345248014359247548ULL), (((/* implicit */unsigned long long int) var_4)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        for (unsigned short i_4 = 3; i_4 < 9; i_4 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    var_15 -= ((/* implicit */unsigned long long int) max(((short)-23023), (((/* implicit */short) (unsigned char)200))));
                    arr_13 [i_3] [i_4] [i_4] [i_4] = ((/* implicit */int) (+(max((arr_0 [i_4] [i_5]), (((/* implicit */unsigned long long int) 2147483647))))));
                    var_16 = ((/* implicit */short) max((((/* implicit */unsigned short) arr_9 [i_3])), (min((((/* implicit */unsigned short) min((arr_2 [i_4] [i_4]), (var_0)))), (var_8)))));
                }
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        for (short i_8 = 4; i_8 < 7; i_8 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((var_17), ((unsigned char)37)));
                                arr_21 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)119))));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (3037705041424884115ULL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 *= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((17039699816503487464ULL) - (17039699816503487464ULL)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((13319681299793618348ULL) - (13319681299793618327ULL)))))) : (max((((/* implicit */unsigned long long int) (unsigned short)35438)), (var_9)))))));
    var_20 = ((/* implicit */short) ((var_9) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
}
