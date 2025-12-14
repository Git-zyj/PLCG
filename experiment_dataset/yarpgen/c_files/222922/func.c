/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222922
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
    var_13 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */_Bool) var_6)) ? (6459902622702973183ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))) : (((/* implicit */unsigned long long int) var_12))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((_Bool) (signed char)114)))) ? (((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_7))) : (min((((/* implicit */unsigned long long int) (unsigned char)116)), (arr_4 [i_1] [i_1 + 1] [i_0]))))) : (min((min((18446744073709551615ULL), (11986841451006578433ULL))), (arr_7 [i_1 + 1] [i_0 - 1])))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 113172582U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))) : (((var_12) << (((((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1] [i_1 + 1])) - (216)))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 4181794714U)))) ^ (var_0)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_0] [i_1] [i_2] [(unsigned char)10] [i_1] [13ULL] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) == (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1 + 1]))))))))));
                                var_17 = ((/* implicit */unsigned short) (((((~(((long long int) arr_6 [i_0] [i_0 + 2] [i_0 + 2])))) + (9223372036854775807LL))) << (((min((((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))) : (113172594U))), (((/* implicit */unsigned int) arr_15 [i_0] [i_0 - 2] [i_0 - 3] [i_1 - 1] [i_1 + 1] [i_4])))) - (107U)))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_5 = 2; i_5 < 11; i_5 += 3) 
                {
                    var_18 = (~(((((/* implicit */int) var_1)) - (((/* implicit */int) (signed char)94)))));
                    var_19 = ((/* implicit */short) (signed char)120);
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    var_20 = ((/* implicit */int) (-(8710864440797583856ULL)));
                    arr_21 [(signed char)5] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2]))) + ((-(var_0)))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_6);
}
