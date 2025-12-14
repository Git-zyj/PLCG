/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51804
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+((-(var_6)))))))))));
    var_14 = ((/* implicit */int) min((((/* implicit */unsigned int) (-((-(var_4)))))), (var_6)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_8))))))) : (min((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (var_2))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_15 = arr_0 [i_1];
                        var_16 = ((/* implicit */signed char) min((max((var_2), (arr_2 [i_0] [i_1]))), (((((/* implicit */_Bool) (unsigned short)16128)) ? (1538652303) : (((/* implicit */int) arr_13 [i_3]))))));
                        var_17 = ((/* implicit */unsigned short) arr_11 [i_0] [i_3] [i_2] [(unsigned char)8] [i_3] [i_0]);
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                        {
                            var_18 += ((/* implicit */long long int) (~(-1538652303)));
                            var_19 = ((/* implicit */unsigned char) ((int) min((((/* implicit */int) var_3)), (-1538652303))));
                            arr_16 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)51250))))) ? (1008) : (((((/* implicit */_Bool) arr_6 [i_1] [(unsigned char)6])) ? (((/* implicit */int) arr_11 [18] [i_4] [4] [i_3] [13LL] [i_2])) : (((/* implicit */int) var_10)))))) >= (((/* implicit */int) max((arr_13 [i_2]), (arr_13 [i_0]))))));
                        }
                        for (int i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) (~(min((max((((/* implicit */long long int) (unsigned char)210)), (arr_15 [i_0] [i_0] [i_2] [i_2] [i_3] [(unsigned char)4] [9U]))), (((/* implicit */long long int) ((signed char) arr_14 [i_0] [i_0] [13LL] [i_0] [(unsigned short)1] [i_0] [i_0])))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 747541530U)) || (((/* implicit */_Bool) (unsigned char)0))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [i_0] [(signed char)4] [i_0] [i_0] = (!(((/* implicit */_Bool) max((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)22))))), (((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */long long int) var_9))))))));
                            var_22 = ((/* implicit */short) arr_17 [(short)17] [(short)17] [i_2] [i_2] [i_6]);
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_3] [i_6] = ((/* implicit */int) (!(((var_7) <= (((/* implicit */int) arr_20 [i_0] [i_1] [(short)15] [i_3] [(unsigned char)0]))))));
                            arr_24 [i_0] [i_1] [i_2] = ((/* implicit */signed char) max((arr_17 [i_0] [i_1] [i_6] [i_3] [i_6]), (((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) var_8)))), ((!(((/* implicit */_Bool) arr_6 [i_0] [i_1])))))))));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) ^ ((~(1008)))))) % (((max((((/* implicit */long long int) arr_9 [i_0] [i_2] [i_3] [i_6])), (arr_19 [i_0] [8LL] [i_0] [i_3]))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_5))))))))))));
                        }
                        arr_25 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) | (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3]))))) ? (((/* implicit */int) arr_20 [i_0] [i_3] [(signed char)8] [i_1] [(unsigned short)6])) : (((/* implicit */int) min((arr_7 [i_3] [i_2] [i_1] [i_0]), (arr_7 [i_3] [i_3] [i_3] [i_3]))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_7 = 1; i_7 < 13; i_7 += 4) 
    {
        arr_28 [i_7] [(unsigned short)4] = ((((/* implicit */_Bool) (signed char)25)) ? (3735398566U) : (((/* implicit */unsigned int) arr_4 [0LL])));
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_7 + 1] [i_7 + 3])) ? (arr_19 [i_7] [i_7 + 2] [i_7 + 2] [i_7 + 2]) : (arr_19 [i_7] [(unsigned short)6] [i_7 + 3] [i_7 + 1])));
            var_25 = ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_8)) & (((/* implicit */int) (_Bool)1)))) : (((arr_27 [i_7]) ? (((/* implicit */int) (unsigned char)225)) : (arr_30 [i_7] [i_8]))));
            arr_33 [4LL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned short)31073)) ? (arr_15 [i_7 + 2] [i_7] [i_7 + 2] [i_7] [14U] [i_8] [i_8]) : (((/* implicit */long long int) -115871448)))) : (((/* implicit */long long int) arr_32 [i_7] [(signed char)8] [i_7]))));
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_6))));
        }
        var_27 = ((/* implicit */unsigned short) (~(0)));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7] [13])) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(unsigned char)5] [i_7 + 3] [(unsigned short)6] [i_7 + 3] [i_7 + 3]))) >= (arr_6 [i_7] [i_7]))))));
    }
    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
    {
        arr_36 [i_9] &= ((/* implicit */signed char) var_12);
        arr_37 [i_9] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_12 [i_9] [i_9])) || ((!(((/* implicit */_Bool) arr_30 [i_9] [i_9])))))) ? (((/* implicit */int) (unsigned short)45449)) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_11 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))) || (((/* implicit */_Bool) 9223372036854775807LL)))))));
        var_29 = ((/* implicit */unsigned int) ((short) arr_11 [(unsigned short)8] [(unsigned short)8] [(unsigned char)10] [i_9] [i_9] [i_9]));
    }
    var_30 = ((/* implicit */unsigned char) var_11);
    var_31 = ((/* implicit */unsigned int) var_12);
}
