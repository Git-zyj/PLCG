/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223474
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)40637)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))))))));
        arr_4 [i_0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 2) 
        {
            arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((9875240099072703299ULL), (9875240099072703276ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (((_Bool)0) || (var_6)))), (min(((unsigned short)31438), ((unsigned short)16050)))))) : (((((/* implicit */int) arr_3 [i_2])) | (((/* implicit */int) (unsigned short)27556))))));
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_8))))))) ? (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31459))) ^ (9870801089539911706ULL)))) : (7444952678034250616ULL)));
        }
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
        {
            arr_16 [i_1] [9ULL] [i_1] = ((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))), (((/* implicit */int) arr_7 [i_1]))))));
            arr_17 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (min((((/* implicit */unsigned long long int) (unsigned short)35109)), (arr_12 [i_3] [(unsigned char)6]))) : (min((2646019738805374960ULL), (((/* implicit */unsigned long long int) arr_8 [i_3]))))))));
            var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) % ((~(((/* implicit */int) arr_7 [i_1]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [7ULL] [7ULL])) | (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3] [11ULL] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))) : (min((13319745541841545718ULL), (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)95)) << (((/* implicit */int) arr_10 [i_3])))))))));
        }
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
        {
            arr_20 [i_4] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1]))) : (var_1))), (((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((max(((unsigned short)37835), (((/* implicit */unsigned short) (unsigned char)4)))), (min(((unsigned short)6), (((/* implicit */unsigned short) arr_6 [i_1]))))))))));
            var_17 = ((/* implicit */unsigned short) min((((((arr_11 [i_1] [i_4]) <= (1ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_14 [i_1] [(short)0] [(unsigned short)9])))) : (((var_6) ? (var_5) : (arr_11 [i_4] [i_1]))))), (((/* implicit */unsigned long long int) ((((_Bool) var_11)) ? (((/* implicit */int) ((unsigned short) (unsigned char)251))) : (((/* implicit */int) ((unsigned char) (_Bool)1))))))));
        }
        arr_21 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)226))) <= (5126998531868005898ULL)))) + ((~(((/* implicit */int) arr_6 [i_1]))))));
    }
    var_18 |= ((/* implicit */unsigned char) max((max((var_1), (((/* implicit */unsigned long long int) ((11125587970044889129ULL) <= (14355087630748858483ULL)))))), (((/* implicit */unsigned long long int) var_12))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_7)) ? ((-(14064203423260861528ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned short)34072)))), (((((/* implicit */int) var_4)) - (((/* implicit */int) var_13)))))))));
}
