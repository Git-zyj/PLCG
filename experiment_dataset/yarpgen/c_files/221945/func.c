/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221945
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
    var_14 = ((/* implicit */unsigned char) var_0);
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)60229)) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) min((3105989053U), (((/* implicit */unsigned int) (unsigned char)15))))) ? (((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)73))))) : (((int) var_12)))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_11))))) < (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_10))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_16 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) ^ (arr_0 [i_0])))) | ((~(((17392994003426504580ULL) | (((/* implicit */unsigned long long int) var_12))))))));
        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_1 [i_0]))) - ((+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (short)538)))))))));
        var_18 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) (short)32760)))) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))))))) ^ (max((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0])))));
        var_19 = ((/* implicit */short) ((((long long int) (signed char)39)) ^ (((((max((arr_0 [i_0]), (arr_0 [i_0]))) + (9223372036854775807LL))) << ((((((~(((/* implicit */int) arr_2 [i_0] [i_0])))) + (18399))) - (63)))))));
        var_20 = ((/* implicit */unsigned short) ((short) arr_0 [i_0]));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (unsigned short)42297)) ^ (((/* implicit */int) var_4)))) : (((/* implicit */int) var_10))))) ? ((-(arr_1 [i_1]))) : ((+(((/* implicit */int) arr_5 [i_1] [i_1]))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((var_0) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))))) <= (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1] [i_1])) ^ (((/* implicit */int) arr_4 [i_1])))))))) - (((/* implicit */int) arr_4 [i_1]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
        {
            arr_11 [i_2] = ((/* implicit */unsigned char) (short)0);
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
                            var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_12 [i_1] [i_2] [i_3]))) ? (arr_13 [i_1] [i_3] [i_4] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)32283)))) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)0))))) & (12352646211614013723ULL)))));
                        }
                    } 
                } 
            } 
            var_25 += ((/* implicit */short) ((((/* implicit */_Bool) min(((short)0), (((/* implicit */short) (unsigned char)166))))) ? (((((/* implicit */_Bool) (unsigned short)32954)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65510)))) : (((/* implicit */int) var_8))));
            var_26 = ((/* implicit */short) arr_0 [i_1]);
            var_27 &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2] [i_2]))) != (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0)))))) <= (((/* implicit */int) ((_Bool) ((signed char) var_0))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_7 [i_6] [i_6]), (arr_7 [i_1] [i_6])))), (((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_6])) : (((/* implicit */int) arr_7 [i_1] [i_6]))))));
            var_29 = ((/* implicit */unsigned long long int) ((short) (unsigned short)28672));
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) & (((/* implicit */int) arr_17 [4] [(unsigned short)6] [i_6] [5LL] [i_6] [i_6]))));
        }
    }
}
