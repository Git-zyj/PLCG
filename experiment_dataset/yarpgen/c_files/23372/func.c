/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23372
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (((long long int) var_8))))) ? (((/* implicit */long long int) (+((~(((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3)))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)192)), (var_10)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (22LL)))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)-71)))))) : (((/* implicit */unsigned long long int) var_3))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 += ((/* implicit */long long int) (-(max((((var_11) % (((/* implicit */int) arr_5 [i_0] [i_0] [(_Bool)1])))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_1]))))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)86))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) == (arr_1 [i_2] [i_0])))) : (((/* implicit */int) (!(arr_0 [i_2]))))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)0)))) % (((((/* implicit */int) arr_5 [(unsigned char)0] [i_1] [(unsigned char)0])) + (var_1)))))) ^ ((~(3ULL))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_1] [i_2] [i_2]) + (((/* implicit */int) (_Bool)0))))) ? (arr_1 [i_3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)5081)))))))));
                        var_25 += ((/* implicit */short) (+(((((/* implicit */int) (unsigned char)119)) % (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_3]))))));
                    }
                    arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)222)))) ? (((/* implicit */long long int) max((arr_10 [i_2] [i_1] [i_1] [i_0]), (arr_10 [i_2] [i_1] [i_1] [i_0])))) : (((long long int) arr_10 [i_0] [i_1] [i_2] [i_2]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 3; i_6 < 22; i_6 += 3) 
            {
                {
                    var_26 = ((/* implicit */int) arr_18 [i_6 - 2] [i_6] [i_6]);
                    arr_20 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((long long int) (signed char)-31)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_16)))))))) : ((~((-(((/* implicit */int) var_2))))))));
                }
            } 
        } 
    } 
}
