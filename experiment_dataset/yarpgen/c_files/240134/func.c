/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240134
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) max(((((-(4294967265U))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9)))))))), (((/* implicit */unsigned int) (unsigned char)9))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (signed char)-9))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_10 |= ((/* implicit */unsigned int) ((2082354901U) != (((min((3304264146U), (((/* implicit */unsigned int) var_6)))) + (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0)))))))));
                    arr_10 [i_2] [2LL] [2LL] = ((_Bool) (-(min((var_4), (((/* implicit */long long int) -2087841195))))));
                    var_11 = ((/* implicit */unsigned char) 3915012268U);
                    var_12 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_2]), (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))) : ((+(990703149U)))))), (((((/* implicit */long long int) var_5)) ^ ((+(3641731346629556216LL)))))));
                    var_13 |= ((/* implicit */int) (signed char)95);
                }
            } 
        } 
        var_14 = ((/* implicit */signed char) 3304264149U);
    }
    /* vectorizable */
    for (unsigned int i_3 = 4; i_3 < 11; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            arr_16 [i_3] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_3 - 1] [i_3 + 1])) <= (((/* implicit */int) arr_13 [i_3 + 1] [i_3 - 4]))));
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned int i_7 = 1; i_7 < 13; i_7 += 1) 
                    {
                        {
                            var_15 = -1LL;
                            var_16 = ((/* implicit */unsigned char) ((unsigned short) 2212612395U));
                            arr_25 [i_3] [i_5] [i_5] [i_7] = ((/* implicit */short) var_9);
                            var_17 = ((/* implicit */unsigned char) (~(-3378123698227579269LL)));
                        }
                    } 
                } 
            } 
        }
        for (short i_8 = 3; i_8 < 12; i_8 += 4) 
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)4546))))) & (((/* implicit */int) ((((/* implicit */_Bool) 2944930105406099135LL)) && (((/* implicit */_Bool) arr_20 [i_3] [i_8])))))));
            var_19 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3 - 1]))) == (var_0)));
        }
        var_20 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)9))));
    }
    var_21 += ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
    var_22 = ((/* implicit */long long int) (signed char)-67);
    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-12666))));
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min(((-(((/* implicit */int) (signed char)79)))), (((/* implicit */int) var_8)))))));
}
