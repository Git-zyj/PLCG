/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212491
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
    var_10 = ((/* implicit */long long int) var_8);
    var_11 |= ((/* implicit */unsigned short) (~((-(((/* implicit */int) max((var_0), (((/* implicit */short) var_6)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 9; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65524)) ? (18446744073709551615ULL) : (12555559956637169782ULL))))))), (((long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) 562569882U)) : (-7411797551922470519LL))))));
        var_12 = ((/* implicit */unsigned short) max((((unsigned long long int) arr_2 [i_0 - 2])), (((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) arr_2 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)1)) >= (((/* implicit */int) (unsigned short)65528)))) || (((/* implicit */_Bool) arr_2 [i_0 - 1]))));
    }
    for (short i_1 = 3; i_1 < 9; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */long long int) var_3);
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_2 [i_1 - 1]))))), (arr_0 [i_1] [i_1])))) <= ((((((~(((/* implicit */int) arr_7 [i_1])))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_6 [i_1]))))) - (1)))))));
    }
    for (short i_2 = 3; i_2 < 9; i_2 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (((/* implicit */int) (short)-14564)) : (((/* implicit */int) arr_6 [(short)6])))) != ((-(((/* implicit */int) arr_12 [i_2 - 3] [i_2 - 3])))))))) ^ (max((((/* implicit */unsigned int) arr_9 [i_2 - 1])), (arr_1 [9ULL] [i_2])))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_5))) ? (arr_10 [(signed char)0]) : (((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned char)236)))) ^ (((/* implicit */int) ((short) 2750811433888009526LL)))))))))));
    }
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                {
                    arr_20 [i_3] [i_3] [i_3] [i_5] = ((/* implicit */long long int) var_2);
                    var_16 -= ((/* implicit */signed char) arr_16 [i_3]);
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_9))));
                }
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                {
                    var_18 = (~((~((~(((/* implicit */int) var_6)))))));
                    var_19 = ((/* implicit */int) max((var_19), ((+(((((/* implicit */_Bool) arr_19 [i_3] [i_4] [(signed char)14] [i_6])) ? (var_4) : (((/* implicit */int) arr_19 [i_4] [i_6] [(short)18] [i_3]))))))));
                    var_20 |= ((/* implicit */signed char) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_4]))))), (((unsigned int) ((((/* implicit */int) arr_19 [i_3] [i_3] [10] [(unsigned short)6])) % (((/* implicit */int) arr_23 [(signed char)16] [i_4] [i_6])))))));
                }
                arr_24 [i_3] [(unsigned short)0] [i_4] = ((/* implicit */long long int) max((((((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) : (562569852U))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_4] [(unsigned short)18] [(unsigned short)18]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_3] [(short)16] [4ULL] [i_3])))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    for (int i_8 = 1; i_8 < 16; i_8 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(((unsigned int) arr_23 [(signed char)19] [i_4] [i_3])))))));
                            arr_30 [i_8] [(short)9] [i_3] [i_3] = ((/* implicit */unsigned short) var_3);
                            arr_31 [(signed char)14] [i_3] [i_3] [i_7] [i_8 + 3] = ((/* implicit */unsigned long long int) var_0);
                        }
                    } 
                } 
                arr_32 [(unsigned short)11] [(unsigned short)11] = var_8;
                var_22 += arr_19 [i_3] [i_3] [(signed char)6] [10LL];
            }
        } 
    } 
}
