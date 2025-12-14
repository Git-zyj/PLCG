/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32230
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
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((_Bool) var_16)) || (((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_14))))))), (min((((/* implicit */int) var_11)), ((+(((/* implicit */int) var_2))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 1) /* same iter space */
        {
            var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)41700)) ? (3920427145U) : (1073741824U)));
            var_19 = ((/* implicit */short) ((((unsigned long long int) ((arr_3 [i_0] [i_0] [i_0]) <= (arr_3 [i_0] [i_0] [i_0])))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))) || (((/* implicit */_Bool) min((arr_3 [i_0] [i_0 - 1] [i_0]), (((/* implicit */unsigned int) var_9))))))))));
            arr_4 [i_0] [18] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)0))));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(var_12)))) ? (min((((/* implicit */unsigned int) var_2)), (arr_3 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [9] [2U])))))))), (((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned int) ((int) arr_1 [5LL] [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0 + 2] [i_1 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
        }
        for (long long int i_2 = 1; i_2 < 20; i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_11))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_0])), (min((((/* implicit */unsigned int) var_1)), (var_16)))))) : (max((var_0), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)23860)))))));
            var_20 = ((short) ((((/* implicit */_Bool) (+(var_8)))) ? (((((/* implicit */int) var_1)) / (arr_7 [i_0]))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_0] [i_2] [(signed char)14])) : (((/* implicit */int) arr_6 [i_0] [i_2 + 1] [(short)20]))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [(unsigned char)14] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((unsigned long long int) max((((((/* implicit */int) arr_6 [i_0] [(signed char)11] [i_0])) | (((/* implicit */int) var_2)))), (((((-787171806) + (2147483647))) >> (((arr_7 [i_0]) + (922186248))))))))) : (((/* implicit */long long int) ((unsigned long long int) max((((((/* implicit */int) arr_6 [i_0] [(signed char)11] [i_0])) | (((/* implicit */int) var_2)))), (((((-787171806) + (2147483647))) >> (((((arr_7 [i_0]) + (922186248))) + (557843567)))))))));
            arr_14 [i_0] [i_0] = ((/* implicit */short) (~(var_16)));
        }
        arr_15 [i_0] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) arr_2 [i_0])) : (arr_9 [i_0])))), (var_3))), (((/* implicit */unsigned long long int) (~(min((var_13), (((/* implicit */long long int) arr_8 [i_0])))))))));
    }
    for (signed char i_4 = 1; i_4 < 18; i_4 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) 117440512U)), (3968213849487892772ULL)));
        var_22 -= ((/* implicit */int) (((((-(arr_12 [(unsigned char)16] [i_4]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 3221225471U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41667)) ? (((/* implicit */unsigned long long int) 973062425)) : (9822882284969403971ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [4U])))))) : ((+(var_0))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), ((-(arr_2 [6LL]))))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        arr_22 [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 16726933725664719614ULL))));
        arr_23 [i_5] = ((/* implicit */long long int) ((short) var_8));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) arr_19 [6LL])) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_20 [16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_3)))));
    }
    var_24 = ((/* implicit */signed char) min((max((var_15), (((/* implicit */short) ((var_13) <= (((/* implicit */long long int) var_16))))))), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))));
}
