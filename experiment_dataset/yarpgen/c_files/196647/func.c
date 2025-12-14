/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196647
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
    for (long long int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)56)) / (((/* implicit */int) (unsigned char)96)))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? ((+(arr_0 [i_0 + 2]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)37))))))) - (2956376428U)))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))))))))));
    }
    /* LoopNest 3 */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        for (unsigned int i_2 = 4; i_2 < 10; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) arr_5 [i_2] [(unsigned short)11])) : (arr_3 [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3] [i_2])) && (((/* implicit */_Bool) var_14)))))) : (((var_12) & (((/* implicit */unsigned long long int) var_15))))))));
                    var_20 = ((/* implicit */unsigned char) (-((+((~(((/* implicit */int) (unsigned short)0))))))));
                    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) - (8263897830081765678LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-1164260285731394276LL)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (arr_6 [i_1] [10ULL]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -254604313))))))));
                    arr_8 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_4 [i_3] [i_2] [i_1]))))) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-8263897830081765693LL)))))) | ((+(((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (49597212755541711ULL) : (((/* implicit */unsigned long long int) -8263897830081765679LL))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-254604323) / (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4720446800123075958ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))) : (((var_8) - (var_8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((var_8) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)213)) - (204))))))))) : ((-(((((/* implicit */_Bool) (short)6454)) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) var_1))))))));
    var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 254604306)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)149))))) ? (((((/* implicit */_Bool) -8263897830081765678LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)93)))))))) ? ((((((-(((/* implicit */int) var_1)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)249))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) 65011712)) : (-8263897830081765678LL)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)16))))))))));
}
