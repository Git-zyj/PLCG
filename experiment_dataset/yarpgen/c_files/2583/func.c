/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2583
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)20950)) ? (((/* implicit */unsigned long long int) max((((unsigned int) 6060719948002750991LL)), (((/* implicit */unsigned int) ((unsigned char) arr_2 [i_0] [i_1])))))) : (((((/* implicit */_Bool) -6060719948002751005LL)) ? (min((((/* implicit */unsigned long long int) (short)-20948)), (10967108545606719764ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65522)))))))));
            var_13 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) (short)-20954)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)22280))) | (arr_3 [3LL] [i_0] [3LL]))))) << (((((var_8) | (((/* implicit */long long int) ((/* implicit */int) var_6))))) - (3457013335786848147LL)))));
        }
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)27), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-21297)) > (((/* implicit */int) (unsigned short)32768)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (max((min((-6060719948002750998LL), (5480907668656531849LL))), (((/* implicit */long long int) ((((((/* implicit */int) (short)-21297)) + (2147483647))) >> (((/* implicit */int) (unsigned short)6)))))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 13; i_2 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_2 [(unsigned short)6] [i_2 - 1])))))));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(3718174679U)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)287)) / (((/* implicit */int) var_1))))) : ((+(var_9)))));
        arr_11 [i_2 + 1] = ((/* implicit */int) ((unsigned int) arr_6 [i_2 - 1] [i_2 - 1]));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            var_15 |= ((/* implicit */unsigned char) ((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_2 + 1])))));
            arr_14 [i_2] [i_3] [i_2] = ((unsigned char) var_10);
        }
    }
    var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 3718174679U)) ? (((/* implicit */int) (short)21270)) : (((/* implicit */int) (unsigned short)33913))))) != (var_9)));
}
