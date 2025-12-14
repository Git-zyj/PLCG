/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199642
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
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65515))) : (4281720421238100328ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_9) : (((/* implicit */int) (signed char)24)))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)73)) ? (var_9) : (-137297738))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-116)), (var_6))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 14165023652471451280ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (4281720421238100328ULL)))) ? (((((/* implicit */_Bool) 31)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_14))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4281720421238100309ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))))));
    var_16 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((min((((/* implicit */int) var_12)), (var_9))), (((/* implicit */int) min(((unsigned char)233), (((/* implicit */unsigned char) var_10)))))))), (min((((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_14))), (((/* implicit */long long int) ((var_10) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)6), (((/* implicit */unsigned short) (_Bool)1))))) ? (max((var_14), (((/* implicit */long long int) (unsigned short)5845)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_0), (((/* implicit */signed char) (_Bool)1))))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)14)) : (var_9))), (((/* implicit */int) max(((signed char)116), (((/* implicit */signed char) (_Bool)1)))))))) : (((((/* implicit */_Bool) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)126))))) ? (max((var_13), (((/* implicit */long long int) (_Bool)1)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_14)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0] [(unsigned char)12])) : (((/* implicit */int) (unsigned char)60))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (short)17281))))) : (((((/* implicit */_Bool) (unsigned short)57077)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (17098831730890091143ULL)))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((var_10) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)221)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (_Bool)1)))))))));
        arr_3 [(unsigned char)4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned short)9])) ? (14165023652471451288ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551608ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)102))))));
        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)8))))) ? (((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)92)))) : (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_11))))));
    }
}
