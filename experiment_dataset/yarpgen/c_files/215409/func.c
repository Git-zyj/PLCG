/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215409
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((var_6) > (((/* implicit */unsigned long long int) arr_2 [i_0 + 1]))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8057590967063110800ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0])) ^ (((/* implicit */int) (unsigned short)65525))))) : ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65521))) % (var_11)))))));
                    arr_10 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_5 [i_0] [i_0 + 2] [i_0 - 3])) != (((/* implicit */int) (unsigned short)65503)))) ? (((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0 + 2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28846)))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)28843)) ? ((~(((/* implicit */int) arr_9 [i_0 - 3] [i_0 + 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_12)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((var_2) + (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)36688)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_12))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 84845358021290872ULL)) ? (((/* implicit */int) (unsigned short)38548)) : (((/* implicit */int) var_5)))))))) ? (((84845358021290902ULL) << (((((/* implicit */int) arr_12 [i_3])) - (7373))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((-260136600), (((/* implicit */int) (unsigned short)20))))) | (((((/* implicit */long long int) ((/* implicit */int) var_9))) & (var_8))))))));
        var_18 = ((/* implicit */short) -9223372036854775800LL);
    }
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) var_0);
                    var_20 -= ((/* implicit */long long int) (unsigned short)38543);
                    arr_21 [i_6] [i_5] [(unsigned short)14] [i_6] = (unsigned short)36697;
                    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_2), (6846218922584433681LL)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) - (min((var_12), (((/* implicit */unsigned long long int) arr_8 [i_4] [i_4]))))));
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) (unsigned short)38548);
        var_23 |= ((/* implicit */long long int) var_3);
        var_24 += min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)97)), (4294967278U)))), (((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (84845358021290879ULL))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            {
                var_25 = ((/* implicit */int) -6114844443284607405LL);
                arr_27 [i_8] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_23 [i_7] [i_8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_7] [i_7])) <= (((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) arr_23 [i_8] [i_7])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_7] [i_7])))))));
            }
        } 
    } 
}
