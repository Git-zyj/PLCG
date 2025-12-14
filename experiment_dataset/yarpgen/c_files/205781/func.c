/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205781
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) 694877807)) ? (((/* implicit */int) (short)-23409)) : (((/* implicit */int) (short)-9703)))) : (((((/* implicit */_Bool) (unsigned short)48595)) ? (((((/* implicit */_Bool) var_15)) ? (-694877814) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_5))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)53034)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) 667760240)) ? (11808285639300973311ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1)))))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15502)) ? (-1208411575) : (((((/* implicit */_Bool) 7125556472261296662LL)) ? (667760240) : (707690682))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48595)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14))))) ? (((arr_0 [i_0]) ? (var_4) : (((/* implicit */unsigned int) 785032242)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)33107)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (short)32265)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_6)));
        var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_8))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) -290749521)) ? (arr_5 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (arr_7 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2])))))) ? (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */unsigned int) var_12)) : (var_4))) : (var_0)))) : (((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_7 [i_2] [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) var_1)) : (-694877807)))))))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (1894807913) : (((/* implicit */int) (signed char)-3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-7)) ? (var_13) : (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */_Bool) (signed char)-55)) ? (-6864762733278318092LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) 679793129U))))) : (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned long long int) var_4))))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1894807913)) ? (((var_7) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_2])))) : (var_12)))) ? (((((/* implicit */_Bool) (unsigned short)43311)) ? (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15882))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7156006845775677820LL)) ? (1350773636) : (((/* implicit */int) (signed char)3)))))));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -667760241)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (signed char)-110))))) : (((((/* implicit */_Bool) (short)-10800)) ? (7156006845775677809LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3070)))))))) ? (((((/* implicit */_Bool) (short)20929)) ? (((/* implicit */unsigned long long int) var_12)) : (16294812574406565003ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (1156918942)))) ? (arr_7 [i_2] [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (var_9)))))))));
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3786)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)136))) : (arr_5 [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26162))) : (((((/* implicit */_Bool) var_4)) ? (arr_5 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14109))) : (var_4)))) ? (((((/* implicit */_Bool) (short)28704)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) var_3))))))))));
    }
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-2182)) ? (876568888) : (-876568888)));
}
