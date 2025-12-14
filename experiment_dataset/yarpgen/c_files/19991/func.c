/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19991
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
    var_18 |= ((/* implicit */unsigned char) var_13);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) (_Bool)1);
        var_20 = ((/* implicit */_Bool) 14997052884378114244ULL);
        arr_2 [i_0] = ((/* implicit */signed char) (_Bool)0);
        arr_3 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) min((arr_1 [8LL]), (max((arr_0 [i_0]), (arr_0 [i_0]))))))) * (((long long int) min((((/* implicit */unsigned long long int) var_15)), (var_9)))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) ((int) ((signed char) arr_4 [i_0])));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                var_22 = ((/* implicit */int) min((var_22), ((~(((/* implicit */int) arr_0 [i_2]))))));
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned char)6] [i_1] [i_2]))) % (arr_7 [i_1]))) ^ (((/* implicit */unsigned long long int) (-(arr_5 [i_1] [i_1]))))))) ? (var_9) : (((/* implicit */unsigned long long int) 890544853545916490LL))));
                var_24 = ((/* implicit */short) arr_5 [i_2] [i_1]);
            }
            var_25 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (2944498003102717920LL)))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_7 [5ULL]))) : (min((arr_7 [i_0]), (((/* implicit */unsigned long long int) var_14)))))), (((((/* implicit */_Bool) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (max((var_9), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0]))))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_12)))) == (((/* implicit */int) max((arr_6 [i_0] [i_0] [i_3]), (arr_6 [i_0] [i_0] [i_3])))))));
            arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_3]))) ? (((/* implicit */int) arr_4 [(unsigned short)0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0])))))))) || (((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_6 [i_3] [i_0] [i_3])), (arr_10 [(short)18] [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_3])) * (((/* implicit */int) var_2))))))))));
            var_27 &= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)119))));
            arr_13 [(unsigned short)6] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)43620)) ? (((/* implicit */unsigned long long int) 1791941058115387628LL)) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (arr_8 [i_0] [i_3] [i_0]) : (var_8)))));
        }
        for (int i_4 = 2; i_4 < 18; i_4 += 4) 
        {
            var_28 |= ((/* implicit */unsigned char) (signed char)109);
            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((signed char) 4584599863325733776LL)))));
        }
    }
}
