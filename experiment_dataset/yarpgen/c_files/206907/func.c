/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206907
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) var_3);
        var_15 = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) (signed char)121)))));
        var_16 = ((/* implicit */signed char) (~(arr_0 [i_0])));
        var_17 |= ((/* implicit */int) ((arr_0 [2]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)-83)))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        for (signed char i_2 = 2; i_2 < 22; i_2 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_3 = 3; i_3 < 21; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 21; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)81))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_1] [i_2] [19] [(_Bool)1] [i_1] [i_2] [(signed char)11])) ? (((/* implicit */int) arr_6 [i_2] [i_1])) : (((/* implicit */int) arr_6 [i_2] [(unsigned char)7]))))) : (arr_14 [i_1] [i_2] [i_3] [0ULL] [i_2])));
                                var_19 = ((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_2 - 1]))));
                                var_20 = ((/* implicit */int) (unsigned char)35);
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)106)) % (((((/* implicit */int) var_11)) / (((/* implicit */int) arr_7 [i_2]))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) (_Bool)1);
                    var_23 = ((/* implicit */unsigned char) ((arr_9 [18LL] [i_2] [i_2] [18LL]) * (arr_9 [i_2 - 1] [i_2] [i_3 - 1] [i_2])));
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    arr_19 [i_2] = ((/* implicit */unsigned short) ((arr_5 [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2 - 1])))));
                    var_24 = ((/* implicit */short) (~(-2304766217375944951LL)));
                }
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_25 &= ((/* implicit */int) (signed char)124);
                            arr_27 [i_1] [i_2] [i_1] = ((/* implicit */short) (~((~((~(((/* implicit */int) arr_25 [i_1] [i_2] [i_2] [i_1]))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2 - 1]))) : (((((/* implicit */_Bool) arr_22 [i_2 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2 - 1]))) : (arr_3 [i_2 + 1] [i_2 - 1]))))))));
                var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [22ULL] [22ULL] [i_2]))))) : (((/* implicit */int) (unsigned char)7))));
                var_28 = ((((((/* implicit */_Bool) (short)32752)) ? (((/* implicit */int) arr_17 [i_1] [i_2 - 2] [i_2 - 2] [i_1])) : (((/* implicit */int) arr_17 [i_1] [i_2 - 1] [i_2] [i_1])))) > ((+(((/* implicit */int) arr_17 [i_1] [i_2 + 1] [i_2 + 1] [i_2])))));
            }
        } 
    } 
    var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) (~(max((((/* implicit */long long int) var_6)), (3451050958976648056LL)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (_Bool)0))))) == (-1235808246))))))));
}
