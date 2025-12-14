/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231045
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_1])), ((unsigned short)27856)))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && ((_Bool)0)))) == (((/* implicit */int) max((((/* implicit */unsigned char) var_11)), ((unsigned char)10)))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    var_15 = (-(((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 - 2] [(signed char)5])) > (((/* implicit */int) arr_6 [i_2 - 1] [i_1]))))));
                    arr_8 [i_1] [3] [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)115);
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)224))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned short)10] [i_2 - 1] [i_2 - 1]))) : (max((((/* implicit */unsigned long long int) (unsigned char)62)), (14939098471317708228ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [5U])) ? (arr_3 [i_0] [i_1] [(unsigned char)10]) : (10U)))) ? (arr_1 [i_2 + 1]) : (((-13699408) / (((/* implicit */int) (unsigned char)93)))))) : (((/* implicit */int) (_Bool)0)))))));
                    var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [4] [i_1] [4]))) - (var_8)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [(unsigned short)10] [i_1] [i_2 - 2]))))) : (max((8031167820123876600LL), (((/* implicit */long long int) arr_7 [2] [i_1] [2]))))));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((max((((((/* implicit */int) (short)18550)) + (((/* implicit */int) (unsigned char)254)))), (((/* implicit */int) var_9)))) % (((/* implicit */int) arr_0 [i_0] [i_0]))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_1))));
}
