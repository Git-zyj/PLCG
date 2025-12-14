/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49672
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) & (max((5655251250892411126ULL), (((/* implicit */unsigned long long int) var_3))))))) ? ((~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (9123216265784706394LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) <= (var_9)))) & (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1])))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_2] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 394226014U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)38))));
                            /* LoopSeq 4 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_2] = ((/* implicit */_Bool) var_2);
                                arr_16 [i_2] [i_3] [i_2 + 2] [i_1] [i_2] = ((/* implicit */_Bool) var_7);
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_20 [i_2] [i_2] = ((/* implicit */int) ((unsigned char) max((((/* implicit */short) arr_3 [i_0] [i_0])), (arr_5 [i_5] [i_2]))));
                                var_15 = ((/* implicit */unsigned short) (unsigned char)35);
                                var_16 = ((/* implicit */int) 9151314442816847872LL);
                            }
                            for (long long int i_6 = 2; i_6 < 24; i_6 += 2) 
                            {
                                arr_25 [i_0] [i_1] [i_2] [i_2] [12LL] [i_6] [(unsigned char)24] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), ((+(var_9)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_2] [i_6 + 1] [(_Bool)1]), (((/* implicit */unsigned short) arr_2 [15LL])))))) < (max((((/* implicit */unsigned int) arr_3 [i_1] [i_0])), (arr_18 [i_2] [i_1] [i_1] [i_1] [i_1]))))))));
                                var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1073741568U))));
                            }
                            /* vectorizable */
                            for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((arr_12 [i_7] [i_3 - 1] [i_2] [i_1] [i_0]) && (((/* implicit */_Bool) var_10)))))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -913475440507831834LL)) ? (3221225727U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                                arr_30 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) (short)-10510)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)116)))) : (((/* implicit */int) ((unsigned short) var_9)))));
                            }
                            var_20 = ((/* implicit */unsigned int) var_2);
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_3 - 1] [i_3 - 2] [i_2 + 1] [i_2 + 3] [i_2 + 3]))))) ? (((((/* implicit */_Bool) max((var_0), (((/* implicit */short) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (max((((/* implicit */unsigned long long int) (unsigned short)30994)), (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_4 [i_0])))))))));
                        }
                    } 
                } 
                arr_31 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_9)))) ? (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)0)), (var_3)))) ? (((/* implicit */int) max(((signed char)-115), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) arr_24 [(signed char)0] [i_0] [i_0] [i_1] [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [20U] [i_1] [i_0] [i_0] [20U]))))) : (((/* implicit */int) arr_8 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 1; i_8 < 10; i_8 += 1) 
    {
        for (int i_9 = 1; i_9 < 11; i_9 += 1) 
        {
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [(_Bool)1] [i_9 + 1] [i_9] [i_9] [i_9])), (3221225728U)))) ? (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-54))))) : (var_9)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))));
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((short) ((3221225472U) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                arr_36 [(unsigned short)6] [7U] [i_9] = ((/* implicit */unsigned int) var_3);
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_28 [18U]) : (arr_28 [8ULL])));
            }
        } 
    } 
}
