/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243970
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) var_0)))) : ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_18 -= ((/* implicit */_Bool) ((short) var_6));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min(((unsigned short)62735), (((/* implicit */unsigned short) ((short) (+(var_4))))))))));
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? ((+(((/* implicit */int) min((arr_4 [i_1]), ((short)8191)))))) : (((/* implicit */int) arr_4 [i_1]))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) min(((-((+(var_4))))), (((/* implicit */int) arr_4 [i_1]))));
        arr_7 [i_1] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_4 [i_1])))) & (((/* implicit */int) min((var_3), ((signed char)5))))));
    }
    for (signed char i_2 = 1; i_2 < 19; i_2 += 2) /* same iter space */
    {
        var_20 &= ((/* implicit */long long int) ((((_Bool) var_0)) ? (((((/* implicit */_Bool) arr_10 [i_2 - 1])) ? (((((/* implicit */_Bool) arr_10 [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 + 1] [i_2 - 1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [(unsigned char)8])) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) var_1)))))))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_21 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned char)14] [(unsigned char)14])) ? (arr_8 [(unsigned short)2] [(unsigned short)2]) : (arr_8 [(short)4] [(short)4])))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                arr_17 [i_2] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) <= (((arr_10 [i_3]) << (((arr_16 [i_2 + 1] [i_3] [i_4] [i_4]) - (14244145216681753901ULL)))))))), ((~(((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_13))))))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((unsigned short) (-((+(((/* implicit */int) arr_11 [i_2 + 1] [i_2])))))))));
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_9 [(_Bool)1])), (arr_12 [i_3] [(signed char)14]))) + (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (arr_12 [i_2] [(short)16])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_13 [(signed char)14] [(signed char)14] [(signed char)14])))) : ((-(var_14))))))))));
                /* LoopNest 2 */
                for (long long int i_5 = 2; i_5 < 18; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) arr_12 [i_3] [i_5]);
                            var_25 = ((/* implicit */signed char) ((var_0) ? (((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) (unsigned char)128)))) : (((((/* implicit */_Bool) ((unsigned short) arr_18 [i_2] [i_5 + 1] [i_6] [i_5 + 2] [i_6]))) ? (((/* implicit */int) (short)19337)) : (((((/* implicit */_Bool) arr_21 [i_6] [i_5] [i_4] [i_3] [i_3] [i_2] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))));
                            arr_23 [i_2] [i_3] [i_3] = ((/* implicit */signed char) min((var_14), (((/* implicit */unsigned long long int) var_6))));
                        }
                    } 
                } 
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_26 = arr_27 [i_2] [i_2 - 1] [i_2];
                var_27 += ((/* implicit */long long int) ((arr_19 [i_2] [i_2] [i_3] [i_2] [i_7] [i_7]) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) min((arr_9 [(signed char)14]), ((short)-31933)))) : (((((/* implicit */int) (unsigned short)38020)) - (((/* implicit */int) (unsigned short)38020))))))));
            }
            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)38020))));
            arr_28 [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_2 + 1] [i_3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((+(arr_25 [i_2] [i_2] [i_2])))));
        }
        arr_29 [i_2] [i_2 + 1] = ((/* implicit */unsigned short) arr_11 [i_2 + 1] [i_2 + 1]);
        arr_30 [i_2] = ((/* implicit */signed char) (-(((((/* implicit */int) var_2)) * ((+(((/* implicit */int) var_11))))))));
    }
    for (signed char i_8 = 1; i_8 < 19; i_8 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) var_15)), (var_1)))) || (((/* implicit */_Bool) (unsigned short)38027))))) < (((/* implicit */int) arr_13 [(unsigned char)2] [i_8] [i_8])))))));
        var_30 = ((/* implicit */unsigned int) min(((+(1474518992379250488ULL))), (((/* implicit */unsigned long long int) ((signed char) var_14)))));
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) var_8))));
    }
    var_32 = ((/* implicit */unsigned long long int) var_13);
    var_33 |= ((/* implicit */int) max((((/* implicit */signed char) var_0)), (var_2)));
}
