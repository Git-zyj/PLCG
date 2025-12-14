/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216187
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_14)), (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_0])))) : (arr_2 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [(unsigned short)12] [i_1] [(unsigned short)12] &= ((((/* implicit */_Bool) 13177481465742471466ULL)) || (((/* implicit */_Bool) 1606255748U)));
                    arr_10 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) min((arr_7 [i_1] [i_0] [i_2] [i_1]), (((arr_7 [i_2] [i_2] [i_1] [i_0]) & (arr_7 [i_0] [i_0] [i_2] [i_0])))));
                    arr_11 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */short) 13177481465742471445ULL);
                }
            } 
        } 
        var_18 = arr_7 [i_0] [i_0] [i_0] [i_0];
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [(short)0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)25139)) ? (((/* implicit */int) arr_8 [i_0] [(unsigned short)17] [i_0])) : (980454686)))) : (((((/* implicit */_Bool) (short)6243)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */unsigned long long int) var_15)) : (((((/* implicit */_Bool) (~(6662489955911223384LL)))) ? (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0] [(unsigned char)4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) : (min((((/* implicit */unsigned long long int) (signed char)-56)), (arr_2 [i_0])))))));
    }
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] |= arr_0 [i_3];
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((arr_6 [(unsigned short)16] [(unsigned short)16] [i_3]) / (((/* implicit */unsigned long long int) 2147483646))))) ? ((+(arr_4 [i_3] [i_3] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68)))))))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 13177481465742471466ULL)) ? (((/* implicit */int) arr_1 [i_3] [i_3])) : (((/* implicit */int) (unsigned short)60848))))) | (arr_4 [i_3] [i_3] [i_3])))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_17 [i_4])) && (((/* implicit */_Bool) 6662489955911223384LL)))) ? (((((/* implicit */_Bool) (unsigned short)63480)) ? (373797409236157428LL) : (((/* implicit */long long int) -1912055216)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4]))))))));
        /* LoopSeq 1 */
        for (signed char i_5 = 1; i_5 < 23; i_5 += 4) 
        {
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_2)) ^ (-4966167774765390835LL)))) : (var_0))))));
            arr_23 [i_5 - 1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (8U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (arr_19 [i_4])));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 2; i_6 < 23; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_21 [i_7] [i_7]))))));
                        var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((arr_21 [i_4] [i_4]) + (2147483647))) << (((((/* implicit */int) arr_22 [i_6])) - (43796)))))) >= (((((/* implicit */_Bool) arr_21 [i_4] [i_7])) ? (arr_18 [22LL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                    }
                } 
            } 
        }
    }
}
