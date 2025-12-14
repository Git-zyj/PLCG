/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205787
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = (!(((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_0 [i_0])))));
        var_10 = ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) * (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) arr_1 [i_0])));
        var_11 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)65534))))), (140737484161024LL)))) ? (((((/* implicit */_Bool) arr_1 [(unsigned short)3])) ? (((/* implicit */int) ((_Bool) -140737484161025LL))) : (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [(unsigned short)1])))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_5))));
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((short) var_2))) ? ((+(((((/* implicit */_Bool) (unsigned short)0)) ? (18033269596003672946ULL) : (413474477705878650ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
    /* LoopSeq 4 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) min((max((((/* implicit */long long int) ((413474477705878670ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))), (max((var_0), (((/* implicit */long long int) arr_4 [(short)2])))))), (((/* implicit */long long int) max(((unsigned short)60537), (((/* implicit */unsigned short) arr_4 [i_1 - 1]))))))))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1])))))));
        var_16 -= ((/* implicit */signed char) (unsigned short)19313);
        var_17 = ((/* implicit */unsigned short) min((max((873095735589117879LL), (((/* implicit */long long int) ((17592186044415ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [(short)3])) * (((/* implicit */int) arr_4 [i_1 - 1]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)27446)))) : (((/* implicit */int) arr_4 [i_1 - 1])))))));
    }
    for (long long int i_2 = 2; i_2 < 13; i_2 += 3) /* same iter space */
    {
        var_18 = arr_4 [(unsigned short)7];
        arr_7 [i_2 - 2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_4 [i_2 + 2]), (arr_4 [i_2 - 1]))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)91)), ((short)0)))) && (((/* implicit */_Bool) min((arr_4 [i_2]), (arr_4 [i_2 + 1]))))));
        /* LoopSeq 3 */
        for (short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (18446726481523507200ULL)));
            var_21 -= ((/* implicit */_Bool) var_6);
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) -3749983535657912875LL))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((((((/* implicit */_Bool) arr_5 [i_2 + 2])) ? (((((arr_6 [i_2 + 2]) + (9223372036854775807LL))) << (((((/* implicit */int) var_5)) - (169))))) : (arr_6 [11]))), (((/* implicit */long long int) min((((((/* implicit */_Bool) 18446726481523507200ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3]))) : (arr_5 [i_3]))), (((/* implicit */unsigned int) arr_3 [19ULL]))))))))));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_24 &= min((((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_4 - 1])), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) arr_9 [i_4]))))))), (3794204691U));
            arr_12 [i_4] [i_4] = ((/* implicit */_Bool) 562949684985856LL);
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            var_25 = (+(((/* implicit */int) arr_16 [i_2 + 1])));
            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 18033269596003672937ULL))));
        }
    }
    for (long long int i_6 = 2; i_6 < 13; i_6 += 3) /* same iter space */
    {
        arr_19 [i_6] = ((/* implicit */unsigned int) (-(9223372036854775807LL)));
        arr_20 [i_6 - 2] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))) - (2576942929U))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)73)))));
    }
    for (long long int i_7 = 2; i_7 < 13; i_7 += 3) /* same iter space */
    {
        arr_24 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (signed char)0)), (2147483647U))) << (min((((/* implicit */int) (_Bool)1)), (var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -3749983535657912875LL)))) : (max((min((((/* implicit */long long int) (signed char)117)), (var_6))), (((/* implicit */long long int) min((arr_3 [i_7]), (((/* implicit */short) var_5)))))))));
        arr_25 [i_7] = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7 - 2]))) : (0U))), (((/* implicit */unsigned int) arr_14 [i_7]))))));
        arr_26 [i_7 - 2] = ((/* implicit */unsigned int) max((5677786404466924037ULL), (((/* implicit */unsigned long long int) (unsigned char)192))));
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) max((min((2147483641U), (((/* implicit */unsigned int) (signed char)-1)))), (max((((/* implicit */unsigned int) (unsigned short)32768)), (2147483649U))))))));
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) min((max((-1), (((/* implicit */int) (short)12482)))), (var_3))))));
    }
}
