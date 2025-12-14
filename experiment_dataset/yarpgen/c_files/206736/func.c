/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206736
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
    var_17 = ((/* implicit */_Bool) var_11);
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1099511627775ULL)) ? (((unsigned int) 2453795170U)) : (((/* implicit */unsigned int) 2146435072)))) / (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)15297)) ^ (((/* implicit */int) (unsigned short)50235))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) || (((/* implicit */_Bool) ((signed char) (short)-4534))))))));
        var_21 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0])))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) max((var_11), (((/* implicit */int) arr_6 [i_1]))))))))));
            var_23 = ((/* implicit */unsigned char) (+(((17891555486206881355ULL) ^ (((/* implicit */unsigned long long int) -2275480055951499052LL))))));
        }
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */unsigned int) min((arr_4 [i_1]), (arr_3 [i_1 + 1])))) != ((+(arr_7 [i_1 - 1] [i_1] [i_1 + 1]))))))));
        var_25 *= ((/* implicit */unsigned int) (+(min((arr_4 [i_1 - 1]), (arr_4 [i_1 - 1])))));
        var_26 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) var_14))))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_1])) <= (arr_8 [0ULL] [i_1 - 1] [i_1])))))) ? (((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (((/* implicit */int) (unsigned short)15321)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) arr_5 [i_1 - 1])) : (((/* implicit */int) ((((/* implicit */int) (signed char)106)) >= (((/* implicit */int) (unsigned short)15297)))))))));
    }
}
