/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235879
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
    var_17 ^= ((/* implicit */_Bool) (-((+(-8618123045000903186LL)))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */_Bool) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = arr_2 [i_0];
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) -154529900672045424LL);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_10 [12LL] &= ((/* implicit */long long int) arr_9 [(_Bool)1]);
        var_19 = ((/* implicit */_Bool) var_2);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 13; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((2225004742U) >> ((((~(((/* implicit */int) arr_7 [i_3])))) + (148)))))));
                                arr_23 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 0LL)) == (18446744073709551593ULL)));
                                arr_24 [i_1] [(_Bool)1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((-2856860561776286491LL) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) (((~(3LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_2])))));
                }
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_22 -= (~(((/* implicit */int) ((((/* implicit */int) arr_27 [i_6])) > (((((((/* implicit */int) var_2)) + (2147483647))) << (((/* implicit */int) arr_14 [i_6] [i_6] [i_6]))))))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_0 [i_6]))));
        var_24 = ((/* implicit */short) (-((+(((/* implicit */int) (signed char)-66))))));
    }
    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(min((var_16), (((/* implicit */int) (short)9316)))))))));
}
