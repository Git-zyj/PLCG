/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38063
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
    var_20 &= ((/* implicit */unsigned int) ((((var_9) * (((var_15) / (((/* implicit */unsigned long long int) 8757596515443585938LL)))))) * (((((/* implicit */_Bool) var_4)) ? (((9621238896547761561ULL) * (16346192539465058629ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_21 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)59489))) != (8757596515443585924LL)));
                var_22 = ((/* implicit */unsigned char) ((unsigned short) ((9621238896547761561ULL) - (7811858245561509186ULL))));
                arr_4 [5ULL] [5ULL] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_10)) <= (((((2376674924813775203ULL) / (((/* implicit */unsigned long long int) var_7)))) % (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 8757596515443585924LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [7ULL] [7ULL]))) : (-8757596515443585925LL))) << (((var_1) - (4534812149455613345ULL))))))));
                                arr_14 [i_1] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24346))) : (var_15))) % (var_16)));
                                arr_15 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [0ULL] [i_1] [i_2] [i_0] [i_0]))) / (arr_11 [i_0] [i_0] [i_1] [i_1] [i_2]))) >> (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned char)1] [(unsigned char)1] [i_0])) : (((/* implicit */int) arr_10 [i_0] [(unsigned short)10] [13ULL] [i_0] [i_1])))) - (59472)))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 12; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            {
                                var_25 ^= (unsigned short)65535;
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)114)) * (((/* implicit */int) (unsigned short)18))))) > (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) * (8757596515443585944LL)))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (arr_22 [i_5 + 1])));
                    var_28 ^= ((/* implicit */long long int) (+(((10634885828148042429ULL) + (6290395169965472417ULL)))));
                }
                var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) - (var_19))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)221)), ((unsigned short)65527)))) - (65465))))))));
            }
        } 
    } 
}
