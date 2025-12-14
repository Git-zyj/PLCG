/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38143
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_0 [(unsigned char)1] [(unsigned char)1]))))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */int) ((((((/* implicit */int) arr_6 [i_0] [(unsigned char)11])) ^ (((/* implicit */int) (short)9034)))) < (max((((/* implicit */int) (short)32758)), (133693440)))))) : (arr_4 [i_0] [i_0] [i_1])));
            arr_7 [i_0 + 3] = ((/* implicit */unsigned long long int) (((-(-133693457))) * (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7))))))))));
            var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)64513)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)65)))) < (arr_3 [i_0 + 3])));
            var_17 = ((/* implicit */unsigned long long int) arr_2 [(unsigned short)4]);
            arr_8 [21ULL] [21ULL] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)-32762)) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_4 [i_1] [i_0] [(signed char)21]) : (((/* implicit */int) (short)-32762)))) : (max((133955584), (-137080537)))))));
        }
        for (signed char i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
        {
            arr_13 [i_0 + 2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7380)) ? (((/* implicit */int) (_Bool)0)) : (-370172906))))));
            arr_14 [i_0] [i_2] [i_2] = min((((/* implicit */int) (_Bool)0)), (-133693445));
            var_18 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)50081)) : (((/* implicit */int) (unsigned short)51946))))) ? (((((/* implicit */_Bool) (short)-32752)) ? (((/* implicit */int) (short)10452)) : (arr_4 [i_2] [i_2] [i_2]))) : (((/* implicit */int) (_Bool)0))))));
        }
        var_19 = ((/* implicit */unsigned short) max((max((max((0ULL), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10309835516650195663ULL))))))), (((((/* implicit */_Bool) min((arr_4 [(unsigned short)0] [i_0] [i_0 + 1]), (arr_3 [i_0])))) ? (max((((/* implicit */unsigned long long int) var_4)), (6561566810590015736ULL))) : (arr_0 [i_0] [i_0])))));
    }
    var_20 = max((((/* implicit */int) (!(((/* implicit */_Bool) max(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1)))))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (4456555502114081573ULL)))))));
}
