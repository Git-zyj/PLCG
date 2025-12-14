/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43354
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
    var_19 &= ((/* implicit */_Bool) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (-(-548157458))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) arr_4 [i_1] [i_1])) : (var_18))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-548157475) / (1231028038)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [(signed char)4])), (var_6)))) < (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))) : (var_13)))))) : (((((/* implicit */_Bool) 548157458)) ? (((/* implicit */int) ((var_4) < (arr_4 [i_1] [i_1])))) : ((~(((/* implicit */int) var_3))))))));
        var_24 -= ((/* implicit */long long int) (((((((~(548157475))) + (2147483647))) >> ((((+(var_1))) + (3397260389078296134LL))))) > ((~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) (_Bool)1))))))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)255)), (548157471)))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) ((short) ((((((((/* implicit */int) var_14)) | (((/* implicit */int) var_16)))) + (2147483647))) >> (((/* implicit */int) ((var_0) > (var_4)))))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -548157472)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) var_16))))) ? (arr_3 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)45)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) / (1872449673680057763ULL))) : (max((arr_7 [i_2]), (9395877570362434436ULL)))));
    }
    var_26 = ((short) (!(((/* implicit */_Bool) var_15))));
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            {
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) min((((((((/* implicit */int) (short)-257)) / (((/* implicit */int) (signed char)9)))) | (((/* implicit */int) ((10573165280277681765ULL) <= (((/* implicit */unsigned long long int) 3680379477743343080LL))))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((-6981390866887864128LL), (((/* implicit */long long int) 548157471)))))))))))));
                arr_14 [i_3] |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_4]))));
                var_28 &= ((/* implicit */int) max(((-(arr_11 [(signed char)20] [i_4]))), ((-(-8330658867518460658LL)))));
            }
        } 
    } 
}
