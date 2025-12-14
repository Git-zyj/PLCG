/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232504
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
    var_14 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_8)) ? (((int) var_3)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)16979)) != (((/* implicit */int) (unsigned short)44237)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) arr_2 [i_0 + 1]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 7; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] [i_2 - 1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((4223082492U), (((/* implicit */unsigned int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_8 [i_0] [i_2 + 4] [i_2] [i_0 - 1])) : ((-(((/* implicit */int) var_7))))))), (((unsigned long long int) var_6))));
                    var_16 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)44237))))), (((((/* implicit */_Bool) 1048575U)) ? (((/* implicit */long long int) var_1)) : (var_12)))))));
                    arr_10 [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (-(((/* implicit */int) arr_1 [i_0])))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) var_5))))) << (((((((/* implicit */_Bool) var_2)) ? (var_11) : (var_3))) - (8641515741944823623ULL))))) : ((~((+(((/* implicit */int) arr_8 [(unsigned char)8] [(unsigned char)8] [i_2] [i_2]))))))));
                    var_17 |= ((/* implicit */unsigned char) ((((unsigned long long int) ((signed char) arr_7 [i_0 - 1] [i_1] [i_2 + 2]))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [0] [(unsigned char)6])))))));
                    arr_11 [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) | (arr_7 [i_0 - 2] [i_0] [i_0 - 2])))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            arr_14 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) arr_13 [i_3] [i_3])) : (arr_6 [9ULL])))) ? (1073741823U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_3])))))) || (((/* implicit */_Bool) var_4))));
            var_18 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((((/* implicit */short) var_0)), ((short)2047)))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) max((arr_6 [i_0]), (((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) 8191)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (134217727LL)))));
        }
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 + 1] [i_4] [(signed char)6])))))) ? (((/* implicit */int) (unsigned short)52574)) : (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_4])) ? (((/* implicit */int) arr_8 [i_5] [i_0] [4U] [i_0])) : (arr_6 [i_0 - 2]))) : (((((/* implicit */int) (signed char)3)) % (((/* implicit */int) arr_15 [i_5] [3LL] [i_5])))))))))));
                arr_21 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)44237))));
                var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [1LL])) ? (max(((-(((/* implicit */int) arr_1 [i_5])))), (((/* implicit */int) max((((/* implicit */short) var_9)), ((short)31999)))))) : (((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((15919966755678593731ULL) >= (((/* implicit */unsigned long long int) arr_6 [i_0])))))))));
                arr_22 [i_5] [(short)2] [i_5] = ((/* implicit */long long int) ((((((((/* implicit */int) arr_4 [1U])) + (2147483647))) << (((((/* implicit */int) arr_17 [i_4] [i_0 - 1])) - (214))))) + (((((/* implicit */int) arr_4 [(signed char)6])) % (((/* implicit */int) var_4))))));
            }
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 8191)) ? (min((var_8), (((/* implicit */long long int) max((-524211537), (((/* implicit */int) var_10))))))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 3; i_6 < 7; i_6 += 1) 
            {
                for (short i_7 = 2; i_7 < 10; i_7 += 1) 
                {
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (-(15919966755678593731ULL)))) ? (var_3) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_5 [i_0] [i_6] [i_4] [i_0])), ((-(((/* implicit */int) var_0)))))))));
                        arr_29 [i_0] [i_4] [i_0] [i_7] [i_7] [i_7 - 2] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)54))) >= (var_8))));
                    }
                } 
            } 
        }
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max(((-(arr_24 [i_0 + 1]))), ((-(var_13))))))));
        /* LoopSeq 3 */
        for (short i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 - 1] [i_8]))) - (var_1)))) ? (((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_17 [i_0 - 2] [i_0])) : (((/* implicit */int) arr_17 [i_0 - 2] [i_8])))) : (((/* implicit */int) arr_17 [i_0 - 1] [(short)9]))));
            var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_28 [i_0] [(unsigned short)8] [i_0] [i_0] [6LL] [i_8]))))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_5)))))));
        }
        for (int i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_9)))), (((((/* implicit */_Bool) arr_28 [(short)6] [i_9] [i_0] [i_0] [i_9] [i_0])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) arr_34 [i_9] [6U]))))))) ? (max((((/* implicit */unsigned long long int) arr_27 [i_0] [i_9] [(short)10] [i_0 - 2] [i_0])), (arr_24 [i_0 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_23 [i_9] [i_9] [i_0])) : (arr_2 [i_0]))))))));
            var_27 = ((/* implicit */long long int) (short)1984);
            arr_36 [i_0] [(short)10] [i_9] = max((((/* implicit */unsigned long long int) arr_35 [i_9])), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52574))) * (arr_7 [i_0] [i_9] [i_9]))), (((/* implicit */unsigned long long int) arr_0 [i_0])))));
        }
        for (int i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
        {
            var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(_Bool)1] [(_Bool)1])))))))) ? (((/* implicit */int) arr_35 [(unsigned char)10])) : (((/* implicit */int) arr_33 [4ULL]))));
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((min((min((arr_7 [(unsigned char)0] [(short)10] [(short)10]), (((/* implicit */unsigned long long int) (unsigned char)192)))), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)54))))) > (((/* implicit */unsigned long long int) max((arr_20 [i_0] [i_0]), (arr_20 [i_0 - 1] [i_10])))))))));
        }
    }
    var_30 = ((/* implicit */_Bool) ((13303957032975705611ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
}
