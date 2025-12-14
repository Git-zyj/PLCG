/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30535
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
    var_20 = max(((~(((/* implicit */int) (unsigned char)240)))), (((((/* implicit */int) var_8)) | (((/* implicit */int) (unsigned char)16)))));
    var_21 *= ((/* implicit */unsigned int) max((max(((~(-920034207))), (((/* implicit */int) ((unsigned char) (signed char)76))))), ((~((+(((/* implicit */int) var_1))))))));
    var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)240)) ? (max((((/* implicit */long long int) max((16383U), (((/* implicit */unsigned int) (unsigned short)0))))), (((((/* implicit */long long int) ((/* implicit */int) var_18))) | (-472583772175210968LL))))) : (max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (var_7)))), (-3071454615070009021LL)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [9]) : (arr_1 [4ULL]))), (arr_0 [i_0]))) * (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_17)) % (((/* implicit */int) var_1))))))));
        arr_2 [7] = ((arr_0 [i_0]) % (((/* implicit */unsigned long long int) -920034207)));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        arr_6 [(unsigned char)6] = ((/* implicit */unsigned short) (+(min((arr_0 [i_1]), (arr_0 [i_1])))));
        var_24 = ((unsigned int) ((arr_4 [1]) | (min((((/* implicit */int) (_Bool)1)), (268369920)))));
        var_25 -= ((/* implicit */unsigned int) arr_0 [(_Bool)1]);
        var_26 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (-1)))) ? (((/* implicit */unsigned long long int) ((var_9) | (((/* implicit */int) var_8))))) : (((((/* implicit */unsigned long long int) var_5)) / (arr_0 [(unsigned short)8]))))) % (((/* implicit */unsigned long long int) 4294950912U))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_27 &= ((/* implicit */_Bool) (unsigned char)7);
                    var_28 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_4 [(short)1])), ((((~(0LL))) / (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_11 [6LL] [(_Bool)1] [i_1])), (23U))))))));
                    var_29 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_3 [6])))))))) | (max((((unsigned int) (unsigned char)16)), (((/* implicit */unsigned int) min((var_3), (((/* implicit */unsigned short) (unsigned char)0)))))))));
                }
            } 
        } 
    }
}
