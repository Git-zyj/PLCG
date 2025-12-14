/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191227
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
    var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) < (4288733201U)))) : (((/* implicit */int) var_11)))))));
    var_16 += ((/* implicit */int) ((unsigned int) (unsigned short)4080));
    var_17 ^= ((/* implicit */signed char) (unsigned short)61451);
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)61487)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)4080))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_19 ^= ((/* implicit */short) min((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0]))))), (var_3))), (((/* implicit */unsigned long long int) (-((-(arr_1 [i_1]))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 4; i_3 < 14; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1]);
                                var_21 += ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_6 [i_0] [9]) : (((/* implicit */int) var_0)))) - (((/* implicit */int) (unsigned short)4096)))), (((((((/* implicit */_Bool) (unsigned short)61439)) ? (((/* implicit */int) (unsigned short)61456)) : (((/* implicit */int) arr_5 [i_0] [i_0])))) | (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), ((unsigned short)61447))))))));
                                var_22 += ((/* implicit */signed char) ((((/* implicit */int) arr_7 [(unsigned char)6] [i_1 - 1] [i_2])) >> (((((/* implicit */int) max(((unsigned short)4080), ((unsigned short)61439)))) - (61437)))));
                                var_23 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned short)4088))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0 + 1] [i_1 - 1])) / (((((/* implicit */int) (unsigned short)61461)) * (((/* implicit */int) arr_4 [i_0 + 2] [i_1 + 2]))))));
                arr_14 [i_0 + 1] [i_1] = ((/* implicit */unsigned short) ((((arr_12 [(_Bool)1]) % (arr_12 [(short)4]))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)61437)) ? (((/* implicit */int) (unsigned short)4106)) : (((/* implicit */int) (unsigned short)4089)))))));
            }
        } 
    } 
}
