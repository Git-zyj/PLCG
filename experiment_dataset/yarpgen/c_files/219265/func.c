/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219265
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
    var_13 = ((/* implicit */_Bool) min((16413497723667616334ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) ((16413497723667616323ULL) ^ (var_1)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) (~(14671984435976824491ULL)));
        var_15 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))));
        arr_2 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */int) ((arr_1 [i_0]) != (var_9)))) + (((/* implicit */int) ((unsigned char) 2033246350041935305ULL)))))));
        arr_3 [i_0] [i_0] = max(((~(((unsigned long long int) 16413497723667616345ULL)))), ((-(arr_1 [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_16 = ((/* implicit */short) arr_1 [i_1]);
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
            {
                for (signed char i_4 = 2; i_4 < 9; i_4 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_1] [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_3 - 1] [(_Bool)1]))))))) >= (((unsigned long long int) 953220681))));
                        /* LoopSeq 4 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */signed char) arr_8 [i_1] [i_1] [i_1]);
                            var_19 = ((/* implicit */unsigned long long int) ((((long long int) var_6)) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)71))) == (16413497723667616323ULL)))))));
                            arr_16 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */signed char) var_4);
                            arr_17 [i_1] [(signed char)0] [i_3] [i_4 + 1] [i_5 - 1] [i_5 - 1] = ((/* implicit */unsigned int) arr_0 [i_1]);
                            var_20 = ((/* implicit */unsigned int) (short)-27899);
                        }
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_4])) * (((/* implicit */int) var_12)))) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)11)) || (((/* implicit */_Bool) var_8)))))));
                            arr_20 [i_1] [i_1] = ((/* implicit */unsigned int) ((signed char) ((16413497723667616320ULL) | (var_2))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((((((/* implicit */int) arr_19 [i_1] [i_2] [4ULL])) <= (((/* implicit */int) arr_19 [i_1] [i_1] [8ULL])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (arr_6 [2ULL] [i_2]))))))));
                        }
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            arr_24 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */signed char) ((short) (+(((/* implicit */int) arr_19 [i_1] [i_2] [i_1])))));
                            var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)178)) >> (((((/* implicit */int) (signed char)-1)) + (15)))));
                            var_24 = (-(((18316062599944882956ULL) >> (((((/* implicit */int) (signed char)127)) - (86))))));
                            arr_25 [i_1] [i_1] [i_1] [(short)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_15 [i_4] [i_7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12)))))) ? (13943451014578373084ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)3410)))))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((16413497723667616362ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27927)))))) * (((/* implicit */int) ((3633271845173472100ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3] [i_4] [i_1]))))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_4 + 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1])) >> (((/* implicit */int) arr_18 [i_4 - 1] [i_3 - 1] [i_3 + 1] [i_1] [i_1]))));
                            var_27 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (var_11))));
                        }
                        var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [8ULL] [i_2]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_10))))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)32754)) && (((/* implicit */_Bool) min((((/* implicit */int) (short)27952)), (1972387240)))))))));
}
