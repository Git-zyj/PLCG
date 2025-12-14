/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244991
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
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_11)))))) == (var_4)))), ((unsigned short)65535)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_21 *= ((signed char) arr_0 [i_0 + 1] [i_0 - 3]);
        var_22 = ((/* implicit */unsigned char) (!(((arr_1 [i_0]) != (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_23 &= ((/* implicit */unsigned short) ((_Bool) arr_1 [i_0 - 3]));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_24 &= ((/* implicit */signed char) min((max(((~(((/* implicit */int) arr_12 [i_1] [i_2] [i_3])))), ((-(((/* implicit */int) var_11)))))), (arr_15 [i_1] [i_1] [i_1] [i_3] [i_4] [(signed char)2])));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_25 ^= ((/* implicit */unsigned long long int) (+(max((var_5), (((/* implicit */unsigned int) (~(arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                            var_26 = ((/* implicit */long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))))), (var_1)));
                            arr_18 [i_1] [i_2] [i_3] [i_1] [0ULL] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_5] [i_3] [i_1] [i_5]))) ^ (var_4))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned short) ((((arr_9 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1]) ^ (arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]))) >= (((((/* implicit */_Bool) arr_19 [i_4 - 1] [(unsigned short)9] [i_4] [i_4 - 1] [i_4 - 1])) ? (arr_19 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_19 [i_4 - 1] [i_3] [i_3] [i_3] [i_3])))));
                            arr_23 [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) ? ((~((+(9223372036854775807LL))))) : (((/* implicit */long long int) ((/* implicit */int) (short)21500)))));
                            arr_24 [i_1] |= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))));
                        }
                    }
                } 
            } 
        } 
        arr_25 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_3 [i_1])), (arr_9 [i_1] [i_1] [i_1] [i_1])));
    }
    /* LoopNest 2 */
    for (unsigned int i_7 = 1; i_7 < 14; i_7 += 1) 
    {
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            {
                var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) 524287)) < (-4195532628429506678LL))))));
                arr_31 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) * (max((arr_30 [i_7 + 3] [(unsigned char)1]), (((/* implicit */int) ((_Bool) arr_30 [i_7] [i_7])))))));
            }
        } 
    } 
    var_29 = ((/* implicit */short) var_4);
}
