/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213129
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_17 -= ((/* implicit */signed char) ((((/* implicit */int) (((~(((/* implicit */int) arr_1 [i_0])))) >= (((/* implicit */int) arr_1 [i_0]))))) < (((/* implicit */int) arr_1 [(unsigned short)16]))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) / (-1)))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : ((-(((/* implicit */int) min((arr_0 [(unsigned short)18]), (arr_0 [i_0])))))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */signed char) ((((unsigned long long int) var_13)) > (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-81)) + (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (unsigned short)4))))))))));
            var_20 = ((max((((/* implicit */int) var_8)), (arr_3 [i_0] [i_1] [i_1]))) != (((arr_3 [i_0] [i_0] [i_0]) % (arr_3 [i_1] [i_1] [i_1]))));
        }
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_7 [(signed char)14] [(unsigned char)10] = ((/* implicit */long long int) (+((-(arr_3 [i_0] [i_0] [i_0])))));
            var_21 = ((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) < (2233785415175766016ULL)))) % (((/* implicit */int) arr_2 [i_0])))) | ((~(((/* implicit */int) arr_0 [i_0])))));
            arr_8 [9U] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) > (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -4431972025425725971LL)) && (((/* implicit */_Bool) -4431972025425725971LL))))))));
        }
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) (+((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_7))) % (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (4431972025425725965LL))))))));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 2; i_3 < 16; i_3 += 3) 
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4431972025425725959LL)))) ? (((((/* implicit */_Bool) ((var_1) << (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_5 [(unsigned short)15])))) : (((/* implicit */int) var_11)))) : (((((/* implicit */int) arr_5 [i_3 + 2])) << (((((/* implicit */int) arr_5 [i_3 + 2])) - (36441)))))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_11 [i_3 + 1]))))) ? (((/* implicit */int) max(((short)-23915), (((/* implicit */short) var_12))))) : (((/* implicit */int) min((((/* implicit */unsigned short) min((var_6), (arr_0 [i_0])))), ((unsigned short)65517))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            var_24 = ((/* implicit */short) ((var_13) ? ((-(-1273551387))) : (((/* implicit */int) min((arr_1 [i_4]), (arr_1 [i_0]))))));
            var_25 -= ((/* implicit */short) var_3);
            arr_14 [i_4] [i_0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) 507582185U))))))));
        }
    }
    var_26 = ((/* implicit */unsigned short) ((_Bool) ((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))));
}
