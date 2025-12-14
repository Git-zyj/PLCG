/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36112
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)199)) % (((/* implicit */int) arr_4 [(unsigned short)5]))))) || (((/* implicit */_Bool) ((unsigned int) (unsigned char)179))))))));
                    var_21 -= ((/* implicit */unsigned int) (unsigned char)81);
                    var_22 *= ((/* implicit */short) (unsigned char)41);
                    arr_9 [i_0] [(_Bool)1] [i_2] &= ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1] [i_0])))));
                }
            } 
        } 
        var_23 ^= ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)57703)) + (((/* implicit */int) var_10))))));
    }
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-(arr_8 [6ULL]))))));
        var_25 |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_3]))))))) || (((/* implicit */_Bool) (unsigned char)204))));
        var_26 ^= ((/* implicit */unsigned long long int) arr_6 [i_3] [i_3] [i_3]);
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 8; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    {
                        var_27 ^= ((/* implicit */unsigned int) arr_10 [i_3]);
                        var_28 &= ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) max((arr_8 [i_3]), (arr_8 [i_3]))))))), ((~(((((/* implicit */int) (_Bool)1)) >> (((arr_17 [i_6] [6LL] [i_3]) - (4177283474U)))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 1; i_7 < 7; i_7 += 4) 
                        {
                            var_29 += ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) arr_12 [i_3] [i_3] [i_3])) : (3980581621U)))))))));
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (signed char)19))));
                            var_31 &= ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_4 + 1]))))), (((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */unsigned long long int) -554209085)) : (arr_2 [i_3]))))) / (((/* implicit */unsigned long long int) ((arr_5 [i_3] [i_3] [i_7 - 1]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)18198)) ? (((/* implicit */int) (unsigned char)170)) : (arr_8 [(unsigned char)13])))) : (arr_21 [i_4] [i_4] [i_4] [i_4 + 1] [4U]))))));
                            var_32 &= ((/* implicit */unsigned short) (+(((arr_22 [i_7 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7 + 3])))))));
                            var_33 ^= ((/* implicit */long long int) var_12);
                        }
                    }
                } 
            } 
        } 
    }
    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)95)), (((((/* implicit */unsigned long long int) 4294967295U)) % (var_5))))))));
}
