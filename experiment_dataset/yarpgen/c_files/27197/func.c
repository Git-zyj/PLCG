/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27197
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_6 [(short)8] [(unsigned char)10] [(short)23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((arr_5 [(short)8]) % (arr_5 [i_0]))))));
                    arr_7 [16U] [(signed char)0] [1U] [(unsigned char)23] = ((/* implicit */int) (unsigned short)65535);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_13 [0] [(short)4] [(_Bool)1] [2U] [(short)8] [(unsigned short)11] = ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) (unsigned short)65529))))));
                                var_20 = ((/* implicit */unsigned short) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_17)) >> ((+(min((var_0), (((/* implicit */unsigned long long int) (unsigned short)1))))))));
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        arr_16 [(unsigned short)7] = ((/* implicit */unsigned int) (unsigned char)141);
        var_22 = ((/* implicit */short) min((((unsigned short) arr_11 [(signed char)23] [11ULL] [(unsigned char)22] [i_5] [11])), (((/* implicit */unsigned short) min((arr_11 [12LL] [i_5] [(short)19] [0ULL] [(unsigned char)9]), (arr_11 [5ULL] [(unsigned short)0] [i_5] [i_5] [(unsigned short)16]))))));
        var_23 |= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)23)) ? (1879048192) : (((/* implicit */int) (unsigned short)6))))))));
        var_24 = ((/* implicit */int) (unsigned short)0);
    }
    var_25 = ((/* implicit */short) ((unsigned long long int) var_2));
}
