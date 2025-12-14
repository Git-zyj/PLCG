/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36799
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
    var_13 |= min(((((((-9223372036854775807LL - 1LL)) | ((-9223372036854775807LL - 1LL)))) ^ (342449120387315508LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (-9223372036854775807LL - 1LL)))) ? (var_9) : (((/* implicit */unsigned int) ((537330256) | (((/* implicit */int) var_4)))))))));
    var_14 -= ((/* implicit */signed char) (((-(((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) var_0)))))) != (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -1)) ? (-537330256) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_3)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            arr_4 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_1 [19U] [i_1 + 1])) ? (393216) : (((/* implicit */int) ((4191305400303563255LL) != (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) : (((/* implicit */int) ((min((((/* implicit */long long int) 660753118)), (var_12))) != (min((511543909079288743LL), (((/* implicit */long long int) arr_0 [18LL])))))))));
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))));
        }
        var_15 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))) : (var_12)));
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((arr_3 [i_3 + 2] [(signed char)24] [i_2]) != (arr_3 [i_3 + 1] [(signed char)24] [i_3]))))));
            arr_11 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) 2990343462856907418LL)) ? (arr_7 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-57))))) >= (((/* implicit */long long int) 660753118))));
        }
        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            arr_15 [2] |= ((/* implicit */short) (+(max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-88))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 660753126)) : (arr_1 [i_4] [i_2])))))));
            var_17 = arr_9 [i_2] [i_2];
            var_18 = ((/* implicit */long long int) ((unsigned long long int) (~(max((arr_1 [i_2] [i_2]), (((/* implicit */long long int) (signed char)-57)))))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [3])) ? (5209032025454653732ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)0] [i_2] [i_2]))))), (((/* implicit */unsigned long long int) arr_10 [(unsigned char)2]))))) ? (arr_6 [i_2]) : ((+(arr_6 [8U])))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) ((signed char) ((max((arr_14 [i_2]), (((/* implicit */unsigned long long int) arr_13 [i_2])))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned char)0]))) : (var_9)))))));
            var_21 = ((/* implicit */long long int) ((arr_8 [i_2]) | (((/* implicit */unsigned long long int) ((long long int) ((17179869183LL) | (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            arr_20 [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_1 [i_2] [i_2]) == (arr_1 [i_6] [i_2])));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 267911168)) ? (arr_8 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 2310902826U))))));
            arr_21 [i_2] = 6063830922850745369LL;
            arr_22 [i_2] = ((/* implicit */signed char) ((long long int) -17179869183LL));
        }
    }
}
