/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217008
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)58113)) ? (295810898) : (((/* implicit */int) (_Bool)1))))), ((((((_Bool)1) || (((/* implicit */_Bool) arr_0 [(signed char)7])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((-8672948916348864789LL), (((/* implicit */long long int) (_Bool)1)))))))))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_1])) ? (((((((/* implicit */_Bool) arr_7 [(short)3] [(_Bool)1] [i_2])) || (((/* implicit */_Bool) arr_7 [15LL] [15LL] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_0] [i_0] [i_0]), ((_Bool)1))))) : ((~(arr_7 [i_0] [(unsigned char)13] [i_2]))))) : (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)204))) + (-8672948916348864789LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1] [i_1])) <= (((/* implicit */int) arr_1 [(unsigned short)21] [(unsigned short)21]))))))))))));
                }
            } 
        } 
    } 
    var_19 = (~(max(((+(var_9))), (((/* implicit */long long int) var_5)))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)204)) / (((/* implicit */int) (unsigned short)64833))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1428480444U)) ? (9223372036854775790LL) : (8672948916348864806LL)));
        var_21 = ((/* implicit */int) arr_0 [i_3]);
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_3]))) >= (8672948916348864806LL)))) == ((~(((/* implicit */int) var_13)))))))) - ((~(arr_10 [(_Bool)1] [i_3])))));
        /* LoopNest 3 */
        for (unsigned char i_4 = 3; i_4 < 13; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    {
                        arr_20 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52470))) <= (6U))))) * (arr_9 [i_6])));
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            arr_23 [i_3] [(_Bool)1] [i_3] [i_5] [(unsigned char)6] [(_Bool)1] [i_7] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) max((var_13), (((/* implicit */short) arr_19 [i_5] [i_5] [i_5] [i_5]))))) == (((/* implicit */int) arr_11 [i_3]))))) >> (((((/* implicit */int) min((var_2), ((short)1876)))) + (26732)))));
                            var_23 = ((/* implicit */signed char) min((((((/* implicit */int) (_Bool)1)) * (((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */int) arr_1 [i_4 + 2] [(unsigned char)5])) : (((/* implicit */int) arr_14 [i_7] [i_6] [(unsigned char)12])))))), (max((((((/* implicit */int) arr_8 [i_7])) << (((var_9) + (5295461587480594215LL))))), (((/* implicit */int) arr_11 [i_3]))))));
                            var_24 = ((/* implicit */unsigned char) (~((+(max((((/* implicit */long long int) arr_18 [i_7] [i_6] [i_4] [i_3])), (var_0)))))));
                        }
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) max((var_25), ((unsigned short)58115)));
                            var_26 = ((/* implicit */_Bool) (+((+(((arr_21 [i_3] [i_4 - 3] [i_4 - 3] [i_4 - 3] [i_8]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)121)))))))));
                        }
                    }
                } 
            } 
        } 
    }
}
