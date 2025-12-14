/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41020
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
    var_12 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_13 &= ((/* implicit */short) (((-(arr_5 [i_0] [i_1]))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)31)) | (((/* implicit */int) (short)-21999)))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(arr_3 [i_2 - 1])))) : (((/* implicit */int) arr_6 [(_Bool)1] [i_2] [i_2]))));
                        var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((arr_0 [i_0 + 1]), (((/* implicit */unsigned long long int) arr_3 [i_0]))))) ? (((arr_5 [i_0] [8LL]) + (((/* implicit */unsigned long long int) arr_9 [i_0 - 2] [(unsigned short)7] [(unsigned char)5] [i_0] [i_0] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1825579594445902899LL))))))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 3; i_4 < 6; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_4 + 2] [i_4 - 3] [1LL] [(_Bool)1]))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(short)7])))))))));
                            arr_12 [8] [i_2] [i_2] = ((/* implicit */_Bool) arr_5 [i_0] [i_1]);
                            var_17 = ((/* implicit */signed char) (((-(arr_10 [(_Bool)1] [i_0 - 2] [(_Bool)1] [7LL] [i_4]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0 + 1] [i_2]))))))));
                            var_18 |= max((((((/* implicit */_Bool) (-(((/* implicit */int) (short)19569))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [(short)5])) <= (((/* implicit */int) (_Bool)0))))) : ((-(((/* implicit */int) (short)6281)))))), (((/* implicit */int) arr_6 [i_0] [i_1] [i_2 + 1])));
                            var_19 = ((/* implicit */unsigned char) ((_Bool) ((arr_7 [i_0] [i_2] [i_2 + 1] [i_4 - 2]) % (arr_7 [i_0] [i_2] [i_2 - 1] [i_4 - 2]))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        arr_17 [i_5] [i_5] = max((((/* implicit */int) (short)19569)), ((-(((/* implicit */int) arr_13 [i_5] [8])))));
        var_21 ^= ((/* implicit */_Bool) var_1);
    }
}
