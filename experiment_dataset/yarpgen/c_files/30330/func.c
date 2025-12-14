/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30330
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
    var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)5161)) ? (((var_15) >> (((((/* implicit */int) max(((short)-5162), ((short)-324)))) + (380))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-5162)) ? (((((/* implicit */_Bool) 305369655U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (short)5161))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_21 += ((/* implicit */short) (unsigned char)198);
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_3])), (((10715078342958607609ULL) << (((((/* implicit */int) (short)5160)) - (5139)))))))) ? (max(((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [7U] [i_0])))), (((/* implicit */int) arr_11 [i_1 + 1] [(short)6] [i_4 - 3] [i_4 - 1] [i_0])))) : ((-(((/* implicit */int) (short)5161))))));
                                arr_14 [i_0] [i_0] [i_2] [i_4] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_12)) != (((/* implicit */int) (short)5161))))))));
                            }
                        } 
                    } 
                    var_23 = ((((/* implicit */_Bool) (short)16128)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_8 [i_1] [i_0] [i_0] [i_1])), ((-(((/* implicit */int) (short)-5162))))))) : (((((/* implicit */unsigned long long int) (~(var_3)))) | (((((/* implicit */_Bool) var_5)) ? (6804457841690865585ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5166))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_16))));
                                arr_23 [i_0] [i_1 - 1] [i_0] [i_5] [10ULL] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5161))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5162))) : (arr_18 [i_0] [(short)4])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) - (arr_3 [0U] [0U] [0U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-5161), (((/* implicit */short) var_4))))))))));
                            }
                        } 
                    } 
                }
                var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)9003)) ? (((/* implicit */int) (short)-5144)) : (((/* implicit */int) (short)-5178)))) - (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_1] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1 - 1] [i_1 + 2] [i_0]))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) (short)-5123);
    var_27 = ((/* implicit */short) ((((unsigned long long int) ((unsigned int) 18446744073709551615ULL))) < (max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)5163)) : (((/* implicit */int) (short)-5162)))))))));
}
