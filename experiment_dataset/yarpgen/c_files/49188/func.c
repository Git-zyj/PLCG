/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49188
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) var_8)))) : (min((((((/* implicit */_Bool) var_16)) ? (var_2) : (var_4))), (((/* implicit */int) var_18))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_0] = arr_1 [i_0];
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] |= ((/* implicit */short) ((((((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1] [i_2 - 1])) < (((/* implicit */int) arr_9 [i_2] [i_2] [i_2 + 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) ((short) arr_1 [i_0]))) : (((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [(unsigned short)11] [i_2] [10LL] [i_2])) << (((((/* implicit */int) arr_6 [i_2])) - (19231)))))))) : (min((arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 1]), (arr_8 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2 + 1])))));
                                arr_14 [i_3] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [i_0] [i_2 + 1] [i_2 + 1] [i_0] [i_4])) ? (arr_8 [i_0] [i_2 + 2] [i_0] [i_3] [i_4]) : (arr_8 [i_1] [i_2 - 1] [i_1] [i_3] [4]))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_2 + 1])) > (((/* implicit */int) arr_0 [i_2 - 1]))))))));
                                var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((var_10) + (2147483647))) << (((((var_2) + (1554324683))) - (24)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (arr_8 [17U] [i_2] [i_3] [i_4] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned int i_5 = 3; i_5 < 17; i_5 += 2) 
                {
                    arr_18 [i_0] [i_0] [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (unsigned short)22375))))), ((~(((/* implicit */int) var_14))))))) ? ((~(((((/* implicit */int) (short)22592)) ^ (((/* implicit */int) (unsigned char)208)))))) : ((~(((((/* implicit */int) var_18)) % (((/* implicit */int) arr_5 [i_0] [i_1] [(short)14]))))))));
                    var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((signed char) var_10))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_7)))), (((/* implicit */int) arr_15 [i_0] [i_1] [i_5] [i_0]))));
                    arr_19 [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-22578)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_12))))) : (((((/* implicit */long long int) arr_16 [i_0] [i_5 + 3] [i_5])) / (arr_8 [i_0] [i_0] [i_5 - 1] [i_0] [i_0])))));
                }
                for (int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-22592)))))));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) var_17))))))));
                    arr_22 [i_0] [i_0] = ((/* implicit */long long int) min((min((arr_17 [i_0] [i_1] [i_6]), (arr_17 [i_0] [i_0] [i_0]))), (min((((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_0])), (arr_17 [i_0] [i_1] [i_6])))));
                    arr_23 [i_1] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) arr_0 [i_0])))) / (min((-1093865903), (((/* implicit */int) var_3))))));
                    var_24 *= ((/* implicit */unsigned long long int) (~(arr_1 [1])));
                }
                for (int i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        for (signed char i_9 = 1; i_9 < 19; i_9 += 2) 
                        {
                            {
                                var_25 += ((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_2)) ? (arr_10 [i_0] [3U] [i_8] [i_9 + 1]) : (((/* implicit */unsigned int) var_2)))))) < (((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1)))))))));
                                arr_32 [i_9] [2] [i_7] [i_1] [(unsigned short)8] = ((/* implicit */short) (~(((/* implicit */int) ((short) (short)-22620)))));
                                var_26 -= ((/* implicit */short) (~(((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (short)-7615)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_7]))))) || (((/* implicit */_Bool) ((signed char) min((-2756596793620888776LL), (((/* implicit */long long int) -1093865886)))))))))));
                    var_28 *= ((/* implicit */short) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)171)) && (((/* implicit */_Bool) var_11))))), (((unsigned char) arr_10 [(short)2] [i_1] [i_1] [i_0]))));
                }
                for (int i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) (((_Bool)1) ? (min((-343366400), (((/* implicit */int) arr_33 [i_0] [i_0] [i_10])))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-87)), (arr_11 [i_10] [(_Bool)1] [i_10] [i_0] [(_Bool)1] [i_1] [i_0]))))))) : (var_1))))));
                    arr_35 [i_10] [i_0] [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) min((arr_27 [i_0] [i_1] [i_10] [i_10]), (-683413516)))), (((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0])) ? (79187935U) : (arr_26 [i_0] [i_0] [i_10]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_10] [(unsigned char)4] [i_1] [i_10] [i_0])) ^ ((~(var_2))))))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 18; i_12 += 2) 
                        {
                            {
                                arr_40 [i_0] [i_1] [1U] [i_10] [i_11] [i_12] [i_12] = ((/* implicit */short) min((((/* implicit */unsigned int) (~(arr_29 [i_0] [(short)16] [i_0] [i_0])))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) && ((_Bool)1)))), (var_16)))));
                                var_30 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (arr_27 [i_0] [i_1] [18LL] [i_1])))) >= (((/* implicit */int) var_0)))) && (((/* implicit */_Bool) min((arr_26 [i_12 - 1] [i_12] [i_12]), (((/* implicit */unsigned int) arr_12 [i_12 + 1] [i_12 + 1] [(signed char)7] [i_12] [i_12 + 1])))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (short)-4667)) ? (min((((/* implicit */int) (short)25216)), (21))) : (((/* implicit */int) (unsigned char)255)))));
                }
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned int) var_9);
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_5))));
    var_34 *= var_15;
}
