/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229323
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
    var_18 *= ((/* implicit */int) (~(min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)29470)) != (167996852)))), (((unsigned int) var_6))))));
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 14910017734475446302ULL)) ? (((/* implicit */unsigned long long int) 3365279232U)) : (3536726339234105314ULL)))))) & (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_14))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) / (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_4 [i_0 + 4]))));
                var_21 += ((/* implicit */_Bool) 3536726339234105318ULL);
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3310844338U)) ? (var_7) : (((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (-1161879287))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_23 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) 3536726339234105310ULL)))), (max((3536726339234105313ULL), (((((/* implicit */_Bool) -1161879287)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3 + 3]))) : (var_15)))))));
                            var_24 = ((/* implicit */_Bool) var_16);
                            var_25 *= ((/* implicit */unsigned char) 8ULL);
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 1) 
                            {
                                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((int) arr_5 [i_0 + 3] [i_0 - 1] [i_2 + 1])))));
                                var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-1)))), (14910017734475446332ULL)));
                                var_28 = ((/* implicit */unsigned int) max((1161879286), (((/* implicit */int) ((_Bool) min((1073741824), (((/* implicit */int) var_4))))))));
                                arr_14 [i_0] [i_0] [i_1] [i_2 - 1] [i_3] [i_3 + 3] [i_4 + 1] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_1] [i_3] [i_4 - 1])), (3536726339234105292ULL)))) && (((((/* implicit */_Bool) 1161879304)) || (((/* implicit */_Bool) var_0))))))), (var_15)));
                            }
                            for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 3) /* same iter space */
                            {
                                var_29 = ((int) arr_4 [i_0 - 2]);
                                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_5 - 1]) & (((/* implicit */int) arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3] [i_3 - 2] [i_3 + 1]))))) ? (((((/* implicit */_Bool) 3744479649U)) ? (((/* implicit */unsigned long long int) min((-1161879316), (((/* implicit */int) var_13))))) : (((unsigned long long int) (unsigned char)78)))) : (((/* implicit */unsigned long long int) arr_10 [i_0 + 1] [i_5 + 3] [i_3 + 4] [i_3 - 2]))))));
                                var_31 = ((/* implicit */unsigned long long int) min((var_31), ((+(arr_17 [i_5 - 2] [i_5 + 3] [i_1] [i_2 + 1] [i_1] [i_0 - 2] [i_0 - 2])))));
                            }
                            for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 3) /* same iter space */
                            {
                                arr_21 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0] [i_6 + 1] = ((/* implicit */unsigned short) min((4294967295U), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0]))));
                                arr_22 [i_0] = ((/* implicit */int) var_15);
                                var_32 = ((/* implicit */_Bool) max((var_32), (max((arr_3 [i_0 - 2] [i_1]), ((!(((/* implicit */_Bool) -1161879330))))))));
                                arr_23 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_3 + 2])), (max((((/* implicit */unsigned int) ((var_9) ? (arr_12 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1] [i_6 + 2]) : (((/* implicit */int) var_6))))), (min((((/* implicit */unsigned int) arr_2 [i_3 - 2])), (550487630U)))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5202)) ? (3744479666U) : (4294967295U)));
        arr_26 [6ULL] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-5)), (1161879330)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)22)) ? (405263539U) : (3889703757U)))) : (min((var_1), (((/* implicit */long long int) (-2147483647 - 1))))))), (((/* implicit */long long int) ((550487630U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7] [i_7]))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        for (signed char i_9 = 2; i_9 < 16; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_37 [i_9] [i_10] [i_10] = max((max((((/* implicit */unsigned long long int) arr_15 [i_8] [i_9 - 1] [i_8] [i_10] [i_10])), (var_7))), (var_10));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 16; i_12 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned long long int) max((var_34), (min((min((((/* implicit */unsigned long long int) 3889703777U)), (((((/* implicit */_Bool) 3889703757U)) ? (arr_13 [i_8] [i_8] [i_10] [i_8] [i_12 + 3]) : (((/* implicit */unsigned long long int) 1161879352)))))), (((((/* implicit */_Bool) -1161879330)) ? (((/* implicit */unsigned long long int) 2147483647)) : (((unsigned long long int) 8022220296666273113ULL))))))));
                                var_35 *= ((/* implicit */signed char) ((unsigned char) (_Bool)1));
                                var_36 |= var_17;
                                arr_44 [i_9 + 2] [i_9 + 2] [i_10] [i_10] [i_10] [i_9 - 1] = ((/* implicit */unsigned long long int) ((signed char) var_13));
                            }
                        } 
                    } 
                    var_37 ^= ((/* implicit */_Bool) max((min((var_2), (((/* implicit */unsigned long long int) ((unsigned char) arr_19 [i_9] [i_9 + 2] [i_9]))))), (((/* implicit */unsigned long long int) arr_10 [i_9 + 1] [i_9 + 2] [i_10] [i_9 + 2]))));
                }
            } 
        } 
    } 
}
