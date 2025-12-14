/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190251
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
    var_17 = ((/* implicit */short) var_6);
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)60)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1])))))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (var_10)));
        }
        var_21 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        arr_6 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_3)) ? (556349150U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 182856348))))))));
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)40)) ? (arr_9 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
        }
    }
    for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((min((((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) var_13))))))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)52))))))))))));
        /* LoopSeq 1 */
        for (signed char i_4 = 3; i_4 < 15; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    var_24 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((3738618155U) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)0))))))))));
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) max((((((/* implicit */int) (signed char)122)) * (((/* implicit */int) arr_16 [i_4 - 3] [i_3] [i_3 + 2])))), (((/* implicit */int) (unsigned short)23539)))))));
                }
                for (unsigned char i_7 = 1; i_7 < 14; i_7 += 4) 
                {
                    arr_23 [i_3] [i_5] [i_3] [i_3] = ((/* implicit */int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (var_14)))) ? (33550336U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7 + 1] [i_5] [i_4 + 1] [i_3]))))), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)108)) ? (-828557093) : (((/* implicit */int) (signed char)-36)))))))));
                    arr_24 [(unsigned char)2] [i_4] [i_5] [i_7] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)20)) ? (264869799031902929ULL) : (((/* implicit */unsigned long long int) ((133955584) + (((/* implicit */int) arr_21 [i_7 + 1] [i_7 + 1])))))));
                    var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_7)))) ? (min((arr_20 [i_3] [i_3 - 4] [i_4 + 2] [i_4 - 3] [i_5] [i_4 - 3]), (((/* implicit */unsigned long long int) (signed char)0)))) : (((((/* implicit */_Bool) var_12)) ? (arr_20 [i_3] [i_3 - 2] [i_4] [i_5] [i_5] [i_7]) : (arr_20 [i_3] [i_3] [i_3 - 3] [i_3] [i_3] [i_3 + 1])))));
                }
                arr_25 [i_3 - 3] [i_3] [i_5] [i_3] = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) var_11)))), (((/* implicit */int) arr_17 [i_3] [i_3] [i_3]))))));
            }
            var_27 *= ((/* implicit */int) (((+(0ULL))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))) + (arr_18 [12ULL] [12ULL] [i_4 + 2] [i_4])))));
            var_28 = ((/* implicit */int) arr_14 [i_3]);
        }
        arr_26 [i_3] = ((/* implicit */signed char) (((-(((/* implicit */int) var_2)))) >= (((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) arr_14 [i_3])) : (((/* implicit */int) arr_14 [i_3]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 4; i_8 < 14; i_8 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [(signed char)16] [i_8 - 4] [i_8 - 3] [i_8 - 3])) ? (arr_18 [(unsigned short)16] [i_8 - 2] [(unsigned short)16] [i_8 - 2]) : (arr_20 [i_8] [i_8 - 2] [i_8] [i_8 - 3] [i_8 - 2] [i_8]))))));
        arr_30 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)36)) & (((/* implicit */int) arr_15 [i_8] [i_8 + 2] [i_8 + 2]))))) ? (((/* implicit */unsigned long long int) var_6)) : (arr_18 [i_8] [i_8 - 4] [i_8] [i_8 + 3])));
    }
    for (unsigned long long int i_9 = 4; i_9 < 14; i_9 += 3) /* same iter space */
    {
        arr_35 [i_9] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) (unsigned char)15)) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) (signed char)64)))))), (((/* implicit */int) ((unsigned short) 17040687108592545378ULL)))));
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((int) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_9] [i_9])) && (((/* implicit */_Bool) 1411738179U))))), (max(((signed char)-106), (var_3)))))))));
    }
    var_31 = ((/* implicit */unsigned short) var_16);
}
