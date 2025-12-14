/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196443
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
    var_19 = ((/* implicit */short) var_6);
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (((!(var_6))) && (((var_9) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44415))))))))) : (((long long int) (unsigned char)79))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(18446744073709551615ULL))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
                {
                    var_22 *= ((/* implicit */signed char) (short)-17922);
                    var_23 = ((/* implicit */int) ((unsigned int) max((((-9223372036854775804LL) + (18012199486226432LL))), (((/* implicit */long long int) (short)-24753)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) var_5)) : (-9223372036854775804LL)))) & (max((18446744073709551615ULL), (3894316163986494686ULL)))));
                                var_25 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)52))))) % (((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) var_3)) : (var_2))))));
                            }
                        } 
                    } 
                    var_26 = ((((((/* implicit */_Bool) (~(var_4)))) ? (((0ULL) >> (((2420834481012303436ULL) - (2420834481012303414ULL))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (var_5)))))) > (((unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (280375465082880LL)))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (4294965248U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                                var_28 = arr_3 [i_5] [12U];
                            }
                        } 
                    } 
                    var_29 *= (+(var_9));
                }
                for (short i_8 = 2; i_8 < 11; i_8 += 1) 
                {
                    arr_22 [i_1] [3LL] [3LL] = ((/* implicit */unsigned int) (~(((/* implicit */int) min((((var_11) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), ((!(((/* implicit */_Bool) -9223372036854775804LL)))))))));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_7 [12LL] [12LL] [12LL] [i_1] [i_8])), (var_5)))), (min((((/* implicit */unsigned long long int) (_Bool)0)), (2251797666201600ULL)))))) ? (max((((2224232056U) & (349699223U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)181))))))) : ((((!(((/* implicit */_Bool) (unsigned short)60546)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-21)))))) : ((-(4294967268U)))))));
                        var_31 = ((/* implicit */short) (!((_Bool)0)));
                        var_32 = ((/* implicit */int) min((((long long int) min((((/* implicit */unsigned long long int) -1348630425)), (0ULL)))), (((((/* implicit */_Bool) 285978576338026496ULL)) ? (((/* implicit */long long int) 36U)) : (8474333489497242273LL)))));
                    }
                    arr_26 [i_0] [i_1] [(_Bool)1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(-2111976021)))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)0)) % (((/* implicit */int) arr_3 [i_8 - 1] [i_1 - 1])))))));
                }
                var_33 = ((/* implicit */signed char) (_Bool)0);
            }
        } 
    } 
}
