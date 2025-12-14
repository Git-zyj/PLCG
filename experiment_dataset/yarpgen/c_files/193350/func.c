/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193350
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
    var_12 = ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 4) /* same iter space */
                    {
                        var_13 += ((/* implicit */short) (_Bool)1);
                        var_14 *= ((/* implicit */int) 0ULL);
                    }
                    for (unsigned char i_4 = 1; i_4 < 14; i_4 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (unsigned short)65526))));
                        var_16 = ((/* implicit */short) min(((unsigned short)65516), ((unsigned short)13)));
                        var_17 = ((/* implicit */short) ((min((12160286039269101728ULL), (((/* implicit */unsigned long long int) var_7)))) > ((-(12160286039269101724ULL)))));
                        arr_16 [i_0] [i_0] [i_0] = ((/* implicit */short) var_3);
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)2825), (((/* implicit */unsigned short) (_Bool)0)))))) ^ ((~(var_8)))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 14; i_5 += 4) /* same iter space */
                    {
                        var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) <= ((-(12834769452170492612ULL)))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        arr_22 [i_0] [i_1 + 2] [i_2 + 1] [8ULL] [i_0] = ((/* implicit */short) 15LL);
                        arr_23 [i_0 + 1] [4] [i_0] [(unsigned char)1] [i_6 + 1] = ((/* implicit */int) (unsigned short)4455);
                        arr_24 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_0] = ((/* implicit */unsigned char) (~(var_1)));
                        var_21 = ((/* implicit */long long int) var_5);
                    }
                }
            } 
        } 
    } 
}
