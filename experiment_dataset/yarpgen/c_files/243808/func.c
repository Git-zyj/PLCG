/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243808
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
    var_10 = ((/* implicit */short) var_3);
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((~(((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_4)))))) : ((-(((/* implicit */int) ((unsigned short) var_2)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (var_7)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)16383)) == (((/* implicit */int) (_Bool)1)))))) : (((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2243463097U)))));
                var_12 *= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12653572016820277382ULL))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))))) % (((/* implicit */unsigned long long int) 268435455LL))));
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_3) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))) << (((((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-32764)))) - (159)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) 
        {
            {
                arr_11 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((((/* implicit */int) var_5)) + (((/* implicit */int) var_4)))) : (((/* implicit */int) var_8)))));
                arr_12 [i_2] = ((/* implicit */unsigned int) (((-(var_1))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)140))))))));
                var_13 = (((-(((/* implicit */int) ((var_7) < (var_0)))))) == ((-(((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 21; i_4 += 2) 
                {
                    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_2))));
                            /* LoopSeq 1 */
                            for (signed char i_6 = 1; i_6 < 21; i_6 += 2) 
                            {
                                var_16 *= ((/* implicit */unsigned char) (-((~(((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_2)))))))));
                                arr_22 [16ULL] [i_6] [i_6] = ((((/* implicit */int) ((var_6) && (((/* implicit */_Bool) var_7))))) == ((-(((/* implicit */int) var_9)))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
