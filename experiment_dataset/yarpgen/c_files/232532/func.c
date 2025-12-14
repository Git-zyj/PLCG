/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232532
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
    var_12 ^= ((/* implicit */unsigned short) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (var_2))), (((/* implicit */unsigned long long int) ((1157078032U) > (((/* implicit */unsigned int) var_10))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) var_1)), (var_8)))) && (((/* implicit */_Bool) var_5))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_13 ^= var_5;
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) ((arr_8 [i_1 + 2] [i_0] [i_2] [i_3] [i_1]) / (((/* implicit */unsigned int) arr_6 [i_0] [i_1 - 2] [i_1 - 2]))))) == (((((/* implicit */long long int) arr_6 [0LL] [i_2] [2U])) / (var_11))))))));
                        arr_9 [i_0] [i_1 - 1] [i_2] [i_3] |= ((/* implicit */int) max((max((max((arr_8 [i_3 - 1] [3LL] [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) arr_3 [i_2])))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) & (-868973951)))))), (((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_5 [i_0])))), (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)65535)))))))));
                        var_15 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)65525)) == (((/* implicit */int) (unsigned short)65531))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (~((-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1 - 2] [i_0])) >= (((/* implicit */int) (unsigned short)16))))))))))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)50534))))) - (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((arr_7 [i_4] [i_4] [i_4] [(_Bool)1]), (((/* implicit */unsigned short) arr_3 [i_0])))), (((/* implicit */unsigned short) var_7)))))) : ((~(max((var_3), (((/* implicit */unsigned long long int) (unsigned short)65535))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                            var_19 = ((/* implicit */signed char) min((max((((/* implicit */int) (signed char)-68)), (((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned short)4)))))), ((-((-(arr_11 [i_1] [i_2 + 2] [i_4] [i_5])))))));
                            arr_14 [i_0] [i_5] [(_Bool)1] [i_5] = ((/* implicit */unsigned int) (unsigned short)65531);
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_4] [i_4] [i_0] [7LL] = ((/* implicit */unsigned int) (~(var_2)));
                            var_20 = ((/* implicit */_Bool) (short)7964);
                            var_21 *= ((/* implicit */short) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_2 - 1] [i_4])) <= (((/* implicit */int) var_8))));
                        }
                    }
                    var_22 = ((/* implicit */unsigned int) (unsigned short)65505);
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */short) max((min((min((((/* implicit */unsigned long long int) var_4)), (var_6))), (var_2))), (((/* implicit */unsigned long long int) var_10))));
    var_24 = ((/* implicit */short) var_1);
}
