/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208989
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */int) arr_5 [i_2] [i_0])) : (((/* implicit */int) (short)-25653))))));
                    var_13 = ((/* implicit */unsigned char) ((((long long int) arr_4 [i_0])) >> (((-125530975068420714LL) + (125530975068420744LL)))));
                    var_14 += ((/* implicit */signed char) ((long long int) (~((~(((/* implicit */int) var_6)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(var_4)))))) >= (max((((/* implicit */unsigned long long int) arr_17 [i_5] [i_5] [i_4] [i_6])), (arr_9 [i_4] [i_6])))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_5)) ? (-1) : (((/* implicit */int) arr_17 [(_Bool)1] [i_4] [i_4] [6U])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_9 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5])))))) ? ((((_Bool)1) ? (10672689592729581426ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [11ULL] [i_5] [i_6]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_16 [i_5] [i_6] [i_3] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_4] [i_3])) ? (((/* implicit */int) ((arr_13 [i_6] [i_5] [i_3]) < (((/* implicit */int) var_6))))) : (arr_10 [i_6] [i_5]))))));
                    }
                    var_17 = ((/* implicit */unsigned char) arr_10 [i_3] [i_4]);
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)0)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [16ULL] [9ULL])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8823)))))) ? (((long long int) 12619884760881567053ULL)) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((5826859312827984562ULL) << (((arr_14 [2] [2] [i_5]) - (1018800473930790382ULL)))))) ? (((/* implicit */int) ((arr_14 [i_3] [i_3] [i_5]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(_Bool)1] [i_4])))))) : (((/* implicit */int) var_0)))))));
                    arr_18 [i_5] [i_5] = ((/* implicit */signed char) ((unsigned int) (~(((((/* implicit */_Bool) arr_10 [i_3] [i_4])) ? (arr_13 [i_5] [i_5] [i_5]) : (((/* implicit */int) (unsigned short)39930)))))));
                }
            } 
        } 
    } 
}
