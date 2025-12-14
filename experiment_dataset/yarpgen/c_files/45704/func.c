/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45704
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
    var_19 = ((/* implicit */short) 6054307678432106039LL);
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_8))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 8; i_0 += 3) /* same iter space */
    {
        var_21 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2]))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 4])) ? ((~(arr_1 [i_0] [i_0]))) : (min((arr_2 [5ULL]), (arr_1 [i_0] [i_0])))))));
        var_22 += ((/* implicit */int) arr_2 [i_0 - 4]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) 3009032909654272807ULL));
    }
    for (int i_1 = 4; i_1 < 8; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = var_6;
        arr_9 [i_1] = (~(((((/* implicit */_Bool) arr_4 [i_1 - 3])) ? (max((arr_1 [i_1 + 1] [i_1]), (((/* implicit */unsigned long long int) 1775839230)))) : (((/* implicit */unsigned long long int) -1775839223)))));
    }
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (unsigned char i_3 = 3; i_3 < 13; i_3 += 3) 
        {
            {
                var_23 = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_13 [i_3] [i_3 - 2]))))));
                var_24 ^= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_13 [(unsigned short)5] [i_3 - 2]))))));
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_17 [(unsigned short)12])))) << (((((/* implicit */int) arr_15 [i_3 - 1])) - (213)))))) ? (((/* implicit */int) arr_15 [i_2])) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_16)), (arr_11 [(unsigned char)4])))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2])) || (((/* implicit */_Bool) arr_13 [i_3 - 3] [i_2]))))))))))));
            }
        } 
    } 
}
