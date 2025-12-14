/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30808
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
    var_11 *= ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)7356))) / (var_10))) == (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                    var_13 = ((/* implicit */long long int) arr_5 [i_0] [i_2]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((7900609185847911576LL) / (((/* implicit */long long int) 4230224658U)))))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        {
                            arr_16 [i_3] [i_3] = ((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_6))))) ? (7900609185847911578LL) : (((((/* implicit */_Bool) (short)26104)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -254954112)))))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)156))));
                            /* LoopSeq 3 */
                            for (short i_7 = 3; i_7 < 11; i_7 += 2) 
                            {
                                var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-15006)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : ((~(var_1))))) >> (((7900609185847911567LL) - (7900609185847911546LL)))));
                                var_16 = ((/* implicit */unsigned short) min((arr_6 [i_3]), (((/* implicit */unsigned int) var_5))));
                            }
                            for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                            {
                                arr_23 [i_3] = ((/* implicit */signed char) var_9);
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))));
                            }
                            for (long long int i_9 = 1; i_9 < 13; i_9 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned char) var_8);
                                var_19 = ((/* implicit */long long int) var_5);
                                arr_27 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((var_8) != (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) ((5229685140438034130LL) > (-9075960424368380955LL)));
                arr_28 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) -2LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)96))) : (-2488249017603156138LL)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((max((((/* implicit */int) (unsigned short)52067)), ((+(((/* implicit */int) var_3)))))) ^ (((/* implicit */int) var_6))));
}
