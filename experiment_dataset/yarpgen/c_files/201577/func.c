/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201577
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
    var_17 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) (signed char)-118))))), (((((/* implicit */_Bool) (signed char)118)) ? (var_2) : (var_2))))), (((/* implicit */long long int) min((var_10), (var_13))))));
    var_18 += ((/* implicit */_Bool) var_14);
    var_19 = ((/* implicit */long long int) (+(var_1)));
    var_20 = ((/* implicit */_Bool) (+((-(var_8)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_21 += var_4;
        var_22 = ((/* implicit */unsigned short) (((~(arr_1 [i_0]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */unsigned int) var_8)) : (arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 1; i_2 < 23; i_2 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((var_2) < (((/* implicit */long long int) arr_6 [i_0] [i_2 - 1] [i_2] [4])))))));
                var_24 &= ((/* implicit */unsigned long long int) 4294967279U);
                var_25 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_0] [0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_2] [i_0])))) == (((/* implicit */unsigned long long int) arr_5 [(_Bool)0]))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_26 ^= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 6201163562610694458LL)) ? (((/* implicit */int) (unsigned short)10055)) : (((/* implicit */int) (unsigned short)10055)))));
                    var_27 -= ((/* implicit */signed char) (unsigned char)35);
                    arr_9 [6U] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) 44760673);
                }
            }
            for (long long int i_4 = 1; i_4 < 23; i_4 += 4) /* same iter space */
            {
                var_28 = ((arr_8 [i_0] [i_4 - 1] [i_4 + 1] [i_4 - 1]) ^ (((unsigned int) (signed char)-118)));
                arr_13 [i_0] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0])) + (((((/* implicit */int) (signed char)122)) + (var_8)))));
                var_29 = ((/* implicit */int) (+(arr_0 [i_4 - 1])));
                arr_14 [(unsigned short)21] [i_0] = ((/* implicit */unsigned short) arr_8 [i_1] [i_1] [i_4 - 1] [i_0]);
            }
            for (int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)20]))));
                arr_19 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1962294962518518863LL)) ? (((/* implicit */int) (signed char)2)) : (-145521206)));
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    var_31 -= ((/* implicit */unsigned int) (+(arr_4 [i_0] [i_0])));
                    var_32 ^= ((/* implicit */short) (-(((unsigned int) arr_10 [i_0] [i_1] [i_6]))));
                    var_33 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)86))));
                }
            }
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [0U]))) / (((arr_1 [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [(signed char)1] [i_0] [(short)22] [i_0] [(signed char)1])))))));
        }
    }
}
