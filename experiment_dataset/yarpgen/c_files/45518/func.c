/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45518
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
    var_20 &= ((((var_14) + (9223372036854775807LL))) >> (((var_6) - (2479201203U))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_21 *= ((/* implicit */short) var_6);
        var_22 -= ((/* implicit */unsigned long long int) (~(7872419753830356811LL)));
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((arr_0 [i_0]) - (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) << ((((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((5301963744601623779LL) - (5301963744601623779LL))))) - (9223372036854775769LL))))))));
        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3765432748705740084LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) (+(((((/* implicit */int) ((arr_4 [i_1]) < (arr_4 [i_1 + 1])))) << (((9223372036854775807LL) - (9223372036854775776LL)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            var_25 = ((/* implicit */unsigned long long int) arr_9 [i_2] [5U]);
            var_26 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_9 [i_2 + 2] [i_2 + 3])) & (18446744073709551615ULL)));
        }
        for (long long int i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            var_27 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) 5828085615574040596LL)) ? (((/* implicit */long long int) arr_9 [i_1] [7ULL])) : (-2845883669503524015LL))) >> (((((((/* implicit */int) var_8)) << (((((-4207147803020947105LL) + (4207147803020947132LL))) - (21LL))))) - (14441))))) <= (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3]))) ^ (arr_5 [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((9649366936142500444ULL) == (((/* implicit */unsigned long long int) arr_4 [i_3]))))))))));
            arr_12 [i_1] [i_3] [i_3] &= ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) var_5))))) < (((((/* implicit */_Bool) arr_4 [i_3 - 1])) ? (((/* implicit */long long int) arr_9 [i_1 + 1] [i_1 - 1])) : (-2845883669503524015LL)))));
        }
        var_28 -= ((/* implicit */long long int) ((min((((/* implicit */long long int) (unsigned char)241)), (2845883669503524014LL))) < (arr_5 [i_1] [i_1 - 2])));
    }
    var_29 += ((/* implicit */unsigned char) min(((short)14962), ((short)-3819)));
    var_30 &= ((/* implicit */long long int) (short)6022);
    var_31 = ((/* implicit */long long int) (-(min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (short)2684))))))));
}
