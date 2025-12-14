/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235476
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
    var_13 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) arr_1 [i_3]);
                            /* LoopSeq 4 */
                            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                            {
                                arr_14 [i_4] [i_2] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) arr_11 [i_2]);
                                var_15 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)37896)) ? (((/* implicit */int) (_Bool)0)) : (arr_13 [i_0] [6LL] [i_0] [0] [i_0])))), (((3U) / (((/* implicit */unsigned int) var_9))))))) ? (((/* implicit */unsigned int) (-((+(((/* implicit */int) var_12))))))) : (((((/* implicit */unsigned int) var_9)) % (((var_6) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47)))))))));
                                var_16 += ((/* implicit */long long int) (signed char)108);
                                arr_15 [i_4] [i_2] [i_2] [i_0] = (!(((/* implicit */_Bool) ((arr_3 [i_2 - 1] [i_2 + 1] [i_2 - 1]) ? (max((((/* implicit */long long int) -665956883)), (arr_0 [i_4] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                            }
                            for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_3] [i_5] [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((12253981694068312576ULL), (((/* implicit */unsigned long long int) (unsigned char)67))))) ? (((/* implicit */int) var_11)) : (min((665956882), (((/* implicit */int) (signed char)(-127 - 1)))))));
                                var_17 = ((/* implicit */int) min((((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)-7112)) ? (arr_10 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17821)))))))), (((var_1) - (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                            }
                            for (int i_6 = 0; i_6 < 13; i_6 += 3) 
                            {
                                arr_22 [i_0] [i_2] [i_3] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)125)) - ((-(((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (signed char)122)))))))));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_11 [i_2])), (var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2])) && (((/* implicit */_Bool) arr_13 [(short)7] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))) : (((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) arr_11 [i_2])) : (var_8)))));
                                arr_23 [i_0] [i_2 - 1] [(short)1] [i_2] [i_2] [12] = ((/* implicit */_Bool) (((((~(var_2))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_20 [i_2 - 1] [i_2] [i_2 - 1])))) : (((((/* implicit */_Bool) ((-665956909) | (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_1] [(_Bool)1] [(short)2]))) : ((+(var_2)))))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 13; i_7 += 1) 
                            {
                                var_19 = ((/* implicit */int) (unsigned char)208);
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_2] [(short)6] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_0 [i_1] [i_1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (_Bool)1)))))));
                                var_20 = ((/* implicit */int) max((var_20), (((int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (var_1))))));
                            }
                            var_21 = ((/* implicit */int) (signed char)-31);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    var_22 = ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-108)) || (((/* implicit */_Bool) var_5))))), (arr_5 [i_8])));
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
                        {
                            {
                                arr_36 [i_0] [i_1] [i_0] [i_10] [i_10] = (~((((_Bool)0) ? (((/* implicit */int) (short)17820)) : (-1029914125))));
                                var_23 = ((/* implicit */unsigned short) var_3);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
