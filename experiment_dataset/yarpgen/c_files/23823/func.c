/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23823
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)152))));
        var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        arr_3 [i_0 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_2 [i_0 + 1]))));
    }
    for (int i_1 = 1; i_1 < 9; i_1 += 3) /* same iter space */
    {
        var_19 = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)150)) ? (7073896749061260847LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) max(((unsigned short)16176), (((/* implicit */unsigned short) (unsigned char)105))))) : (-1698566631)));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned char)111)) | (((/* implicit */int) (unsigned char)255))))));
    }
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1698566630)) ? (((/* implicit */int) ((((/* implicit */int) (short)-8722)) >= (((/* implicit */int) (unsigned char)153))))) : (((/* implicit */int) (unsigned char)113)))) < (-1698566631))))));
    /* LoopSeq 4 */
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_21 = arr_8 [i_2];
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -700103314)) ? (((/* implicit */int) (signed char)-119)) : (max((-67108864), (((/* implicit */int) (unsigned short)0))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned short) ((unsigned char) 4294967295U));
        var_23 |= (-(-700103315));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55061)) + (((/* implicit */int) (signed char)91))))) ? (2908404118732689972LL) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)118)) | (((/* implicit */int) (_Bool)1))))))))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_25 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (unsigned short)38058)) || (((/* implicit */_Bool) arr_14 [i_4] [i_4]))))));
        arr_15 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(short)4] [(short)4]))) : (16993506311668174967ULL)));
    }
    for (int i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned int) (signed char)15);
        arr_19 [i_5] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_17 [i_5])) | (((-1101881521) ^ (((/* implicit */int) (_Bool)0))))))));
        arr_20 [i_5] = ((/* implicit */int) arr_16 [i_5] [i_5]);
    }
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))) : (-8323479335702672148LL))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_10)) : (var_3)))));
    var_27 ^= ((/* implicit */long long int) max((17655650309567338689ULL), (((/* implicit */unsigned long long int) ((((int) var_8)) << (((((var_11) * (((/* implicit */long long int) ((/* implicit */int) var_9))))) - (5213693543504887959LL))))))));
}
