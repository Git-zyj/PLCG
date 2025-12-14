/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213314
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_20 -= ((/* implicit */short) arr_2 [i_0] [i_0]);
        var_21 -= ((/* implicit */unsigned char) (+(arr_2 [i_0] [i_0])));
    }
    for (signed char i_1 = 3; i_1 < 12; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) -26)) : (var_10))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_5 [i_1] = ((/* implicit */short) max(((~(((/* implicit */int) arr_4 [i_1 - 1])))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_1 [i_1]))))) || (((/* implicit */_Bool) arr_3 [i_1])))))));
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_23 -= ((/* implicit */unsigned char) arr_2 [i_2] [i_2]);
        var_24 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_2 [i_2] [i_2]) : (((/* implicit */int) (signed char)0)))) : (((int) var_4))))), (((long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (-649900575) : (((/* implicit */int) arr_4 [i_2])))))));
        arr_9 [i_2] = ((/* implicit */unsigned int) min((arr_7 [i_2] [i_2]), (arr_7 [i_2] [i_2])));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 12; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_15 [(unsigned char)10] [i_4] = ((/* implicit */int) ((unsigned long long int) arr_10 [i_3 - 1]));
            var_25 = ((/* implicit */unsigned long long int) ((arr_13 [i_4]) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4])))))));
            var_26 = ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) arr_10 [i_4])))));
            var_27 = (+(((((/* implicit */int) arr_10 [i_3 - 1])) >> (17))));
        }
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_11 [i_3 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3]))) : ((~(arr_11 [i_3 + 1])))));
    }
    for (long long int i_5 = 1; i_5 < 12; i_5 += 4) /* same iter space */
    {
        var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5 + 1])) ? (arr_11 [i_5]) : (((/* implicit */unsigned long long int) arr_12 [i_5] [i_5] [i_5 - 1]))))) ? (min((((/* implicit */int) arr_16 [i_5])), (arr_2 [i_5] [i_5]))) : (((/* implicit */int) arr_4 [i_5]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_18 [i_5])) : (arr_2 [i_5] [i_5]))) > (((/* implicit */int) min((arr_3 [i_5]), (((/* implicit */unsigned short) (unsigned char)106)))))))) : (min((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_5] [i_5])) && (((/* implicit */_Bool) arr_13 [i_5]))))), ((-(((/* implicit */int) (short)7743)))))));
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (unsigned short)21))));
        var_31 -= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_5]))))))))));
    }
    var_32 -= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)7745))))) ? (var_3) : (((/* implicit */int) min((((/* implicit */short) var_18)), (var_19)))))));
    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_9)))) * (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (2017810135U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)37165), (((/* implicit */unsigned short) var_18)))))) : ((+(var_2)))))));
}
