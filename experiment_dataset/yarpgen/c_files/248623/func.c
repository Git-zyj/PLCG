/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248623
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */int) (unsigned short)11158)) : (((/* implicit */int) (signed char)28))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (15583979000540161130ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_5 [i_2] [i_2] [(unsigned char)8] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) >> (((((((/* implicit */int) var_6)) - (-2000999037))) - (2000999031)))))));
                    var_20 = ((/* implicit */short) arr_6 [6ULL] [(unsigned short)14] [6ULL]);
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_0])) - (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) var_18)) : (((((/* implicit */_Bool) -1959036279)) ? (((/* implicit */int) (short)-4241)) : (((/* implicit */int) arr_1 [3ULL]))))))), ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30032))) : (18446744073642442752ULL))) % (arr_5 [i_0] [i_1] [i_0] [i_0]))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) min(((unsigned short)50658), (((/* implicit */unsigned short) (unsigned char)255))))) == (((/* implicit */int) (((_Bool)0) && (var_8))))))) % (((/* implicit */int) arr_3 [i_0]))));
        var_23 = ((/* implicit */unsigned char) (((+(max((arr_5 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])))))) > (max((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) - (var_16))))))));
        arr_7 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned long long int) ((((arr_5 [i_0] [i_0] [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)127))))) : (((/* implicit */int) (unsigned char)226)))));
    }
    var_24 = ((/* implicit */unsigned short) var_17);
}
