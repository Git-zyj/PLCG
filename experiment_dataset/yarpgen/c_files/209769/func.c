/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209769
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)28720), (((/* implicit */unsigned short) (unsigned char)0))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (var_9)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) ((339017909) << (((((/* implicit */int) (unsigned char)103)) - (103)))));
                var_14 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (1477065761) : (1477065754)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_0 [(unsigned short)12])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)159))))))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) (((-(((/* implicit */int) max(((unsigned char)210), ((unsigned char)35)))))) + ((+(((/* implicit */int) (unsigned char)4))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_11 [0ULL] [i_1] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (short)-32613)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_1] [i_0] [i_0 + 2])) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) arr_5 [i_0] [i_2] [(unsigned char)7] [i_0])))), (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3 - 1]))))))) : ((~(((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) : (arr_9 [i_0] [i_0] [i_3] [(unsigned short)5] [i_2]))))));
                            var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                            var_16 = max((var_2), (((/* implicit */unsigned long long int) var_11)));
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((arr_5 [i_0] [i_1 + 1] [i_1 + 1] [i_3]), (var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [2] [i_1 - 2] [i_1 - 1] [i_1]))) + (arr_8 [i_0 + 2] [i_0 + 2] [i_0] [i_3] [i_2] [(short)4])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65531))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_9 [i_0] [i_1 - 2] [(unsigned char)7] [i_2] [(short)0]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) (unsigned char)84);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)22887)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -1477065755)) : (var_10)))) ? (var_2) : ((~(17252961102167351378ULL))))) : (((/* implicit */unsigned long long int) ((-1477065761) % (((/* implicit */int) (unsigned short)43161)))))));
}
