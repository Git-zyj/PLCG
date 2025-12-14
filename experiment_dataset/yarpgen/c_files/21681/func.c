/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21681
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_17))) * (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))))) != (min((min((((/* implicit */unsigned long long int) var_3)), (var_8))), (((/* implicit */unsigned long long int) ((unsigned int) var_12)))))));
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((var_7) > (((/* implicit */int) var_1)))) ? ((+(var_6))) : (((var_12) ^ (((/* implicit */unsigned int) var_7)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) - (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_1 - 2] [i_2])))))));
                            var_23 = ((((/* implicit */_Bool) ((var_19) - (((/* implicit */int) arr_11 [i_4]))))) ? (((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [(signed char)17] [(signed char)17] [i_3]))))) : (((/* implicit */unsigned long long int) (-(var_7)))));
                        }
                        for (int i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            var_24 = ((/* implicit */long long int) (+(((unsigned long long int) var_16))));
                            var_25 = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0]))))));
                        }
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((var_17) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_1] [i_3 + 3]))))))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_13))) : (((/* implicit */unsigned long long int) var_5))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */long long int) arr_14 [i_0] [i_6] [i_7] [i_7 - 1] [i_7] [i_7 - 1])) ^ (arr_3 [i_0] [i_7]))));
                    var_29 = ((/* implicit */unsigned int) (((!(var_0))) ? (((/* implicit */int) ((short) var_7))) : (((/* implicit */int) arr_17 [i_0] [i_6] [i_7] [i_7] [(unsigned char)8] [i_7]))));
                    var_30 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) var_5)) : (var_16)))));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 18; i_8 += 1) 
                    {
                        for (int i_9 = 1; i_9 < 18; i_9 += 4) 
                        {
                            {
                                arr_29 [i_9] [i_6] [i_9 + 1] [i_9] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)3655)) : (286042704)));
                                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(_Bool)1] [(_Bool)1] [i_7 - 1] [i_7 - 1]))) * (var_16)))))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */long long int) var_0);
                }
            } 
        } 
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((unsigned int) arr_24 [i_0] [i_0] [i_0] [i_0])))));
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [(short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10)))) : (((unsigned int) var_6))));
    }
}
