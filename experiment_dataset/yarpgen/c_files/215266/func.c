/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215266
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))))));
    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24888))) ^ (3044722U)))) ? (4294967295U) : (4291922582U))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (var_4))) + (((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_2 [i_0]))))));
        var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)2047)) * (((/* implicit */int) (short)32752))))), (arr_0 [i_0])));
    }
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 3; i_2 < 14; i_2 += 1) 
        {
            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)50985)) ? (((/* implicit */int) (unsigned short)39440)) : (((/* implicit */int) (signed char)-116)))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 1) /* same iter space */
            {
                arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (short)-32754)) ? (((/* implicit */int) max(((unsigned short)26066), (var_5)))) : (((/* implicit */int) (unsigned short)14523))))));
                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))))));
                arr_14 [i_1] [i_3] = ((/* implicit */unsigned int) arr_11 [i_1] [i_3] [i_2] [i_1]);
            }
            for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 1) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_2] [i_4 - 3]))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 14; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) var_1);
                            var_16 = ((((/* implicit */_Bool) 3044738U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))) : (4291922569U));
                            var_17 = var_1;
                            arr_24 [(unsigned short)0] [i_5] [i_5] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)27205))))) ? (min((arr_19 [i_5 + 1] [i_4 - 3] [(short)7] [i_2 - 1] [i_2] [i_2]), (arr_19 [i_5 + 1] [i_4 - 3] [i_4] [i_2 - 1] [i_1] [i_1]))) : ((-(arr_19 [i_5 + 1] [i_4 - 3] [i_2] [i_2 - 1] [i_2 + 2] [i_2])))));
                        }
                    } 
                } 
                arr_25 [i_1] [i_2 + 1] = ((/* implicit */unsigned short) arr_18 [(unsigned char)6] [i_2] [i_4 - 1]);
            }
        }
        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            var_18 *= ((/* implicit */unsigned char) arr_21 [i_1] [(unsigned short)0] [i_7] [i_7] [i_7] [i_7] [i_7]);
            var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_10 [i_1] [i_1] [i_7] [i_7])), ((+(arr_22 [i_1] [i_7] [i_1] [i_1] [i_1] [i_1] [i_1])))));
            var_20 = ((/* implicit */unsigned short) (-((-(((int) arr_15 [i_7] [i_7] [i_1]))))));
        }
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)63488)))))));
    }
    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        arr_33 [i_8] &= ((/* implicit */_Bool) arr_29 [i_8]);
        var_22 += ((/* implicit */unsigned long long int) 2147483647);
    }
}
