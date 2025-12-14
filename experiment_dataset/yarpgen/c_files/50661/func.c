/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50661
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [i_1]), (arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -866515358)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_4))))) >= (max((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_3))))))) : ((((+(((/* implicit */int) arr_1 [i_0])))) ^ (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)10))))))));
                arr_5 [i_1] [(unsigned short)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_3))) ^ (((866515357) / (((/* implicit */int) arr_2 [i_0]))))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) 2717953793U)) || (((/* implicit */_Bool) (unsigned char)211))))) - (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) var_10)))))) : (var_6)));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) min((var_13), (var_9)));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        for (unsigned char i_3 = 2; i_3 < 24; i_3 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    arr_15 [i_4] [i_3] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_4] [i_4] [i_3 - 1]))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 4; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65531))))) < (((/* implicit */int) arr_10 [i_5] [i_5] [i_5 - 2]))));
                                var_15 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)65535)))) > (arr_20 [i_5] [i_5] [i_5] [i_4] [i_5 - 2])));
                                arr_21 [i_4] [i_5] = ((long long int) var_3);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) var_1);
                    var_17 = ((/* implicit */long long int) arr_16 [i_2] [i_3] [i_3] [i_2] [i_2] [i_4]);
                    var_18 &= ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2] [i_3] [i_4])) - (((var_6) * (((/* implicit */int) var_0))))));
                }
                for (long long int i_7 = 2; i_7 < 24; i_7 += 3) 
                {
                    arr_24 [1U] = ((/* implicit */unsigned long long int) ((((((arr_14 [i_2] [i_2] [i_2] [i_2]) & (arr_6 [i_2]))) << (((arr_12 [i_3] [(signed char)18] [i_3]) - (3419580419U))))) ^ (((/* implicit */int) ((unsigned short) 967236963)))));
                    arr_25 [i_2] [i_3] [i_7] = min((((/* implicit */long long int) (-((~(((/* implicit */int) arr_10 [7U] [i_3] [i_2]))))))), (((((/* implicit */_Bool) arr_11 [i_7 + 1] [i_7 + 1] [i_7 + 1])) ? (arr_11 [i_7] [i_7 - 2] [i_7 - 2]) : (arr_11 [i_7 - 2] [i_7] [i_7 - 2]))));
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -967236973)) ? (2175674904U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11)))) : (((((/* implicit */_Bool) arr_23 [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_23 [i_3 - 1]))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_11)), (arr_17 [i_3 - 2] [i_3] [i_7 - 2] [i_3])))) || (((/* implicit */_Bool) (-(arr_23 [i_3 - 2]))))));
                }
                var_21 = ((/* implicit */unsigned int) ((unsigned long long int) ((((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) (signed char)0)))) ? (((long long int) (short)-11637)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [(unsigned char)8] [i_3] [i_3] [i_3])) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) arr_7 [i_2]))))))));
                arr_26 [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_23 [i_3])))) || (((/* implicit */_Bool) (~(var_6)))))))));
                var_22 = ((/* implicit */_Bool) var_1);
            }
        } 
    } 
}
