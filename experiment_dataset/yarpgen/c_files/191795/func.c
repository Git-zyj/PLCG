/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191795
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
    var_10 += ((var_7) ? (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) (short)21901)) : (((/* implicit */int) max((((/* implicit */short) var_2)), ((short)(-32767 - 1)))))))) : (((unsigned long long int) ((var_8) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8691)))))));
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (-(min((var_3), (((var_7) ? (12766183062159942868ULL) : (2977776407702521510ULL))))))))));
    var_12 = ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_3)) ? (2977776407702521519ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) (unsigned short)45990))))) ? (((/* implicit */int) (short)-14780)) : (((var_2) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) var_9))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((0ULL) - ((~(arr_5 [i_1 + 1] [i_1 - 1] [i_0]))))))));
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [(short)1] [i_0 - 1] [(short)1]), (arr_3 [i_0] [i_0 + 1] [(unsigned short)4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) : (max((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_4 [i_0] [i_0] [i_0]) : (18446744073709551593ULL))), (18446744073709551615ULL)))));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) -7169455538311434965LL))));
                arr_7 [i_0 + 2] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((arr_3 [i_0] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 15468967666007030120ULL))))))))));
                var_15 += ((/* implicit */long long int) ((12778613334669452611ULL) >= (max((max((arr_4 [i_0] [i_0] [i_1]), (((/* implicit */unsigned long long int) (short)-8691)))), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 9223372036854775795LL)), (10823486204381922268ULL)));
        var_17 = (~(10ULL));
        var_18 = var_6;
    }
    for (short i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) min((-7072422177519506160LL), (-2192279335419402636LL)));
        var_20 += ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [(signed char)13])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35032))) : (2866886852U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned long long int) var_4)), (arr_13 [i_3]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 17675643936807670401ULL)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_8 [i_3] [i_3]))))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_3] [i_3]))) : (((((/* implicit */_Bool) arr_13 [i_3])) ? (var_8) : (arr_11 [i_3] [(unsigned short)4])))))));
        var_21 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_3])) ? (((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (arr_1 [i_3] [i_3]) : (771100136901881215ULL))) : (((((/* implicit */_Bool) 18446744073709551605ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29816))))))) < (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12254)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2185218311U)))), (arr_11 [i_3] [i_3])))));
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4]))) : (18262073419517545073ULL))) | (((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64512))) : (1441623419138965077ULL))))), (((((/* implicit */_Bool) ((short) arr_1 [i_3] [i_4]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) arr_15 [i_3] [i_4] [i_4]))))) : (arr_11 [i_3] [i_4])))));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_3] [i_3]), ((-(18446744073709551613ULL)))))) ? (((((/* implicit */_Bool) (-(8011651219978881131LL)))) ? (min((((/* implicit */unsigned long long int) arr_8 [i_4] [i_4])), (arr_3 [i_3] [i_3] [i_4]))) : (arr_1 [i_3] [i_4]))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (-48777205650218804LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))) / (max((arr_13 [i_4]), (((/* implicit */unsigned long long int) (unsigned short)47913))))))));
        }
        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 3) 
        {
            var_24 = ((((/* implicit */_Bool) 3377699720527872ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20400))) : (18446744073709551609ULL));
            arr_18 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63453))) == (arr_0 [i_3] [i_5 + 3]))) ? (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_5 + 3]))) : (18446744073709551601ULL))), (((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_17 [i_3] [i_5] [i_5]) : (16778566815622366996ULL))))) : (((((((/* implicit */_Bool) 15812517023787787134ULL)) ? (3283405711887548288ULL) : (arr_5 [i_3] [i_3] [i_5]))) | (((/* implicit */unsigned long long int) 2112759641U))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            var_25 = ((/* implicit */_Bool) min((((arr_17 [i_3] [i_6] [i_6]) ^ (min((3958445949045042196ULL), (arr_20 [i_3]))))), (((max((arr_0 [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_9 [14ULL])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_11 [i_3] [(unsigned short)4]))))))))));
            var_26 = ((1668177258087184627ULL) | (398982538299994664ULL));
        }
    }
}
