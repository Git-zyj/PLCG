/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213421
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) ((-518961405) < (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -518961405)) ? (3067338933U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                    var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) ((3067338929U) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (max((115125879), (((/* implicit */int) (unsigned char)223)))) : (518961405)))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (var_13)));
                    arr_6 [i_0] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2]);
                    var_19 = ((((/* implicit */int) (unsigned char)121)) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)7306)) : (((((/* implicit */_Bool) (unsigned short)43640)) ? (((/* implicit */int) arr_5 [i_2 + 1] [i_1] [i_0] [1])) : (((/* implicit */int) var_12)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (short)754)) ? (((/* implicit */int) var_8)) : ((((-2147483647 - 1)) ^ ((-2147483647 - 1)))))));
    /* LoopSeq 1 */
    for (short i_3 = 1; i_3 < 19; i_3 += 2) 
    {
        var_21 = (-(((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) (unsigned short)8506))))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_5 = 3; i_5 < 19; i_5 += 2) 
            {
                var_22 ^= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) -518961405)) || (((/* implicit */_Bool) (unsigned char)162))))) < (((/* implicit */int) (unsigned char)135))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) var_12);
                            var_24 = ((/* implicit */int) ((long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned short)43640)))));
                        }
                    } 
                } 
            }
            var_25 = ((/* implicit */signed char) var_4);
        }
        for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 1) 
        {
            var_26 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((var_6) > (((/* implicit */long long int) ((/* implicit */int) var_15)))))) < (((/* implicit */int) var_3)))))) & (((((/* implicit */_Bool) var_8)) ? (var_14) : (((((/* implicit */_Bool) (unsigned short)255)) ? (var_14) : (((/* implicit */unsigned long long int) 115125879))))))));
            arr_23 [20] &= ((/* implicit */short) (signed char)81);
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (~(4294967292U)))) && (((/* implicit */_Bool) 7521679485283294745LL))))))))));
            arr_24 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) min((((/* implicit */unsigned int) var_3)), (3067338933U))))) ? (((/* implicit */int) ((signed char) var_14))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 903700759)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)-32757)))))) ? (((((/* implicit */_Bool) (unsigned char)97)) ? (518961412) : (((/* implicit */int) var_8)))) : (((((/* implicit */int) (short)-3647)) - (((/* implicit */int) var_2))))))));
            arr_25 [i_3] [i_8] [i_8 - 1] = (i_3 % 2 == zero) ? (((/* implicit */unsigned short) (((((_Bool)1) ? (min((((/* implicit */unsigned long long int) arr_1 [i_8])), (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((-1810257158) + (1810257177)))))))) & (((/* implicit */unsigned long long int) ((arr_15 [i_8 - 1] [i_8] [i_3] [18LL] [12U]) >> (((arr_15 [i_8 - 1] [i_8 - 1] [i_3] [i_8 - 2] [i_8 - 2]) - (6723739239612802967LL))))))))) : (((/* implicit */unsigned short) (((((_Bool)1) ? (min((((/* implicit */unsigned long long int) arr_1 [i_8])), (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((-1810257158) + (1810257177)))))))) & (((/* implicit */unsigned long long int) ((arr_15 [i_8 - 1] [i_8] [i_3] [18LL] [12U]) >> (((((arr_15 [i_8 - 1] [i_8 - 1] [i_3] [i_8 - 2] [i_8 - 2]) - (6723739239612802967LL))) - (454587557392034830LL)))))))));
        }
    }
}
