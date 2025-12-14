/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231048
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
    var_19 = ((/* implicit */signed char) var_18);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) min((-2010860183), (((((/* implicit */_Bool) ((int) arr_1 [i_0] [i_0]))) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_0])) : (((/* implicit */int) var_7))))));
        var_21 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)49152)) ^ (arr_1 [i_0] [(unsigned char)6])))), (((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) - (var_16))))), (((/* implicit */unsigned long long int) arr_0 [9U] [i_0]))));
        var_22 += ((/* implicit */unsigned long long int) arr_0 [4ULL] [i_0]);
        arr_2 [(signed char)7] = ((/* implicit */int) min((arr_0 [i_0] [i_0 - 1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 2])))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_23 -= ((/* implicit */unsigned short) arr_0 [(unsigned short)2] [i_1]);
            var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) max((max((var_4), (((/* implicit */signed char) arr_3 [i_0])))), (((/* implicit */signed char) min((var_17), ((_Bool)1))))))), (min((((/* implicit */unsigned short) var_13)), (((unsigned short) var_18))))));
        }
    }
    for (signed char i_2 = 1; i_2 < 10; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 3) 
            {
                {
                    var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2 - 1])) : (min((67108863), (67108856)))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (long long int i_6 = 4; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_26 += ((/* implicit */unsigned char) arr_18 [8ULL] [i_3] [i_4] [(_Bool)1] [i_6]);
                                var_27 = ((/* implicit */signed char) ((min((((/* implicit */long long int) min((((/* implicit */short) (unsigned char)120)), (arr_11 [(short)1] [(_Bool)1] [i_2])))), (((((/* implicit */_Bool) (unsigned char)138)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))))) - (((/* implicit */long long int) ((((((/* implicit */int) arr_4 [(signed char)11] [i_5])) + (((/* implicit */int) var_8)))) ^ (((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = (~(((/* implicit */int) var_9)));
        var_29 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_11 [i_2] [i_2 + 2] [i_2]))));
    }
    var_30 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) <= (((min((var_16), (((/* implicit */unsigned long long int) var_6)))) >> (((((((/* implicit */_Bool) 4294967295ULL)) ? (67108869) : (var_12))) - (67108820))))));
    var_31 = ((/* implicit */long long int) max((min((((/* implicit */int) (unsigned char)251)), (((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) (unsigned char)92)) : (-67108864))))), (((/* implicit */int) (unsigned short)8190))));
    var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)12288))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
}
