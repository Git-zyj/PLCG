/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46776
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_13)) : ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)35766)) : (((/* implicit */int) (_Bool)1)))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_1] [i_1 + 2] [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0] [i_0]);
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (_Bool)1))));
                        }
                        for (int i_5 = 1; i_5 < 22; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_2 + 1] [i_3])) ? ((-(((/* implicit */int) var_17)))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [(signed char)3]))) : (-1748307765077670373LL)))))));
                            var_22 ^= ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))) > ((+((+(((/* implicit */int) var_6)))))));
                            var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [i_1 + 2] [i_2 + 1] [i_3] [i_2 + 1])) : (((/* implicit */int) var_16))))) ? ((-(((/* implicit */int) (unsigned char)24)))) : (((/* implicit */int) (_Bool)1))))));
                        }
                        arr_16 [i_0] [i_0 - 1] [i_1] [(_Bool)1] [i_2] [(_Bool)1] = (_Bool)1;
                        var_24 += ((/* implicit */_Bool) arr_1 [i_0] [i_2 - 3]);
                    }
                } 
            } 
        } 
        arr_17 [i_0] = ((/* implicit */long long int) var_5);
        arr_18 [7U] |= ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned char)4)), (4264286611117980241LL)));
        var_25 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_5 [i_0])))));
    }
    for (signed char i_6 = 1; i_6 < 23; i_6 += 2) 
    {
        var_26 = ((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (signed char)60)) - (((/* implicit */int) arr_19 [i_6 + 2]))))))));
        /* LoopNest 2 */
        for (signed char i_7 = 3; i_7 < 22; i_7 += 2) 
        {
            for (signed char i_8 = 2; i_8 < 22; i_8 += 3) 
            {
                {
                    var_27 = ((/* implicit */signed char) min((((/* implicit */unsigned short) arr_25 [i_6] [i_6] [i_7 + 1] [i_6])), (min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0))))), (((unsigned short) var_11))))));
                    var_28 = ((/* implicit */signed char) var_10);
                }
            } 
        } 
        var_29 = ((/* implicit */_Bool) arr_21 [(_Bool)1] [i_6] [i_6]);
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((((var_7) ? (((/* implicit */int) arr_2 [i_9] [i_9] [(signed char)9])) : (((/* implicit */int) arr_24 [i_9] [i_9] [i_9])))) - (1251)))))) ? (max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)71)), (var_1)))), (((2288753388U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)127)))))));
        arr_30 [i_9] [i_9] = ((/* implicit */signed char) min((max((arr_20 [i_9]), (((/* implicit */long long int) (unsigned char)164)))), (((/* implicit */long long int) arr_27 [i_9]))));
        arr_31 [(_Bool)1] [i_9] = ((/* implicit */signed char) (+(max((((((((/* implicit */int) (signed char)-64)) + (2147483647))) << (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (_Bool)1))))));
    }
    var_31 &= ((/* implicit */long long int) var_17);
}
