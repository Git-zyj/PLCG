/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205912
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (_Bool)0))));
        var_21 = ((/* implicit */unsigned long long int) (+((-(((((/* implicit */int) (signed char)10)) * (((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) var_3);
        var_23 = ((/* implicit */int) (unsigned char)1);
        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(unsigned short)14])) && (((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))))) * (((/* implicit */int) arr_3 [(short)14]))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18014123631575040LL)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned short)6))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)3))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (unsigned short)65534))))))) < (var_16)));
        var_26 += ((/* implicit */_Bool) (+(((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned short)65533)))), ((!(arr_4 [i_1]))))))));
    }
    for (short i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        var_27 = ((/* implicit */int) var_8);
        var_28 &= ((/* implicit */int) max((((var_15) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))), (((/* implicit */unsigned long long int) min((var_9), ((unsigned short)11))))));
        var_29 += ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (unsigned short)65533)), (((12771204513589366130ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5799))))))) & (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    {
                        var_30 = ((/* implicit */int) var_13);
                        arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (unsigned char)0);
                    }
                } 
            } 
        } 
    }
    for (signed char i_6 = 3; i_6 < 13; i_6 += 3) 
    {
        var_31 = ((/* implicit */short) arr_3 [(signed char)14]);
        arr_21 [i_6] [i_6 + 1] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_3 [(unsigned short)10]))))));
    }
    var_32 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8)))) - (5911174658175064351LL)))));
    /* LoopNest 2 */
    for (unsigned char i_7 = 3; i_7 < 19; i_7 += 4) 
    {
        for (unsigned char i_8 = 2; i_8 < 18; i_8 += 1) 
        {
            {
                var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_7]))))) | (((/* implicit */int) (unsigned char)0)))))));
                arr_29 [i_7] [i_8 + 3] = ((/* implicit */int) (!(((/* implicit */_Bool) var_17))));
            }
        } 
    } 
    var_34 *= ((/* implicit */unsigned char) var_11);
}
