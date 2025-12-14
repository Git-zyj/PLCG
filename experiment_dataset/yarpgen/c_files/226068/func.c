/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226068
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
    for (long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_1])) && (((_Bool) (_Bool)1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (15872ULL))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) -1805598355)) || (((/* implicit */_Bool) (unsigned short)52778)))) || (var_11))))));
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709535748ULL)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (unsigned char)109))))) ? (((long long int) 11037933269680274526ULL)) : (max((((var_6) | (((/* implicit */long long int) arr_4 [(_Bool)1])))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_1] [(unsigned short)5])), (102794022U)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                arr_10 [(unsigned short)0] = ((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2]);
                var_21 ^= ((/* implicit */_Bool) arr_6 [i_2]);
                arr_11 [i_2] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)26735)) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_3])) : (min((((/* implicit */int) var_1)), (arr_6 [i_3])))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) min(((~(((unsigned long long int) 18446744073709535743ULL)))), (var_4)));
}
