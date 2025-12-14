/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205839
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
    var_16 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (9420057683848037099ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) || (((/* implicit */_Bool) var_0))));
                                var_18 = ((((/* implicit */int) var_7)) << ((+(((((/* implicit */long long int) var_12)) / (var_6))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_5)) >= (-793681470))))))) || (((/* implicit */_Bool) (short)-3515))));
                                var_20 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 788717353896437074ULL))));
                            }
                        } 
                    } 
                    arr_10 [i_0] [(short)14] [(unsigned char)4] [7U] = ((/* implicit */int) (signed char)-1);
                    var_21 -= ((/* implicit */unsigned long long int) var_6);
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (3796711561U)))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */unsigned long long int) var_8)) ^ (4ULL))))))));
                }
            } 
        } 
        var_23 += ((/* implicit */short) ((((/* implicit */_Bool) 2504853667U)) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) -793681470)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (short)-732)) ? (((/* implicit */unsigned int) -1788649104)) : (var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) 18446744073709551611ULL)) && (((/* implicit */_Bool) var_10))))))))));
        arr_11 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((-((~(1269816870U)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            var_24 += ((/* implicit */_Bool) 10689987644770114566ULL);
            var_25 += ((/* implicit */unsigned long long int) ((2147483627) & (((/* implicit */int) var_7))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 1; i_6 < 13; i_6 += 3) 
        {
            var_26 |= (-(((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (short)-732))))));
            arr_17 [i_6] = ((/* implicit */int) ((((/* implicit */int) var_5)) < (2147483647)));
            arr_18 [i_6] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >> (((var_0) - (2521220068U)))));
        }
    }
    var_27 = ((/* implicit */int) (signed char)0);
}
