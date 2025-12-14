/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30169
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
    for (unsigned int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (((long long int) arr_1 [i_0]))))) ? (((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0 - 4]))))) & (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-55)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105)))))) ? (arr_2 [i_0] [i_0]) : (((arr_0 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2621584846464089458LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)26)))) : ((~(arr_0 [i_0 - 4])))))) ? (((arr_2 [i_0] [i_0 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34434))) & (1235357731U)))));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_13))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((11688201080845333768ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */int) ((arr_2 [i_2 - 1] [i_4 - 2]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31101)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) > (((unsigned long long int) var_8)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 2; i_5 < 22; i_5 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_8)) : (4028383928U)));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1])) ? (((/* implicit */int) (signed char)2)) : ((~(((/* implicit */int) (signed char)54))))));
                            var_22 = ((/* implicit */unsigned char) (unsigned short)65535);
                        }
                        arr_17 [i_1] [i_0] [i_2] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_11 [i_0 - 3] [i_1 - 2] [i_2 - 1])))) & (((((/* implicit */_Bool) (signed char)96)) ? (arr_11 [i_1 - 2] [i_2 - 1] [i_3]) : (arr_11 [i_0] [i_0] [i_0 - 3])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 1) 
                        {
                            arr_20 [i_1] [(_Bool)1] [i_1] = ((/* implicit */long long int) arr_8 [i_0 + 1] [i_1] [i_1]);
                            var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8192))) : (var_4))) >= (((/* implicit */long long int) ((arr_7 [i_6 + 1] [i_1 - 1] [i_2 + 1] [i_2 + 1]) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) arr_3 [i_0] [i_1])))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) var_14))))) ? (((((/* implicit */_Bool) max((8435463908022081228LL), (((/* implicit */long long int) var_9))))) ? ((~(((/* implicit */int) var_15)))) : (((/* implicit */int) (short)62)))) : (var_8)));
}
