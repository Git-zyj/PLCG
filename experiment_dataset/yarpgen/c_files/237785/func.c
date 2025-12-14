/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237785
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
    var_17 = ((/* implicit */_Bool) var_15);
    var_18 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((((/* implicit */_Bool) (unsigned short)45776)) ? (((/* implicit */int) (unsigned short)45785)) : (((/* implicit */int) (_Bool)0)));
                var_19 = ((/* implicit */unsigned int) ((-8715744098609568633LL) > (((/* implicit */long long int) ((var_4) % (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)-1)))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */int) (+(var_3)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) (unsigned short)46030))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2])) | (((/* implicit */int) var_2))))) : (((long long int) var_8))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (var_16) : (((/* implicit */unsigned int) arr_0 [i_1 + 1]))));
                    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1 + 1]))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 - 1])) ? (arr_12 [i_1 + 1] [i_1 - 1]) : (arr_12 [i_1 - 1] [i_1 + 1])));
                            arr_15 [i_2] [i_1] [i_2] = ((/* implicit */long long int) (_Bool)1);
                        }
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3842769945U)) ? (((((/* implicit */_Bool) var_11)) ? (840832264U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [i_3])))));
                        arr_16 [(_Bool)1] [i_1] [(_Bool)1] [i_3] [i_3] [(_Bool)1] = ((((var_4) + (2147483647))) << (((((((/* implicit */int) var_2)) & (((/* implicit */int) (signed char)109)))) - (72))));
                        arr_17 [i_0] [i_1] [i_0] [i_2] [i_0] [i_3] = ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))));
                        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_10)))) & (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_5 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_3) >> (((((/* implicit */int) arr_19 [i_0] [i_1] [i_1])) - (148))))))));
                        var_25 = ((/* implicit */short) (~(3842769945U)));
                    }
                    for (unsigned int i_6 = 1; i_6 < 17; i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_2] = var_11;
                        arr_26 [i_0] [(short)10] [i_0] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_1] [i_6]))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1 - 1] [i_2] [i_6 + 2])))));
                        arr_27 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)38901))));
                        arr_28 [i_0] [i_1] [i_0] [i_1] = (-(((/* implicit */int) ((_Bool) (signed char)12))));
                        var_26 = ((long long int) -8465114548707047396LL);
                    }
                    var_27 = ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1])));
                }
                var_28 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (var_11))) : (var_11)))));
            }
        } 
    } 
}
