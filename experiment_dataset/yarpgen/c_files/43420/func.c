/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43420
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((((_Bool) arr_1 [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7992))) < (arr_1 [i_0])))));
        var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((_Bool) (unsigned short)5282))), (((arr_1 [4U]) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [(unsigned short)8] [i_0])) ^ (((/* implicit */int) var_11)))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (~(((long long int) ((arr_0 [i_0] [i_1]) ? (((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned short)2])) : (((/* implicit */int) (unsigned short)57543)))))));
                    var_20 = ((/* implicit */_Bool) (unsigned short)31761);
                    arr_8 [i_2] [i_1] [i_1] [i_2] = ((max((arr_0 [(unsigned short)6] [8]), (arr_0 [i_2] [4]))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [(_Bool)1])), ((unsigned short)12738)))) : (min((((/* implicit */int) (unsigned char)27)), (0))));
                    var_21 += ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5616))))), (((((/* implicit */_Bool) ((arr_7 [i_0]) >> (((((/* implicit */int) (unsigned short)65535)) - (65522)))))) ? (((/* implicit */int) ((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_2])))))) : (((/* implicit */int) (unsigned short)5622))))));
                }
            } 
        } 
        var_22 += min((((arr_4 [i_0] [i_0] [i_0]) & (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))));
    }
    var_23 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            {
                var_24 ^= ((/* implicit */int) min((var_15), (((/* implicit */unsigned short) ((max((arr_11 [i_3]), (((/* implicit */int) (unsigned short)43111)))) < (((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) arr_11 [i_4]))))))))));
                var_25 = ((/* implicit */unsigned int) arr_13 [i_4] [i_4] [i_3 - 1]);
                arr_14 [(unsigned short)6] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)65535)), (arr_11 [i_3 + 3])))), (((unsigned long long int) (unsigned short)33749))));
            }
        } 
    } 
}
