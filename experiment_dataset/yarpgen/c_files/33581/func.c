/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33581
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
    var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-24113))));
    var_20 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(arr_1 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_22 += ((/* implicit */unsigned short) (short)-8895);
            arr_4 [13LL] [i_1] [(short)1] = ((/* implicit */unsigned short) 6925648654643486612ULL);
            arr_5 [i_0] [i_0] &= (+(arr_2 [i_0] [(unsigned short)3] [(short)0]));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                var_23 -= ((/* implicit */long long int) (unsigned char)117);
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    var_24 = (unsigned char)208;
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (+(((/* implicit */int) arr_3 [i_0] [i_3] [i_2])))))));
                        var_26 = ((/* implicit */unsigned short) (~((+(-2517350990039019321LL)))));
                        arr_12 [i_1] [i_1] = ((/* implicit */_Bool) 6756005234151740852ULL);
                    }
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned char)218)))))))));
                        var_28 -= ((/* implicit */_Bool) (~(((/* implicit */int) (short)10))));
                    }
                }
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    arr_20 [i_0] [8LL] [i_0] &= ((/* implicit */unsigned long long int) (+(arr_11 [i_0] [i_1] [i_2] [i_2] [i_6])));
                    arr_21 [i_1] = ((/* implicit */unsigned short) 4799001894253775223LL);
                }
                for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    var_29 *= ((/* implicit */short) (+(((/* implicit */int) (short)8964))));
                    arr_24 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-1546)))))));
                }
                var_30 = ((/* implicit */unsigned short) (~(140736414613504ULL)));
            }
        }
        arr_25 [i_0] = ((/* implicit */short) arr_16 [i_0]);
        var_31 = ((/* implicit */unsigned char) max((var_31), (arr_16 [i_0])));
    }
    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        var_32 = ((/* implicit */_Bool) (+(9042860037352710750ULL)));
        var_33 ^= ((/* implicit */unsigned char) arr_17 [(unsigned short)14] [i_8] [i_8] [i_8] [i_8] [(unsigned char)8]);
        arr_29 [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [(unsigned short)14] [i_8] [i_8] [i_8] [i_8] [i_8]))));
    }
    var_34 = ((/* implicit */unsigned short) var_11);
}
