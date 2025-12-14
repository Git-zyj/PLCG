/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51059
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
    var_12 = ((var_1) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */signed char) max(((-((+(((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) arr_3 [2] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [(unsigned char)9] [(signed char)0] [i_2]))));
                    var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) ((signed char) (signed char)76))) : (((((/* implicit */int) (signed char)-77)) % (((/* implicit */int) arr_3 [i_0] [(unsigned short)0]))))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [1ULL])))))) : ((-(((/* implicit */int) ((unsigned char) var_11)))))));
                    arr_8 [i_0] [i_1] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (unsigned char)13)))) >= (((((/* implicit */int) var_2)) - (((/* implicit */int) (signed char)33)))))))) | (max((6445434228727337696ULL), (((/* implicit */unsigned long long int) (signed char)86)))));
                }
                for (unsigned char i_3 = 1; i_3 < 8; i_3 += 1) 
                {
                    var_15 = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
                    var_16 = ((/* implicit */unsigned int) var_6);
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        for (long long int i_5 = 2; i_5 < 8; i_5 += 1) 
                        {
                            {
                                arr_16 [i_5 - 2] [i_5] [(unsigned short)8] [i_0] [9U] [i_0] [(unsigned short)8] = ((/* implicit */unsigned int) var_3);
                                var_17 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_0])) + (((/* implicit */int) var_10))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), (arr_11 [i_0] [i_3] [i_3] [(short)5])))))))));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */int) min((min((((/* implicit */unsigned short) var_4)), (var_9))), (((/* implicit */unsigned short) (signed char)-64))))) * (((/* implicit */int) ((((((((/* implicit */int) (short)-2)) + (2147483647))) >> (((var_1) - (2668881354U))))) <= ((+(((/* implicit */int) var_6)))))))));
                                var_19 |= ((/* implicit */signed char) max(((~(((/* implicit */int) (unsigned char)15)))), ((-(((/* implicit */int) arr_15 [8LL]))))));
                            }
                        } 
                    } 
                }
                for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        arr_23 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_6] [i_7] [i_1] [i_0])))))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (-(4398046511103ULL))))));
                    }
                    arr_24 [i_0] [i_1] [(_Bool)1] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_17 [i_0] [i_1] [i_6] [i_6])), (arr_5 [i_6] [(short)0] [i_0] [i_0])))) ? (var_11) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_6] [i_0] [i_1] [i_0])) && (((/* implicit */_Bool) var_1))))), ((-(((/* implicit */int) (unsigned char)62)))))))));
                    arr_25 [i_0] = ((/* implicit */short) (_Bool)0);
                }
                /* LoopSeq 2 */
                for (unsigned int i_8 = 3; i_8 < 9; i_8 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-59)) ? (509764781) : (((/* implicit */int) (_Bool)0)))) - ((~((-2147483647 - 1))))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_11 [(short)8] [(short)8] [i_1] [5U])) != ((((_Bool)1) ? (((/* implicit */int) arr_21 [i_8] [(short)2] [i_1] [i_1] [(short)2] [i_0])) : (((/* implicit */int) var_8))))))))))));
                    var_23 |= ((/* implicit */_Bool) (unsigned short)65514);
                    var_24 ^= ((/* implicit */short) ((((long long int) var_3)) > (((/* implicit */long long int) (+((+(((/* implicit */int) arr_17 [i_0] [i_0] [i_8] [i_8])))))))));
                }
                for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), ((-(((17LL) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_18 [(_Bool)1]))))))))))));
                        arr_32 [i_0] [i_0] [i_9] [(unsigned char)2] = ((/* implicit */unsigned long long int) ((signed char) ((((-658423628) + (((/* implicit */int) (signed char)-74)))) < (((/* implicit */int) (unsigned char)1)))));
                    }
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        for (long long int i_12 = 1; i_12 < 9; i_12 += 3) 
                        {
                            {
                                arr_38 [(signed char)8] [(unsigned char)4] |= ((/* implicit */unsigned char) var_1);
                                arr_39 [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((((-(((/* implicit */int) arr_35 [i_12 + 1] [i_1] [i_9] [i_11] [i_1])))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) arr_35 [i_12 - 1] [i_1] [i_9] [i_11] [i_12])) >= (((/* implicit */int) arr_35 [i_12 + 1] [i_1] [i_12] [(short)8] [i_12 - 1]))))) - (1)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
