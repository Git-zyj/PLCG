/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36123
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_10) / (-3760562957166125237LL))) >> (((((((/* implicit */_Bool) -3760562957166125257LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-3760562957166125237LL))) - (536LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_10), (var_1)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) : (max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) var_8)) ? (var_10) : (var_2)))))));
    var_13 = ((/* implicit */signed char) var_11);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (unsigned char)37);
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
                            arr_17 [i_0] [i_0 + 1] [i_1] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 1] = (-(((var_2) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 + 2] [i_2 - 2]))))));
                        }
                        var_15 = ((/* implicit */unsigned long long int) var_2);
                    }
                } 
            } 
        } 
        arr_18 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)218))))) : (((long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((-3760562957166125237LL), (((/* implicit */long long int) arr_10 [i_0] [i_0 - 1]))))) ? (((/* implicit */int) arr_1 [i_0] [i_0 + 1])) : (((((/* implicit */int) (unsigned char)218)) * (((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])))))))));
    }
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        for (int i_6 = 2; i_6 < 24; i_6 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((((((arr_19 [i_5]) >= (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [i_5] [i_5]))))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_21 [i_6] [i_6] [i_6]))))))), (var_5)));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (unsigned short i_8 = 2; i_8 < 23; i_8 += 2) 
                    {
                        {
                            arr_30 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */int) var_3);
                            var_17 = ((/* implicit */_Bool) min(((((-(-3760562957166125228LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)34))))))), (((((/* implicit */_Bool) ((-3760562957166125231LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)199)))))) ? ((-(9223372036854775807LL))) : (((3760562957166125231LL) - (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6] [i_6] [i_6])))))))));
                            arr_31 [i_5] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)219))) >= (1620405000382710848LL)));
                        }
                    } 
                } 
                arr_32 [i_6] = ((/* implicit */int) arr_22 [i_6] [i_6] [i_6]);
                var_18 = ((/* implicit */unsigned long long int) (unsigned char)219);
            }
        } 
    } 
}
