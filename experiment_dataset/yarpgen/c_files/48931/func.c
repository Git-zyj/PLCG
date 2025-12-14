/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48931
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] [(unsigned short)7] = ((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_1 [i_0]))), (((/* implicit */long long int) (((+(2622127617U))) | (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0])), (var_8))))))))));
        var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((~((-(((/* implicit */int) (unsigned short)18331)))))) : ((-(((/* implicit */int) ((unsigned char) var_1)))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) (!(((((/* implicit */int) max(((unsigned short)18320), ((unsigned short)58066)))) <= (((/* implicit */int) (unsigned short)18329))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (unsigned short)18331))));
        var_21 = ((/* implicit */unsigned char) min((arr_7 [i_1]), (((/* implicit */long long int) ((unsigned int) arr_4 [i_1] [(_Bool)1])))));
    }
    for (short i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (arr_5 [i_2 + 2] [(unsigned short)21])));
        arr_10 [i_2] [i_2 + 1] = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (var_5) : (((/* implicit */unsigned long long int) arr_2 [i_2])))))) ? (min((arr_9 [i_2 + 2] [i_2 + 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (arr_7 [i_2]) : (-1LL)))))) : (((/* implicit */unsigned long long int) max((min((arr_2 [i_2]), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_2])))))))));
        arr_11 [i_2 + 2] = ((/* implicit */unsigned char) 14336ULL);
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)32767)))) ? (((unsigned long long int) arr_6 [(unsigned char)10])) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))) ? (arr_2 [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)216), (((/* implicit */unsigned char) (_Bool)0))))))));
    }
}
