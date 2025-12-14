/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198317
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
    var_18 = (~(((long long int) -2374253732307505683LL)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        var_19 = ((((/* implicit */_Bool) 14095296025962802547ULL)) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 3]));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -8937682188437133035LL)) - (((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0 - 4] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)18850))))) | (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) -1LL)) : (arr_0 [i_0] [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_5 [7LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) 1996510265U)))))));
        var_21 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_1]))))), ((+(320248332156223008LL))));
        var_22 = ((/* implicit */long long int) var_10);
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6939710197260181793LL)) ? (((/* implicit */int) (short)-18825)) : (((/* implicit */int) (unsigned char)242))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))) : ((-(arr_6 [i_2] [i_2])))))))))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) min((6939710197260181798LL), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_2] [i_2])) & (((/* implicit */int) (short)18838)))))))) ? (((((var_16) & (((/* implicit */unsigned long long int) -504871152001337808LL)))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */unsigned long long int) max((7573561482362987770LL), (((/* implicit */long long int) (unsigned char)255))))) : (((var_16) ^ (((/* implicit */unsigned long long int) var_4)))))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_4 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [0U]))) : (min((((/* implicit */unsigned long long int) ((var_7) != (((/* implicit */long long int) ((/* implicit */int) var_13)))))), (5361606540527813896ULL)))));
    }
    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 2) 
        {
            var_25 = var_7;
            var_26 = ((/* implicit */int) (+(arr_0 [i_4 + 1] [i_4 + 1])));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 8759817305504699066LL)) ? (5361606540527813898ULL) : (((/* implicit */unsigned long long int) 2493457231U)))))));
            var_28 -= ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32761))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_10))))) : (arr_14 [i_3] [i_4]));
        }
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (arr_6 [i_3] [i_3]) : (max((var_14), (((/* implicit */long long int) var_10)))))) % (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_3]))))))));
        var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_15 [i_3])) || (((/* implicit */_Bool) 2169545258667683661LL)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)242)))))));
    }
    var_31 = ((/* implicit */long long int) (+(((/* implicit */int) (short)5401))));
}
