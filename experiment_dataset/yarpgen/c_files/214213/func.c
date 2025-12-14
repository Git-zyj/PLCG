/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214213
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
    var_10 &= ((/* implicit */_Bool) (-(9621382500472678865ULL)));
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) max((((/* implicit */int) var_4)), ((+(((/* implicit */int) (signed char)-2)))))))));
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (+(((/* implicit */int) (short)21522)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)72)) || (((/* implicit */_Bool) arr_1 [4LL]))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)150)) || (((/* implicit */_Bool) 663909469))))))));
        arr_3 [8U] &= ((((/* implicit */int) var_9)) * ((+(var_6))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (short i_3 = 2; i_3 < 11; i_3 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -663909469)) ? (((/* implicit */unsigned int) var_6)) : (var_7)))) || (((/* implicit */_Bool) (-(var_1))))))), (((((/* implicit */_Bool) ((var_8) | (((/* implicit */long long int) -1081045279))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (arr_6 [i_2])))));
                    arr_11 [i_1] [i_3] [i_3] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) (signed char)83)) / (var_0))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            {
                                arr_17 [i_1] [(signed char)2] [i_5] [i_3] [i_4] [i_5] &= ((/* implicit */unsigned int) var_4);
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) (-2147483647 - 1))))))) < ((~(arr_1 [i_3])))));
                                arr_18 [i_1] [i_1] [i_5] [i_1] [i_1] &= ((/* implicit */unsigned int) ((min((arr_4 [i_3 + 1]), (arr_4 [i_3]))) - (((arr_4 [i_1]) + (((/* implicit */long long int) -236332108))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */int) min((var_16), ((+(-236332108)))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (+((+(((/* implicit */int) var_5)))))))));
    }
    var_18 = ((/* implicit */short) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-21507)))));
}
