/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19229
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
    var_11 = min((min((max((var_2), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (~(var_9)))))), (((((/* implicit */_Bool) var_9)) ? (min((var_10), (((/* implicit */unsigned long long int) (_Bool)1)))) : (min((((/* implicit */unsigned long long int) var_9)), (var_7))))));
    var_12 = ((/* implicit */signed char) (((-(var_4))) - (var_4)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */unsigned long long int) 15640013)) : (18446744073709551609ULL))))), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)17])))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            var_14 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)3))));
                            var_15 = ((/* implicit */unsigned int) ((arr_9 [i_4] [i_4] [i_3] [(unsigned short)7] [i_2] [i_1] [i_0]) & (7ULL)));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            arr_14 [i_0] [i_3] [i_2] [i_2] = ((/* implicit */int) ((short) arr_2 [i_5] [i_5]));
                            var_16 = ((/* implicit */unsigned char) (-(((var_10) / (((/* implicit */unsigned long long int) var_8))))));
                        }
                        for (short i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((unsigned int) var_10));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1]))) : (var_2))) : (var_7)));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            var_18 += ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((var_4) / (arr_5 [i_0] [i_1] [i_1])))) ? (((/* implicit */int) (signed char)-88)) : ((-(((/* implicit */int) (signed char)67)))))) : (((/* implicit */int) var_0))));
                            arr_21 [i_3] [i_3] [i_3] [i_2] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_10)))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [(short)14] [i_3] [i_7])) : (var_9))))))) ? (max((max((3273366706U), (((/* implicit */unsigned int) arr_1 [i_1])))), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) var_9))));
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((((/* implicit */int) (short)-16071)) <= (((/* implicit */int) (signed char)-72)))) ? (((/* implicit */unsigned long long int) max((max((var_9), (((/* implicit */int) arr_6 [i_1])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) < (var_8))))))) : (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) arr_0 [i_3])))))))));
                        }
                        var_21 |= ((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) var_7)) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [18U] [i_3]) : (((/* implicit */unsigned long long int) var_8)))))), (((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_1)))))))));
                    }
                } 
            } 
        } 
        arr_22 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max(((unsigned short)2733), (((/* implicit */unsigned short) (signed char)87))))) : ((+(((/* implicit */int) (_Bool)1))))));
    }
    var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)30115))))) ? (var_7) : (min((var_10), (((/* implicit */unsigned long long int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        for (short i_9 = 4; i_9 < 18; i_9 += 2) 
        {
            {
                arr_29 [i_9] [i_9] |= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_1), (var_1))))))) ? (((/* implicit */int) ((short) ((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_8])), (var_7)))) ? (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */int) arr_17 [i_8] [i_8] [i_9] [i_9] [i_9])) : (((/* implicit */int) var_3)))) : (max((((/* implicit */int) arr_1 [i_9])), (var_9)))))));
                arr_30 [i_8] = ((/* implicit */signed char) var_5);
            }
        } 
    } 
}
